// FUN_01bdda28 @ 01bdda28

void FUN_01bdda28(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong local_40;
  ulong local_30;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar4 = param_1 + 0x28;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  bVar2 = false;
  bVar1 = false;
  bVar3 = true;
  local_28 = uVar4;
  if (uVar4 != 0) {
    uVar6 = *(ulong *)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_detailGeneration_026c0738);
    bVar3 = true;
    if (uVar6 == uVar4) {
      local_30 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      local_40 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      bVar3 = local_40 != local_28;
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  if (!bVar3) {
    if (*(long *)(param_1 + 0x20) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_ag_X__NX__WbelS);
    }
    else {
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_openOfficialMomentsDetailForItem_026c08d8,
                 *(undefined8 *)(param_1 + 0x20));
      if ((uVar4 & 1) == 0) {
        uVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_WCRMomentsCacheDetailViewController_026cf450;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        FUN_01bcec58(uVar4);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

