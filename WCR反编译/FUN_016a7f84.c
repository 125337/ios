// FUN_016a7f84 @ 016a7f84

void FUN_016a7f84(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*DAT_028e3e08)(local_18,local_20,local_28);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_traitCollection_026caba8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_userInterfaceStyle_026cabc8);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((((uVar2 != uVar3) && (local_18 != 0)) &&
      (uVar1 = local_18, (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isViewLoaded_0269cde0)
      , (uVar1 & 1) != 0)) &&
     (((uVar1 = local_18,
       (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isBeingDismissed_0269f460),
       (uVar1 & 1) == 0 &&
       (uVar1 = local_18,
       (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isBeingPresented_026b2e18),
       puVar4 = PTR___dispatch_main_q_02578680, (uVar1 & 1) == 0)) && ((DAT_028e3f20 & 1) == 0)))) {
    DAT_028e3f20 = 1;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

