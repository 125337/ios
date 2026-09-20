// FUN_003aafd4 @ 003aafd4

void FUN_003aafd4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong local_80;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined1 auStack_38 [8];
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
    local_80 = *(ulong *)(param_1 + 0x20);
  }
  else {
    local_80 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  puVar2 = PTR_WCRefineGroupManagementViewController_026ce580;
  local_30 = local_80;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_groupId_0269ea88);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_30;
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = FUN_003ab194;
  local_40 = &DAT_0257be28;
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_presentAvatarPickerForGroupId_fr_026a2de0,uVar3,uVar1,&local_58);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  _objc_destroyWeak(auStack_38);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

