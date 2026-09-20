// FUN_002ecc4c @ 002ecc4c

void FUN_002ecc4c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_30;
  undefined4 local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = PTR_WCRefineForwardToGroupHelper_026ce518;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineForwardToGroupHelper_026ce518,PTR_s_multiSelectEntryEnabled_026a1e38);
  if (((ulong)puVar1 & 1) == 0) {
    local_28 = 1;
  }
  else {
    uVar2 = local_18;
    FUN_002ecfd8();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar2;
    if ((uVar2 == 0) ||
       (FUN_002ed404(), puVar1 = PTR_s_WCRefine_onMultiSelectForwardToG_026a1e20, (uVar2 & 1) != 0))
    {
      local_28 = 1;
    }
    else {
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,
                 PTR_s_WCRefine_onMultiSelectForwardToG_026a1e20);
      if ((uVar2 & 1) == 0) {
        local_28 = 1;
      }
      else {
        uVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_respondsToSelector__026ca818,
                   PTR_s_addButtonWithImageName_target_ac_026a1e40);
        if ((uVar2 & 1) == 0) {
          local_28 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_addButtonWithImageName_target_ac_026a1e40,&cf_share_regular,
                     local_18,puVar1,&cf_lSR_);
          uVar2 = local_30;
          puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(uVar2,&DAT_028c99b0,puVar1,1);
          (*(code *)PTR__objc_release_02578630)(puVar1);
          uVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_setNeedsLayout_0269deb8);
          if ((uVar2 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setNeedsLayout_0269deb8);
          }
          uVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_layoutIfNeeded_026ca790);
          if ((uVar2 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_layoutIfNeeded_026ca790);
          }
          local_28 = 0;
        }
      }
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

