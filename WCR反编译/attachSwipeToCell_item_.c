// attachSwipeToCell:item: @ 01f6b094

/* Function Stack Size: 0x20 bytes */

void WCRefineVoicePackBookmarkListViewController::attachSwipeToCell_item_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined1 auStack_b8 [8];
  undefined *local_b0;
  undefined1 local_a1;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined1 auStack_78 [8];
  undefined *local_70;
  cfstringStruct *local_68 [3];
  undefined *local_50;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  _objc_initWeak(auStack_48,local_28);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  local_50 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_kind_026a27e8);
  pcVar1 = &cf_Sm6e;
  if (IVar3 != 1) {
    pcVar1 = &cf_yd;
  }
  (*(code *)PTR__objc_retain_02578638)();
  puVar2 = PTR__OBJC_CLASS___UITableViewRowAction_026ce5d8;
  local_a0 = PTR___NSConcreteStackBlock_02578660;
  local_98 = 0xc2000000;
  local_94 = 0;
  local_90 = FUN_01f6b64c;
  local_88 = &DAT_02589ab8;
  local_68[0] = pcVar1;
  _objc_copyWeak(auStack_78,auStack_48);
  uVar4 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_rowActionWithStyle_title_handler_026a2d90,0,pcVar1,&local_a0);
  _objc_retainAutoreleasedReturnValue();
  local_70 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addObject__0269d180,puVar2);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_kind_026a27e8);
  puVar2 = PTR_WCRefineVoicePackStore_026cea20;
  if (IVar3 == 0) {
    uVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_relativePath_026ac370);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isFavoriteRelativePath__026b0cb8);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    local_c0 = local_40;
    local_b0 = PTR__OBJC_CLASS___UITableViewRowAction_026ce5d8;
    local_a1 = SUB81(puVar2,0);
    pcVar1 = &cf_Sm6e;
    if (((ulong)puVar2 & 1) == 0) {
      pcVar1 = &cf_6e;
    }
    local_e0 = PTR___NSConcreteStackBlock_02578660;
    local_d8 = 0xc2000000;
    local_d4 = 0;
    local_d0 = FUN_01f6b840;
    local_c8 = &DAT_02589ab8;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_copyWeak(auStack_b8,auStack_48);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_rowActionWithStyle_title_handler_026a2d90,1,pcVar1,&local_e0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemOrangeColor_026cab80);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addObject__0269d180,local_b0);
    _objc_storeStrong(&local_b0);
    _objc_destroyWeak(auStack_b8);
    _objc_storeStrong(&local_c0,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_setValue_forKey__0269d300,local_50,&cf_customRowAction);
  uVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_setCustomRowAction__026a53c0);
  if ((uVar5 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setCustomRowAction__026a53c0,local_50);
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_80,0);
  _objc_destroyWeak(auStack_78);
  _objc_storeStrong(local_68,0);
  _objc_storeStrong(&local_50,0);
  _objc_destroyWeak(auStack_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

