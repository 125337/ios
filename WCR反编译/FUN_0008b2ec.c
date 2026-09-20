// FUN_0008b2ec @ 0008b2ec

byte FUN_0008b2ec(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_88;
  bool local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40 [3];
  undefined4 local_24;
  cfstringStruct *local_20;
  byte local_11;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == (cfstringStruct *)0x0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    pcVar1 = local_20;
    FUN_0007f980(local_20,&cf_MsgFileBrowse,0xc);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_88 = local_20;
      FUN_00071ca0();
      _objc_retainAutoreleasedReturnValue();
      local_51 = local_88 == (cfstringStruct *)0x0;
      local_40[0] = local_88;
      if (local_51) {
        local_88 = &cf___;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_class_0269cd60);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        local_50 = local_88;
      }
      local_51 = !local_51;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = local_88;
      if (local_51) {
        (*(code *)PTR__objc_release_02578630)(local_50);
      }
      pcVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_containsString__0269d0b0,&cf_MsgFileBrowse);
      local_11 = (byte)pcVar1 & 1;
      local_24 = 1;
      _objc_storeStrong(&local_48);
      _objc_storeStrong(local_40,0);
    }
    else {
      local_11 = 1;
      local_24 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

