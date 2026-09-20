// FUN_0053d80c @ 0053d80c

void FUN_0053d80c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_50;
  ulong local_48;
  undefined1 local_3d;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_momentsDraftEnabled_026a4d60);
  if (((ulong)puVar1 & 1) == 0) {
    (*DAT_028cb2d0)(local_18,local_20,local_28);
  }
  else {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefineHasDraftContent_026a4cd8);
    local_3d = (undefined1)uVar2;
    if ((uVar2 & 1) != 0) {
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefineGetCurrentDraftModel_026a4d20);
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar2;
      if (uVar2 != 0) {
        uVar2 = local_18;
        _objc_getAssociatedObject(local_18,_kWCRefineDraftEditingIndexKey);
        _objc_retainAutoreleasedReturnValue();
        local_50 = uVar2;
        if ((uVar2 == 0) ||
           ((*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_integerValue_026ca750),
           (long)uVar2 < 0)) {
          puVar1 = PTR_WCRefineMomentsDraftManager_026ce740;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineMomentsDraftManager_026ce740,PTR_s_sharedManager_0269db78);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar1);
        }
        else {
          puVar1 = PTR_WCRefineMomentsDraftManager_026ce740;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineMomentsDraftManager_026ce740,PTR_s_sharedManager_0269db78);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_integerValue_026ca750);
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_updateDraftAtIndex_withDraft__026a4d70,uVar2,local_48);
          (*(code *)PTR__objc_release_02578630)(puVar1);
        }
        _objc_setAssociatedObject(local_18,_kWCRefineDraftEditingIndexKey,0,1);
        _objc_storeStrong(&local_50,0);
      }
      _objc_storeStrong(&local_48,0);
    }
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_doExit_026a4d68);
    if ((uVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_onCancelSaveBtnClickedWithTag__026a4d80,local_28);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_performSelector__026ca7b8,PTR_s_doExit_026a4d68);
    }
  }
  _objc_storeStrong(&local_30,0);
  return;
}

