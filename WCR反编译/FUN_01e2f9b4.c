// FUN_01e2f9b4 @ 01e2f9b4

/* WARNING: Type propagation algorithm not settling */

void FUN_01e2f9b4(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_38;
  ulong local_30 [3];
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_30[1] = 0;
  local_30[2] = param_2;
  _objc_storeStrong(local_30 + 1,param_3);
  uVar1 = local_30[2];
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  local_30[0] = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = &cf_wcr_sf_urlscheme_tap_;
  uVar2 = local_30[0];
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30[0],PTR_s_hasPrefix__0269d320,&cf_wcr_sf_urlscheme_tap_);
  uVar1 = local_30[0];
  if ((uVar2 & 1) != 0) {
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_substringFromIndex__0269d120,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showActionsForIndex__026c6390,uVar2);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(local_30,0);
  _objc_storeStrong(local_30 + 1,0);
  _objc_storeStrong(&local_18,0);
  return;
}

