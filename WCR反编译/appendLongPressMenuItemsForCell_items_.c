// appendLongPressMenuItemsForCell:items: @ 00f6e264

/* Function Stack Size: 0x20 bytes */

ID WCRefineForwardToGroupHelper::appendLongPressMenuItemsForCell_items_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ID IVar2;
  long lVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  undefined *puVar8;
  undefined *local_c0;
  undefined *local_68;
  undefined *local_58;
  undefined *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  undefined *local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = (undefined *)0x0;
  _objc_storeStrong(&local_38,param_4);
  IVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_longPressEntryEnabled_026ac9d8);
  puVar4 = local_38;
  if (((IVar2 & 1) == 0) || (local_30 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar4;
    local_3c = 1;
  }
  else {
    lVar3 = local_30;
    FUN_00f6e63c();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    puVar4 = local_38;
    if (lVar3 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar4;
      local_3c = 1;
    }
    else {
      FUN_00f6e8d8(local_38,&cf_lp_forward_group);
      if (((ulong)puVar4 & 1) == 0) {
        pcVar5 = &cf_lp_forward_group;
        _WCRPluginIconResolvedTitle(&cf_lp_forward_group,&cf_lSR_);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = &cf_lp_forward_group;
        _WCRPluginIconResolvedIcon(&cf_lp_forward_group,&cf_share_filled);
        _objc_retainAutoreleasedReturnValue();
        pcVar7 = pcVar5;
        FUN_00f6eca8(pcVar5,pcVar6,PTR_s_WCRefine_onLongPressForwardToGro_026a1e10);
        _objc_retainAutoreleasedReturnValue();
        local_48 = pcVar7;
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        puVar4 = local_38;
        if (local_48 == (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = puVar4;
          local_3c = 1;
        }
        else {
          puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar8);
          bVar1 = ((ulong)puVar4 & 1) == 0;
          if (bVar1) {
            local_c0 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
            _objc_retainAutoreleasedReturnValue();
            local_68 = local_c0;
          }
          else {
            local_c0 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_mutableCopy_0269d8a0);
            local_58 = local_c0;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_50 = local_c0;
          if (bVar1) {
            (*(code *)PTR__objc_release_02578630)(local_68);
          }
          else {
            (*(code *)PTR__objc_release_02578630)(local_58);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addObject__0269d180,local_48);
          puVar4 = PTR_WCRefinePluginIconCatalog_026ce4e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefinePluginIconCatalog_026ce4e0,
                     PTR_s_applyLongPressOrderToMenuItems__026a9ac0,local_50);
          _objc_retainAutoreleasedReturnValue();
          local_3c = 1;
          local_18 = puVar4;
          _objc_storeStrong(&local_50,0);
        }
        _objc_storeStrong(&local_48,0);
      }
      else {
        puVar4 = PTR_WCRefinePluginIconCatalog_026ce4e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefinePluginIconCatalog_026ce4e0,
                   PTR_s_applyLongPressOrderToMenuItems__026a9ac0,local_38);
        _objc_retainAutoreleasedReturnValue();
        local_3c = 1;
        local_18 = puVar4;
      }
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

