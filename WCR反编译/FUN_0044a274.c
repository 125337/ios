// FUN_0044a274 @ 0044a274

void FUN_0044a274(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined1 local_56;
  undefined1 local_55;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  pcVar1 = &cf_WCActionSheet;
  local_30 = param_2;
  local_28 = param_1;
  _NSClassFromString();
  pcVar2 = &cf_WCActionSheetItem;
  local_38 = pcVar1;
  _NSClassFromString();
  if ((local_38 != (cfstringStruct *)0x0) && (pcVar2 != (cfstringStruct *)0x0)) {
    local_40 = pcVar2;
    FUN_00459810();
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setHeader__026a3e10,local_28);
    puVar3 = PTR_WCRefineLocalEmoticonStore_026ce440;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_showsAllChip_026a3ad0);
    local_55 = SUB81(puVar3,0);
    puVar3 = PTR_WCRefineLocalEmoticonStore_026ce440;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_showsUngroupedChip_026a3ae8);
    local_56 = SUB81(puVar3,0);
    puVar3 = PTR_WCRefineLocalEmoticonStore_026ce440;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_allDisplayName_026a3e20);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_WCRefineLocalEmoticonStore_026ce440;
    local_60 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_ungroupedDisplayName_026a1040);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_68 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_>f_y_);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_70 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_>f_y_);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_78 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_80 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_80;
    pcVar1 = local_40;
    local_88 = puVar4;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_initWithTitle__0269d2f8,&cf_Rd);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180,pcVar1);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_addObject__0269d180,&cf_delete);
    puVar3 = local_80;
    pcVar1 = local_40;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_initWithTitle__0269d2f8,&cf_yRR_);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180,pcVar1);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_addObject__0269d180,&cf_move);
    puVar3 = local_80;
    pcVar1 = local_40;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_initWithTitle__0269d2f8,local_70);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180,pcVar1);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_addObject__0269d180,&cf_toggleAll);
    puVar3 = local_80;
    pcVar1 = local_40;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_initWithTitle__0269d2f8,local_78);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180,pcVar1);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_addObject__0269d180,&cf_toggleUngrouped);
    puVar3 = local_80;
    pcVar1 = local_40;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_initWithTitle__0269d2f8,&cf_eQN_u);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180,pcVar1);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_addObject__0269d180,&cf_library);
    puVar3 = local_80;
    pcVar1 = local_40;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_initWithTitle__0269d2f8,&cf_eQn_u);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180,pcVar1);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_addObject__0269d180,&cf_settings);
    pcVar1 = local_38;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_initWithTitle_delegate_cancelBut_0269d2f0,0,local_48,&cf_Sm,0);
    local_90 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_setValue_forKey__0269d300,local_80,&cf_buttonTitleList);
    pcVar1 = local_90;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,0x24f765);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setValue_forKey__0269d300,puVar3,&cf_tag);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_setAssociatedObject(local_90,"wcr_le_manage_actions",local_88,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_showInView__0269d310,local_28);
    _objc_storeStrong(&local_90);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_48,0);
  }
  return;
}

