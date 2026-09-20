// FUN_00239708 @ 00239708

void FUN_00239708(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *local_e0;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined4 local_54;
  ulong local_50 [3];
  undefined *local_38;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  puVar1 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_026cdff0;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithStyle__026ca710,1);
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_prepare_026ca7d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_impactOccurred_026ca6a0);
  _objc_storeStrong(&local_38,0);
  uVar2 = local_28;
  FUN_00236094();
  _objc_retainAutoreleasedReturnValue();
  local_50[0] = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if ((uVar2 == 0) || (uVar2 = local_50[0], FUN_0022b864(), (uVar2 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setOn__0269dc80,0);
    local_54 = 1;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_redEnvelopAutoReceiveEnable_026a0ae0);
    if (((ulong)puVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setOn__0269dc80,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQ);
      local_54 = 1;
    }
    else {
      puVar1 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_redEnvelopSkipPersonList_026a0ae8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_e0 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        local_70 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_e0 = local_70;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_mutableCopy_0269d8a0);
      local_68 = local_e0;
      if (puVar3 == (undefined *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isOn_0269d560);
      if ((uVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_removeObject__0269d678,local_50[0]);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_setRedEnvelopSkipPersonList__026a0bb0,local_68);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__sQNbdkN_S);
      }
      else {
        puVar1 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_containsObject__0269cbb8,local_50[0]);
        if (((ulong)puVar1 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_addObject__0269d180,local_50[0]);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_setRedEnvelopSkipPersonList__026a0bb0,local_68);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__);
      }
      _objc_storeStrong(&local_68,0);
      local_54 = 0;
    }
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(local_50);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

