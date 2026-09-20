// FUN_01e310b8 @ 01e310b8

void FUN_01e310b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_20;
  FUN_01e38284(local_20,&cf_wcr_sf_urlscheme_toggle_);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_toggleEnabledAtIndex__026c63c8,uVar1);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

