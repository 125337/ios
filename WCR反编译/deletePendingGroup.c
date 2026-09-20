// deletePendingGroup @ 0194de00

/* Function Stack Size: 0x10 bytes */

void WCRefineEmoticonGroupManageViewController::deletePendingGroup(ID param_1,SEL param_2)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  cfstringStruct *local_a0;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  ID local_70;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [12];
  uint local_44;
  cfstringStruct *local_40;
  ID local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingRenameGroupId_026b99b8);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_28;
  local_38 = param_1;
  _objc_getAssociatedObject(local_28,"wcr_eg_sheet_name");
  _objc_retainAutoreleasedReturnValue();
  local_a0 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_a0 = &cf_R_;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_a0;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  IVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (IVar3 != 0) {
    _objc_initWeak(auStack_50,local_28);
    pcVar2 = local_40;
    puVar6 = PTR_WCRefineHelper_026ce000;
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    puVar4 = PTR_WCRefineEmoticonGroupStore_026ce420;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_ungroupedDisplayName_026a1040);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&cf_Rd0_);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_38;
    local_90 = PTR___NSConcreteStackBlock_02578660;
    local_88 = 0xc2000000;
    local_84 = 0;
    local_80 = FUN_0194e0ec;
    local_78 = &DAT_0257cd48;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = IVar1;
    _objc_copyWeak(auStack_68,auStack_50);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_showAlertWithTitle_message_destr_0269f868,&cf_RdR_,puVar5,&cf_RdR_,
               &local_90,&cf_Sm,0,pcVar2,puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_destroyWeak(auStack_68);
    _objc_storeStrong(&local_70,0);
    _objc_destroyWeak(auStack_50);
  }
  local_44 = (uint)(IVar3 == 0);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

