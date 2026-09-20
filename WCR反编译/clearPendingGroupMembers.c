// clearPendingGroupMembers @ 0194d578

/* Function Stack Size: 0x10 bytes */

void WCRefineEmoticonGroupManageViewController::clearPendingGroupMembers(ID param_1,SEL param_2)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  cfstringStruct *local_a8;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  ID local_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [8];
  undefined *local_50;
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
  local_a8 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_a8 = &cf_R_;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_a8;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  IVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (IVar3 != 0) {
    puVar4 = PTR_WCRefineEmoticonGroupStore_026ce420;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_memberCountForGroupId__026a1078,
               local_38);
    local_50 = puVar4;
    _objc_initWeak(auStack_58,local_28);
    pcVar2 = local_40;
    puVar7 = local_50;
    puVar6 = PTR_WCRefineHelper_026ce000;
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    puVar5 = PTR_WCRefineEmoticonGroupStore_026ce420;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_ungroupedDisplayName_026a1040);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf__0_);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_38;
    local_98 = PTR___NSConcreteStackBlock_02578660;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_0194d8a0;
    local_80 = &DAT_0257cd48;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = IVar1;
    _objc_copyWeak(auStack_70,auStack_58);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_showAlertWithTitle_message_destr_0269f868,&cf_nzz_g_,puVar4,&cf_nzz,
               &local_98,&cf_Sm,0,pcVar2,puVar7,puVar8);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_destroyWeak(auStack_70);
    _objc_storeStrong(&local_78,0);
    _objc_destroyWeak(auStack_58);
  }
  local_44 = (uint)(IVar3 == 0);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

