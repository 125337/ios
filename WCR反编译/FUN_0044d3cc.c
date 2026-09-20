// FUN_0044d3cc @ 0044d3cc

void FUN_0044d3cc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *local_40 [3];
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineLocalEmoticonStore_026ce440;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isEnabled_026a0ef0);
  if ((((ulong)puVar1 & 1) != 0) &&
     (uVar2 = local_18, FUN_0045f078(), puVar1 = PTR_WCRefineLocalEmoticonStore_026ce440,
     (uVar2 & 1) != 0)) {
    uVar2 = local_18;
    FUN_0045fe90();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_relativePathResolvingWrap__026a3d80);
    _objc_retainAutoreleasedReturnValue();
    local_40[0] = puVar1;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar1 = local_40[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_length_0269cca0);
    if (puVar1 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_pinRelativePathToFront__026a3eb0,
                 local_40[0]);
      FUN_00460088(local_18);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__y0R);
    }
    _objc_storeStrong(local_40,0);
    if (puVar1 != (undefined *)0x0) goto LAB_0044d5e8;
  }
  (*DAT_028caac0)(local_18,local_20,local_28);
LAB_0044d5e8:
  _objc_storeStrong(&local_28,0);
  return;
}

