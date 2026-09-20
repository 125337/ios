// FUN_0199a634 @ 0199a634

byte FUN_0199a634(undefined8 param_1,undefined8 param_2,byte param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int local_184;
  undefined8 local_c8;
  undefined8 local_c0;
  byte local_b1;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  byte local_65;
  int local_64;
  long local_60;
  ulong local_58;
  undefined *local_50;
  undefined8 *local_48;
  byte local_39;
  long local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_48 = param_4;
  local_39 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_30;
  local_50 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_stringByStandardizingPath_026cab38);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = local_38;
  local_58 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_stringByStandardizingPath_026cab38);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_58;
  local_60 = lVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  if ((uVar3 == 0) ||
     (lVar4 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
     lVar4 == 0)) {
    local_21 = 0;
    local_64 = 1;
    goto LAB_0199ad28;
  }
  puVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_fileExistsAtPath__026ca630,local_58);
  if (((ulong)puVar2 & 1) == 0) {
    local_21 = 0;
    local_64 = 1;
    goto LAB_0199ad28;
  }
  uVar3 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,local_60);
  if ((uVar3 & 1) != 0) {
    local_21 = 1;
    local_64 = 1;
    goto LAB_0199ad28;
  }
  puVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_fileExistsAtPath__026ca630,local_60);
  local_65 = (byte)puVar2;
  if ((((ulong)puVar2 & 1) == 0) ||
     (uVar3 = local_58, FUN_0197ca78(local_58,local_60), lVar4 = local_60, (uVar3 & 1) == 0)) {
    if ((local_65 & 1) != 0) {
      local_a0 = 0;
      local_a8 = 0;
      puVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_removeItemAtPath_error__0269f910,local_60,&local_a8);
      _objc_storeStrong(&local_a0,local_a8);
      uVar1 = local_a0;
      if (((ulong)puVar2 & 1) == 0) {
        if (local_48 != (undefined8 *)0x0) {
          _objc_retainAutorelease();
          *local_48 = uVar1;
        }
        local_21 = 0;
        local_64 = 1;
      }
      else {
        local_64 = 0;
      }
      _objc_storeStrong(&local_a0,0);
      if (local_64 != 0) goto LAB_0199ad28;
    }
    local_b0 = 0;
    if ((local_39 & 1) == 0) {
      local_c8 = 0;
      puVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_copyItemAtPath_toPath_error__026a1758,local_58,local_60,&local_c8);
      local_184 = (int)puVar2;
      _objc_storeStrong(&local_b0,local_c8);
    }
    else {
      local_c0 = 0;
      puVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_moveItemAtPath_toPath_error__0269f940,local_58,local_60,&local_c0);
      local_184 = (int)puVar2;
      _objc_storeStrong(&local_b0,local_c0);
    }
    uVar1 = local_b0;
    local_b1 = local_184 != 0;
    if ((!(bool)local_b1) && (local_48 != (undefined8 *)0x0)) {
      _objc_retainAutorelease();
      *local_48 = uVar1;
    }
    local_21 = local_b1 & 1;
    local_64 = 1;
    _objc_storeStrong(&local_b0,0);
    goto LAB_0199ad28;
  }
  uVar3 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_lastPathComponent_026ca780);
  _objc_retainAutoreleasedReturnValue();
  FUN_0199d024();
  _objc_retainAutoreleasedReturnValue();
  local_70 = lVar4;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  local_78 = 0;
  if ((local_39 & 1) == 0) {
    local_88 = 0;
    puVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_copyItemAtPath_toPath_error__026a1758,local_58,local_70,&local_88);
    _objc_storeStrong(&local_78,local_88);
    uVar1 = local_78;
    if (((ulong)puVar2 & 1) != 0) goto LAB_0199a9b4;
    if (local_48 != (undefined8 *)0x0) {
      _objc_retainAutorelease();
      *local_48 = uVar1;
    }
    local_21 = 0;
  }
  else {
    local_80 = 0;
    puVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_moveItemAtPath_toPath_error__0269f940,local_58,local_70,&local_80);
    _objc_storeStrong(&local_78,local_80);
    uVar1 = local_78;
    if (((ulong)puVar2 & 1) == 0) {
      if (local_48 != (undefined8 *)0x0) {
        _objc_retainAutorelease();
        *local_48 = uVar1;
      }
      local_21 = 0;
    }
    else {
LAB_0199a9b4:
      local_90 = local_78;
      puVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_removeItemAtPath_error__0269f910,local_60,&local_90);
      _objc_storeStrong(&local_78,local_90);
      if (((ulong)puVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_moveItemAtPath_toPath_error__0269f940,local_70,local_58,0);
        uVar1 = local_78;
        if (local_48 != (undefined8 *)0x0) {
          _objc_retainAutorelease();
          *local_48 = uVar1;
        }
        local_21 = 0;
      }
      else {
        local_98 = local_78;
        puVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_moveItemAtPath_toPath_error__0269f940,local_70,local_60,&local_98)
        ;
        _objc_storeStrong(&local_78,local_98);
        uVar1 = local_78;
        if (((ulong)puVar2 & 1) == 0) {
          if (local_48 != (undefined8 *)0x0) {
            _objc_retainAutorelease();
            *local_48 = uVar1;
          }
          local_21 = 0;
        }
        else {
          local_21 = 1;
        }
      }
    }
  }
  local_64 = 1;
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
LAB_0199ad28:
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

