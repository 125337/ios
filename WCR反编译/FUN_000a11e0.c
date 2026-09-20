// FUN_000a11e0 @ 000a11e0

void FUN_000a11e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_b0;
  ulong local_90;
  ulong local_60;
  ulong local_50;
  bool local_41;
  ulong local_40;
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_41 = false;
  bVar1 = DAT_028c8020 == (code *)0x0;
  if (bVar1) {
    local_90 = local_18;
  }
  else {
    local_90 = local_18;
    (*DAT_028c8020)(local_18,local_20,local_28,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_90;
  }
  local_41 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_90;
  if ((local_41 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  local_50 = 0;
  pcVar2 = &cf_screenEdgePanGestureRecognizer;
  _NSSelectorFromString();
  uVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,pcVar2);
  if ((uVar3 & 1) != 0) {
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,pcVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_50;
    local_50 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  uVar3 = local_38;
  uVar4 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  local_b0 = uVar4;
  if (uVar4 == 0) {
    local_60 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = local_60;
  }
  FUN_000a2828(uVar3,local_b0);
  if (uVar4 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  (*(code *)PTR__objc_release_02578630)(uVar4);
  uVar3 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar3);
  return;
}

