// FUN_003ab258 @ 003ab258

void FUN_003ab258(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong local_50;
  undefined8 local_38;
  ulong local_30;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar1 = param_1 + 0x30;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) == 0) {
    local_50 = *(ulong *)(param_1 + 0x20);
  }
  else {
    local_50 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_50;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_groupId_0269ea88);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  FUN_00355e04();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar4;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  puVar2 = PTR_WCRefineNameplateHelper_026ce5f8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_openSpecialEditorForUsername_fro_026a2de8,
             local_38,local_30);
  if (((ulong)puVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_Lrn_Sb);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

