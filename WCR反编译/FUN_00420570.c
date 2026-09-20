// FUN_00420570 @ 00420570

void FUN_00420570(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_48;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar1 = local_30;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_48 = 1;
  }
  else {
    FUN_004209dc();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_38;
    local_50 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar2;
      local_48 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_getContactByName__0269d178,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_58 = pcVar1;
      FUN_00420bd0();
      pcVar2 = local_38;
      if (((ulong)pcVar1 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar2;
        local_48 = 1;
      }
      else {
        pcVar2 = local_58;
        FUN_00420e2c(local_58,PTR_s_m_nsRemark_0269d760);
        _objc_retainAutoreleasedReturnValue();
        local_60 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
        pcVar1 = local_60;
        if (pcVar2 == (cfstringStruct *)0x0) {
          pcVar2 = local_58;
          FUN_00420e2c(local_58,PTR_s_getContactDisplayName_0269d160);
          _objc_retainAutoreleasedReturnValue();
          local_68 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
          pcVar1 = local_68;
          if (pcVar2 == (cfstringStruct *)0x0) {
            pcVar2 = local_58;
            FUN_00420e2c(local_58,PTR_s_m_nsNickName_0269d758);
            _objc_retainAutoreleasedReturnValue();
            local_70 = pcVar2;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
            local_28 = local_38;
            pcVar1 = local_70;
            if (pcVar2 == (cfstringStruct *)0x0) {
              (*(code *)PTR__objc_retain_02578638)();
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_28 = pcVar1;
            }
            local_48 = 1;
            _objc_storeStrong(&local_70,0);
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = pcVar1;
            local_48 = 1;
          }
          _objc_storeStrong(&local_68,0);
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = pcVar1;
          local_48 = 1;
        }
        _objc_storeStrong(&local_60,0);
      }
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

