// FUN_0024b358 @ 0024b358

void FUN_0024b358(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineEmoticonGroupStore_026ce420;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_isEnabled_026a0ef0);
  if (((ulong)puVar1 & 1) == 0) {
    local_38 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
    local_40 = 0;
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_dataLogic_026a0f10);
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar2;
    if ((uVar2 != 0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_md5ListForMarkItems_026a0f18),
       (uVar2 & 1) != 0)) {
      uVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_md5ListForMarkItems_026a0f18);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_40;
      local_40 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    _objc_storeStrong(&local_48,0);
    uVar2 = local_40;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((uVar2 & 1) == 0) ||
       (uVar2 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0),
       uVar2 == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQbh_);
      local_38 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_WCRefine_presentMoveToGroupSheet_026a0e10,local_40);
      local_38 = 0;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

