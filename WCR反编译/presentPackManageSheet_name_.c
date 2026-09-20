// presentPackManageSheet:name: @ 01b66cb8

/* Function Stack Size: 0x20 bytes */

void WCRefineLocalEmoticonLibraryViewController::presentPackManageSheet_name_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  ulong local_98;
  cfstringStruct *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  ulong local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_44;
  ulong local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_44 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingPackRel__026a3a90,local_38);
    pcVar2 = &cf_WCActionSheet;
    _NSClassFromString();
    pcVar3 = &cf_WCActionSheetItem;
    local_50 = pcVar2;
    _NSClassFromString();
    local_58 = pcVar3;
    if ((local_50 == (cfstringStruct *)0x0) || (pcVar3 == (cfstringStruct *)0x0)) {
      local_44 = 1;
    }
    else {
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      if (uVar1 == 0) {
        local_98 = local_38;
      }
      else {
        local_98 = local_40;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_98;
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_68 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_38;
      local_70 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_isEqualToString__0269ccc8,_WCRLocalEmoticonGroupAllId);
      puVar4 = local_68;
      if ((uVar1 & 1) == 0) {
        puVar5 = PTR_WCRefineLocalEmoticonStore_026ce440;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isUngroupedPackRel__026a3aa8,
                   local_38);
        puVar4 = local_68;
        if (((ulong)puVar5 & 1) == 0) {
          pcVar2 = local_58;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_addObject__0269d180,&cf_rename);
          puVar4 = local_68;
          pcVar2 = local_58;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_addObject__0269d180,&cf_movePrev);
          puVar4 = local_68;
          pcVar2 = local_58;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_addObject__0269d180,&cf_moveNext);
          puVar4 = local_68;
          pcVar2 = local_58;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_addObject__0269d180,&cf_dissolve);
          puVar4 = local_68;
          pcVar2 = local_58;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_addObject__0269d180,&cf_deleteItems);
        }
        else {
          pcVar2 = local_58;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_addObject__0269d180,&cf_rename);
          puVar5 = PTR_WCRefineLocalEmoticonStore_026ce440;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_allChipHidden_026a3de8);
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          if (((ulong)puVar5 & 1) != 0) {
            puVar5 = PTR_WCRefineLocalEmoticonStore_026ce440;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_allDisplayName_026a3e20);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf_>f_y_)
            ;
            _objc_retainAutoreleasedReturnValue();
            local_80 = puVar4;
            (*(code *)PTR__objc_release_02578630)(puVar5);
            puVar4 = local_68;
            pcVar2 = local_58;
            _objc_alloc();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_addObject__0269d180,&cf_showAll);
            _objc_storeStrong(&local_80,0);
          }
          puVar4 = local_68;
          pcVar2 = local_58;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_70,PTR_s_addObject__0269d180,&cf_deleteUngrouped);
        }
      }
      else {
        pcVar2 = local_58;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_addObject__0269d180,&cf_rename);
        puVar5 = PTR_WCRefineLocalEmoticonStore_026ce440;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_canHideAllChip_026a3e18);
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        if (((ulong)puVar5 & 1) != 0) {
          puVar5 = PTR_WCRefineLocalEmoticonStore_026ce440;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_allDisplayName_026a3e20);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&::cf__);
          _objc_retainAutoreleasedReturnValue();
          local_78 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar4 = local_68;
          pcVar2 = local_58;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_addObject__0269d180,&cf_hideAll);
          _objc_storeStrong(&local_78,0);
        }
      }
      pcVar2 = local_50;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_88 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_setValue_forKey__0269d300,local_68,&cf_buttonTitleList);
      pcVar2 = local_88;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,0x24f766);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setValue_forKey__0269d300,puVar4,&cf_tag);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_setAssociatedObject(local_88,"wcr_le_pack_actions",local_70,1);
      pcVar2 = local_88;
      IVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_showInView__0269d310);
      (*(code *)PTR__objc_release_02578630)(IVar6);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_60,0);
      local_44 = 0;
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

