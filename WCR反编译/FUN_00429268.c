// FUN_00429268 @ 00429268

void FUN_00429268(undefined8 param_1)

{
  long lVar1;
  cfstringStruct *pcVar2;
  long *local_78;
  cfstringStruct *local_48;
  long local_40;
  undefined4 local_38;
  long local_28;
  long local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_38 = 1;
  }
  else {
    lVar1 = local_28;
    FUN_0040d5d4(local_28,&cf_msg);
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    if (lVar1 == 0) {
      local_78 = &local_28;
    }
    else {
      local_78 = &local_40;
    }
    pcVar2 = (cfstringStruct *)*local_78;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = pcVar2;
    FUN_0040d830(pcVar2,&cf_fromusername);
    _objc_retainAutoreleasedReturnValue();
    local_38 = 1;
    local_18 = pcVar2;
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

