// FUN_0053d544 @ 0053d544

void FUN_0053d544(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_30;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_WCRefineHasDraftContent_026a4cd8);
  if ((param_1 & 1) == 0) goto LAB_0053d7e0;
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefineGetCurrentDraftModel_026a4d20);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  if (uVar1 != 0) {
    uVar1 = local_18;
    _objc_getAssociatedObject(local_18,_kWCRefineDraftEditingIndexKey);
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    if (uVar1 == 0) {
LAB_0053d6ec:
      puVar2 = PTR_WCRefineMomentsDraftManager_026ce740;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineMomentsDraftManager_026ce740,PTR_s_sharedManager_0269db78);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_integerValue_026ca750);
      if ((long)uVar1 < 0) goto LAB_0053d6ec;
      puVar2 = PTR_WCRefineMomentsDraftManager_026ce740;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineMomentsDraftManager_026ce740,PTR_s_sharedManager_0269db78);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_integerValue_026ca750);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_updateDraftAtIndex_withDraft__026a4d70,uVar1,local_28);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    _objc_setAssociatedObject(local_18,_kWCRefineDraftEditingIndexKey,0,1);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_28,0);
LAB_0053d7e0:
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_doExit_026a4d68);
  return;
}

