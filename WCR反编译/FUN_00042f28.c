// FUN_00042f28 @ 00042f28

void FUN_00042f28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_48;
  ulong local_40;
  long local_38;
  undefined4 local_30;
  ulong local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  puVar1 = PTR_WCRefineDoNotDisturbSupport_026ce118;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineDoNotDisturbSupport_026ce118,PTR_s_isEffectivelyActive_0269d708);
  if (((ulong)puVar1 & 1) != 0) {
    local_30 = 1;
    goto LAB_000432a0;
  }
  lVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_objectForKeyedSubscript__0269d098,&cf_session);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_0003102c();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar3;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  lVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  uVar4 = local_20;
  if (lVar2 == 0) {
LAB_000430d0:
    local_30 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((uVar4 & 1) == 0) ||
       (puVar1 = PTR_WCRefineHelper_026ce000,
       (*(code *)PTR__objc_msgSend_02578628)
                 (PTR_WCRefineHelper_026ce000,PTR_s_isOfficialAccountOrBrandUserName_0269d4e8,
                  local_38), ((ulong)puVar1 & 1) != 0)) goto LAB_000430d0;
    uVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_replyText);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    FUN_000370d0();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (uVar4 == 0) {
      local_30 = 1;
    }
    else {
      uVar4 = local_40;
      FUN_0003e71c(local_40,local_18);
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
      if (uVar4 != 0) {
        FUN_0003f3a0(uVar4,local_48,local_18,local_38);
      }
      _objc_storeStrong(&local_48,0);
      local_30 = 0;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_38,0);
LAB_000432a0:
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

