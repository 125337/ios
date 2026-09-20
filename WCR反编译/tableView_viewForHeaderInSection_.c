// tableView:viewForHeaderInSection: @ 01eb6554

/* Function Stack Size: 0x20 bytes */

ID WCRefineToDoListEditorViewController::tableView_viewForHeaderInSection_
             (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  ID IVar5;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [15];
  byte local_61;
  undefined *local_60;
  byte local_51;
  ID local_50;
  ID local_48;
  long_long local_40;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  IVar2 = local_38;
  local_40 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_dequeueReusableHeaderFooterViewW_026c77e0,&cf_WCRefineToDoSectionHeader)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_48 = IVar2;
  if (local_40 == 0) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingSectionTitle_026c77e8);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_titleLabel_026caba0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_titleLabel_026caba0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingEntries_026c7790);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_51 = 0;
    local_61 = 0;
    if (IVar5 != 0) {
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingEntries_026c7790);
      _objc_retainAutoreleasedReturnValue();
      local_51 = 1;
      local_50 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf__lu);
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar4;
    }
    IVar3 = local_48;
    local_61 = IVar5 != 0;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_countLabel_026ad2e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_chevron_026c77f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setOnTap__026be750,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_titleLabel_026caba0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_titleLabel_026caba0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_doneEntries_026c7758);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf__lu);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_countLabel_026ad2e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_doneCollapsed_026c77b0);
    pcVar1 = &cf_chevron_right;
    if ((IVar2 & 1) == 0) {
      pcVar1 = &cf_chevron_down;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_systemImageNamed__026cab78,pcVar1);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_chevron_026c77f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_initWeak(auStack_70,local_28);
    local_98 = PTR___NSConcreteStackBlock_02578660;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_01eb6ca8;
    local_80 = &DAT_0257be28;
    _objc_copyWeak(auStack_78,auStack_70);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setOnTap__026be750,&local_98);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
  }
  IVar2 = local_48;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return IVar2;
}

