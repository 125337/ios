// manageUngroupedCell @ 0194bab8

/* Function Stack Size: 0x10 bytes */

void WCRefineEmoticonGroupManageViewController::manageUngroupedCell(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  undefined1 auStack_d0 [8];
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [8];
  SEL local_88;
  ID local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined **local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined **local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_88 = param_2;
  local_80 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_80,PTR_s_setPendingRenameGroupId__026b9970,_WCREmoticonGroupUngroupedId);
  IVar1 = local_80;
  puVar2 = PTR_WCRefineEmoticonGroupStore_026ce420;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_ungroupedDisplayName_026a1040);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(IVar1,"wcr_eg_sheet_name",puVar2,3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_initWeak(auStack_90,local_80);
  IVar1 = local_80;
  puVar2 = PTR_WCRefineEmoticonGroupStore_026ce420;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_ungroupedDisplayName_026a1040);
  _objc_retainAutoreleasedReturnValue();
  local_58 = &cf_title;
  local_48 = &cf__TT;
  local_50 = &cf_handler;
  ppuVar3 = &local_c8;
  local_c8 = PTR___NSConcreteStackBlock_02578660;
  local_c0 = 0xc2000000;
  local_bc = 0;
  local_b8 = FUN_0194bf44;
  local_b0 = &DAT_0257be28;
  _objc_copyWeak(auStack_a8,auStack_90);
  _objc_retainBlock();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_40 = ppuVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_48,&local_58,2);
  _objc_retainAutoreleasedReturnValue();
  local_78 = &cf_title;
  local_68 = &cf_e_R_;
  local_70 = &cf_handler;
  ppuVar5 = &local_f0;
  local_f0 = PTR___NSConcreteStackBlock_02578660;
  local_e8 = 0xc2000000;
  local_e4 = 0;
  local_e0 = FUN_0194bf94;
  local_d8 = &DAT_0257be28;
  local_38 = puVar4;
  _objc_copyWeak(auStack_d0,auStack_90);
  _objc_retainBlock();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_60 = ppuVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_68,&local_78,2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_presentManageActionsWithTitle_ac_026b9980,puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(ppuVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(ppuVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_90);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

