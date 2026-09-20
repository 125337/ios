// FUN_0071ed08 @ 0071ed08

void FUN_0071ed08(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *local_78;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38 [3];
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  local_78 = local_18;
  FUN_0071f3b4();
  _objc_retainAutoreleasedReturnValue();
  local_20 = local_78;
  FUN_0071f644();
  _objc_retainAutoreleasedReturnValue();
  local_38[0] = local_78;
  if (local_78 == (cfstringStruct *)0x0) {
    local_3c = 1;
  }
  else {
    FUN_0071ef54();
    bVar1 = ((ulong)local_78 & 1) == 0;
    if (bVar1) {
      FUN_0071f99c();
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_78;
    }
    else {
      local_78 = &cf__cbNnS;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_78;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_setText__026caa88,local_48);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38[0],PTR_s_setAccessibilityLabel__0269e968,local_48);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setAccessibilityLabel__0269e968,local_48);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(local_38);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

