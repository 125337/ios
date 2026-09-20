// FUN_00883a30 @ 00883a30

void FUN_00883a30(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_48 [3];
  undefined *local_30;
  undefined4 local_24;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_24 = 1;
  }
  else {
    local_30 = PTR_s_m_nsUsrName_0269d638;
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638);
    if (((ulong)pcVar1 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___;
      local_24 = 1;
    }
    else {
      pcVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_48[0] = pcVar1;
      FUN_008825d8();
      _objc_retainAutoreleasedReturnValue();
      local_24 = 1;
      local_18 = pcVar1;
      _objc_storeStrong(local_48,0);
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

