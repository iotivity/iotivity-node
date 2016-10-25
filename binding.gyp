{
    "variables": {
        "iotivityOutDir": '<(module_root_dir)\\..\\iotivity\\out\\windows\\amd64\\debug\\',
        "iotivityLibDir": '<(iotivityOutDir)lib\\',
        "iotivityIncDir": '<(iotivityOutDir)include\\',
        "iotivityIncDirsPrivate": # TODO: Remove need for private includes?
            '<(module_root_dir)\\..\\iotivity\\resource\\c_common\\ocrandom\\include'
    },

    "conditions": [
    ],

    "target_defaults": {
        "include_dirs": [
            "<!(node -e \"require('nan')\")",
            '<(iotivityIncDir)resource',
            '<(iotivityIncDir)c_common',
        ],
        "conditions": [
        ]
    },

    "targets": [
        {
            "target_name": "iotivity",
            "libraries": [
                "<(iotivityLibDir)octbstack.lib"
            ],
            "include_dirs": [
                '<(iotivityIncDir)resource',
                '<(iotivityIncDir)c_common',
                "<(iotivityIncDirsPrivate)"
            ],
            "sources": [
                "generated/constants.cc",
                "generated/enums.cc",
                "generated/functions.cc",
                "src/functions/oc-cancel.cc",
                "src/functions/oc-create-delete-resource.cc",
                "src/functions/oc-do-resource.cc",
                "src/functions/oc-do-response.cc",
                "src/functions/oc-notify.cc",
                "src/functions/oc-random.cc",
                "src/functions/oc-register-persistent-storage-handler.cc",
                "src/functions/oc-set-default-device-entity-handler.cc",
                "src/functions/simple.cc",
                "src/main.cc",
                "src/structures.cc",
                "src/structures/handles.cc",
                "src/structures/oc-client-response.cc",
                "src/structures/oc-dev-addr.cc",
                "src/structures/oc-device-info.cc",
                "src/structures/oc-entity-handler-response.cc",
                "src/structures/oc-header-option-array.cc",
                "src/structures/oc-identity.cc",
                "src/structures/oc-payload.cc",
                "src/structures/oc-platform-info.cc",
                "src/structures/oc-sid.cc",
                "src/structures/string-primitive.cc"
            ],
        }
    ]
}
