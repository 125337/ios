// presentActionsForItem:anchorView: @ 0094ea94

/* Function Stack Size: 0x20 bytes */

void WCRClipboardHistoryPanelController::presentActionsForItem_anchorView_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  ID local_120;
  undefined *local_e0;
  cfstringStruct *local_d0;
  ID local_88;
  ID local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  byte local_5a;
  bool local_59;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_44;
  ID local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  pcVar3 = local_38;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar3 & 1) == 0) {
    local_44 = 1;
  }
  else {
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_59 = false;
    bVar1 = ((ulong)pcVar4 & 1) == 0;
    if (bVar1) {
      local_d0 = &::cf___;
    }
    else {
      local_d0 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_id)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_d0;
    }
    local_59 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_d0;
    if ((local_59 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_44 = 1;
    }
    else {
      pcVar3 = local_38;
      FUN_009464dc();
      local_5a = (byte)pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingActionItem__026aaa38,local_38);
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithCapacity__0269d9b8,3);
      _objc_retainAutoreleasedReturnValue();
      if ((local_5a & 1) == 0) {
        local_e0 = PTR_s_wcr_clipFavorite__026aaa48;
      }
      else {
        local_e0 = PTR_s_wcr_clipCancelFavorite__026aaa40;
      }
      local_70 = local_e0;
      puVar5 = PTR__OBJC_CLASS___UIMenuItem_026ce778;
      local_68 = puVar2;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      pcVar3 = local_38;
      FUN_0094f06c();
      puVar2 = local_68;
      if (((ulong)pcVar3 & 1) != 0) {
        puVar5 = PTR__OBJC_CLASS___UIMenuItem_026ce778;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      puVar2 = local_68;
      if ((local_5a & 1) == 0) {
        puVar5 = PTR__OBJC_CLASS___UIMenuItem_026ce778;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      puVar2 = PTR__OBJC_CLASS___UIMenuController_026ce770;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIMenuController_026ce770,PTR_s_sharedMenuController_026a0478);
      _objc_retainAutoreleasedReturnValue();
      local_78 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setMenuItems__026a0080,local_68);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_becomeFirstResponder_0269d108);
      bVar1 = local_40 == 0;
      if (bVar1) {
        local_120 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        local_88 = local_120;
      }
      else {
        local_120 = local_40;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = local_120;
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_88);
      }
      puVar2 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_bounds_026ca548);
      (*(code *)PTR__objc_msgSend_02578628)
                (in_d0,in_d1,in_d2,in_d3,puVar2,PTR_s_setTargetRect_inView__026aaa60,local_80);
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setMenuVisible_animated__026a0088,1,1);
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_68,0);
      local_44 = 0;
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

