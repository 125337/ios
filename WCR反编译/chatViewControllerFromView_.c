// chatViewControllerFromView: @ 00f31e90

/* Function Stack Size: 0x18 bytes */

ID WCRefineEmoticonToolsHelper::chatViewControllerFromView_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_50;
  undefined4 local_44;
  char *local_40;
  undefined *local_38;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = (undefined *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  puVar3 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = puVar3;
  pcVar1 = "BaseMsgContentViewController";
  _objc_getClass();
  local_40 = pcVar1;
  while (local_38 != (undefined *)0x0) {
    if (local_40 != (char *)0x0) {
      puVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isKindOfClass__0269cd68,local_40);
      puVar3 = local_38;
      if (((ulong)puVar2 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = puVar3;
        local_44 = 1;
        goto LAB_00f32040;
      }
    }
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_nextResponder_0269d0d8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_38;
    local_38 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  puVar3 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar3;
  if (local_40 != (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,local_40);
    puVar2 = local_50;
    if (((ulong)puVar3 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar2;
      goto LAB_00f32030;
    }
  }
  puVar3 = local_50;
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = puVar3;
LAB_00f32030:
  local_44 = 1;
  _objc_storeStrong(&local_50,0);
LAB_00f32040:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

