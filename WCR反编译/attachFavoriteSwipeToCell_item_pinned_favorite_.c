// attachFavoriteSwipeToCell:item:pinned:favorite: @ 01f9054c

/* Function Stack Size: 0x28 bytes */

void WCRefineVoicePackPickerViewController::attachFavoriteSwipeToCell_item_pinned_favorite_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5,bool param_6)

{
  cfstringStruct *pcVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  long local_c8;
  undefined1 auStack_c0 [8];
  undefined *local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  long local_90;
  undefined1 auStack_88 [8];
  undefined *local_80 [3];
  undefined *local_68;
  undefined1 auStack_60 [8];
  undefined4 local_58;
  byte local_51;
  long local_50;
  byte local_42;
  byte local_41;
  long local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_41 = (byte)param_5;
  local_42 = (byte)param_6;
  local_51 = 0;
  bVar2 = true;
  if ((local_38 != 0) && (bVar2 = true, local_40 != 0)) {
    lVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_relativePath_026ac370);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar2 = lVar3 == 0;
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if (bVar2) {
    local_58 = 1;
  }
  else {
    _objc_initWeak(auStack_60,local_28);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_90 = local_40;
    local_80[0] = PTR__OBJC_CLASS___UITableViewRowAction_026ce5d8;
    pcVar1 = &cf_Smn_v;
    if ((local_41 & 1) == 0) {
      pcVar1 = &cf_n_v;
    }
    local_b0 = PTR___NSConcreteStackBlock_02578660;
    local_a8 = 0xc2000000;
    local_a4 = 0;
    local_a0 = FUN_01f90b70;
    local_98 = &DAT_02589ab8;
    local_68 = puVar4;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_copyWeak(auStack_88,auStack_60);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80[0],PTR_s_rowActionWithStyle_title_handler_026a2d90,1,pcVar1,&local_b0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemPurpleColor_026cab90);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_80[0],PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_addObject__0269d180,local_80[0]);
    local_c8 = local_40;
    local_b8 = PTR__OBJC_CLASS___UITableViewRowAction_026ce5d8;
    pcVar1 = &cf_Sm6e;
    if ((local_42 & 1) == 0) {
      pcVar1 = &cf_6e;
    }
    local_e8 = PTR___NSConcreteStackBlock_02578660;
    local_e0 = 0xc2000000;
    local_dc = 0;
    local_d8 = FUN_01f90cc0;
    local_d0 = &DAT_02589ab8;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_copyWeak(auStack_c0,auStack_60);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_rowActionWithStyle_title_handler_026a2d90,1,pcVar1,&local_e8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemOrangeColor_026cab80);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_addObject__0269d180,local_b8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setValue_forKey__0269d300,local_68,&cf_customRowAction);
    uVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_setCustomRowAction__026a53c0);
    if ((uVar5 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setCustomRowAction__026a53c0,local_68);
    }
    _objc_storeStrong(&local_b8);
    _objc_destroyWeak(auStack_c0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(local_80,0);
    _objc_destroyWeak(auStack_88);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_68,0);
    _objc_destroyWeak(auStack_60);
    local_58 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

