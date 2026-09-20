// FUN_0075e280 @ 0075e280

void FUN_0075e280(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = &cf_wcr_special_original_setAttributedText_;
  _NSSelectorFromString();
  (*(code *)PTR__objc_msgSend_02578628)(local_18,pcVar1,local_28);
  FUN_00767584(local_18);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

