// FUN_0075cc2c @ 0075cc2c

void FUN_0075cc2c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  pcVar1 = &cf_wcr_special_original_search_didMoveToWindow;
  _NSSelectorFromString();
  (*(code *)PTR__objc_msgSend_02578628)(local_18,pcVar1);
  FUN_0075e8fc(local_18);
  _objc_storeStrong(&local_18,0);
  return;
}

