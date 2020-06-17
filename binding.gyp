{
  "targets": [
    {
      "target_name": "rwar",
      "defines": [
        "NAPI_DISABLE_CPP_EXCEPTIONS"
      ],
      "include_dirs": [
        "<!@(node -p \"require('node-addon-api').include\")"
      ],
      "sources": [
        "node/binding.cc",
      ]
    }
  ]
}
