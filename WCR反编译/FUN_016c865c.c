// FUN_016c865c @ 016c865c

byte FUN_016c865c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  byte local_174;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  byte local_91;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  undefined4 local_60;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  uVar1 = local_30;
  local_50 = param_5;
  local_48 = param_4;
  local_40 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_016bdfb0();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((uVar2 & 1) == 0) {
    local_21 = 0;
    local_60 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_69 = 0;
    local_68 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_30,&local_69);
    if ((((ulong)puVar3 & 1) == 0) || ((local_69 & 1) != 0)) {
      local_21 = 0;
      local_60 = 1;
    }
    else {
      FUN_016c9930();
      _objc_retainAutoreleasedReturnValue();
      local_78 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_createDirectoryAtPath_withInterm_0269e230,puVar3,1,0);
      uVar4 = local_38;
      FUN_016c9a30(local_38,local_30);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_78;
      local_80 = uVar4;
      FUN_016ca1c4();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringByAppendingPathComponent__026cab30);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      FUN_016c9bc8();
      _objc_retainAutoreleasedReturnValue();
      local_88 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(uVar4);
      local_90 = 0;
      local_a0 = 0;
      puVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_copyItemAtPath_toPath_error__026a1758,local_30,local_88,&local_a0);
      _objc_storeStrong(&local_90,local_a0);
      local_91 = (byte)puVar3;
      if (((ulong)puVar3 & 1) == 0) {
        local_b0 = local_90;
        puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile_options_e_026a09f0
                   ,local_30,1,&local_b0);
        _objc_retainAutoreleasedReturnValue();
        _objc_storeStrong(&local_90,local_b0);
        local_a8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
        local_174 = 0;
        if (puVar3 != (undefined *)0x0) {
          local_b8 = local_90;
          puVar3 = local_a8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a8,PTR_s_writeToFile_options_error__026a0a68,local_88,1,&local_b8);
          local_174 = (byte)puVar3;
          _objc_storeStrong(&local_90,local_b8);
        }
        local_91 = local_174 & 1;
        _objc_storeStrong(&local_a8,0);
      }
      uVar4 = local_90;
      if ((local_91 & 1) == 0) {
        if (local_50 != (undefined8 *)0x0) {
          _objc_retainAutorelease();
          *local_50 = uVar4;
        }
        local_21 = 0;
        local_60 = 1;
      }
      else {
        puVar5 = local_88;
        FUN_016ca70c();
        _objc_retainAutoreleasedReturnValue();
        local_c0 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_length_0269cca0);
        puVar3 = local_88;
        if (puVar5 == (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_removeItemAtPath_error__0269f910,local_88,0);
          local_21 = 0;
        }
        else {
          if (local_40 != (undefined8 *)0x0) {
            _objc_retainAutorelease();
            *local_40 = puVar3;
          }
          puVar3 = local_c0;
          if (local_48 != (undefined8 *)0x0) {
            _objc_retainAutorelease();
            *local_48 = puVar3;
          }
          local_21 = 1;
        }
        local_60 = 1;
        _objc_storeStrong(&local_c0,0);
      }
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_78,0);
    }
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

