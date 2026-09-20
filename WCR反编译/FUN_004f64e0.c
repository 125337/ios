// FUN_004f64e0 @ 004f64e0

void FUN_004f64e0(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_80;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined4 local_30;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_30 = 1;
  }
  else {
    pcVar1 = local_20;
    FUN_004f6d40(local_20,&cf_<_[CDATA[,&cf___>);
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      _objc_storeStrong(&local_38,local_20);
    }
    pcVar1 = local_38;
    FUN_004f6d40(local_38,&cf_<content>,&cf_<_content>);
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
    if (pcVar1 != (cfstringStruct *)0x0) {
      _objc_storeStrong(pcVar1,&local_38,local_40);
    }
    if (local_38 == (cfstringStruct *)0x0) {
      local_80 = &cf___;
    }
    else {
      local_80 = local_38;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_80;
    local_30 = 1;
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

