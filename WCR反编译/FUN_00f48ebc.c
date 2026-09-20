// FUN_00f48ebc @ 00f48ebc

void FUN_00f48ebc(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *local_30;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  local_20 = param_1;
  local_18 = param_1;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_setValue_forKey__0269d300,*(undefined8 *)(param_1 + 0x28),
             &cf_buttonTitleList);
  puVar2 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVCView_026a0f78);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_28;
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_showInView__0269d310);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_performSelector_withObject__026ca7c0,PTR_s_showInView__0269d310,
               local_30);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

