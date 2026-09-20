// attachSwipeActionsToCell:item: @ 01f78e74

/* Function Stack Size: 0x20 bytes */

void WCRefineVoicePackManagerViewController::attachSwipeActionsToCell_item_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  code *local_198;
  undefined *local_190;
  ulong local_188;
  undefined1 auStack_180 [8];
  undefined *local_178;
  undefined1 local_169;
  undefined *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  code *local_158;
  undefined *local_150;
  ulong local_148;
  undefined1 auStack_140 [8];
  undefined *local_138;
  undefined1 local_129;
  undefined *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  code *local_118;
  undefined *local_110;
  ulong local_108;
  undefined1 auStack_100 [8];
  undefined1 local_f8;
  undefined *local_f0;
  undefined1 local_e1;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  ulong local_c0;
  undefined1 auStack_b8 [8];
  undefined *local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  ulong local_88;
  undefined1 auStack_80 [8];
  undefined *local_78 [3];
  undefined *local_60;
  ulong local_58;
  undefined1 auStack_50 [12];
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
  uVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_setCustomRowAction__026a53c0);
  if ((uVar3 & 1) == 0) {
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_customRowAction_026c99f0);
    if ((uVar3 & 1) == 0) {
      local_44 = 1;
      goto LAB_01f799f4;
    }
  }
  _objc_initWeak(auStack_50,local_28);
  uVar3 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = uVar3;
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UITableViewRowAction_026ce5d8;
  local_a8 = PTR___NSConcreteStackBlock_02578660;
  local_a0 = 0xc2000000;
  local_9c = 0;
  local_98 = FUN_01f79a64;
  local_90 = &DAT_02589ab8;
  local_60 = puVar4;
  _objc_copyWeak(auStack_80,auStack_50);
  uVar3 = local_58;
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_rowActionWithStyle_title_handler_026a2d90,0,&cf_Rd,&local_a8);
  _objc_retainAutoreleasedReturnValue();
  local_78[0] = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addObject__0269d180,puVar5);
  puVar5 = PTR__OBJC_CLASS___UITableViewRowAction_026ce5d8;
  local_e0 = PTR___NSConcreteStackBlock_02578660;
  local_d8 = 0xc2000000;
  local_d4 = 0;
  local_d0 = FUN_01f79d18;
  local_c8 = &DAT_02589ab8;
  _objc_copyWeak(auStack_b8,auStack_50);
  uVar3 = local_58;
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_rowActionWithStyle_title_handler_026a2d90,1,&cf__TT,&local_e0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_b0 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBlueColor_026cab58);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addObject__0269d180,local_b0);
  uVar3 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isDirectory_026b0ba0);
  if ((uVar3 & 1) == 0) {
    uVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_repositoryCode_026b0ba8);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = uVar6 != 0;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_108 = local_58;
    local_f0 = PTR__OBJC_CLASS___UITableViewRowAction_026ce5d8;
    pcVar2 = &cf_nd__;
    if (!bVar1) {
      pcVar2 = &cf___;
    }
    local_128 = PTR___NSConcreteStackBlock_02578660;
    local_120 = 0xc2000000;
    local_11c = 0;
    local_118 = FUN_01f79dc4;
    local_110 = &DAT_02589ae8;
    local_f8 = bVar1;
    local_e1 = bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_copyWeak(auStack_100,auStack_50);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_f0,PTR_s_rowActionWithStyle_title_handler_026a2d90,1,pcVar2,&local_128);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGreenColor_026cab70);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addObject__0269d180,local_f0);
    _objc_storeStrong(&local_f0);
    _objc_destroyWeak(auStack_100);
    _objc_storeStrong(&local_108,0);
  }
  puVar5 = PTR_WCRefineVoicePackStore_026cea20;
  uVar3 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_relativePath_026ac370);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isPinnedRelativePath__026ae2d8);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  local_148 = local_58;
  local_138 = PTR__OBJC_CLASS___UITableViewRowAction_026ce5d8;
  local_129 = SUB81(puVar5,0);
  pcVar2 = &cf_Smn_v;
  if (((ulong)puVar5 & 1) == 0) {
    pcVar2 = &cf_n_v;
  }
  local_168 = PTR___NSConcreteStackBlock_02578660;
  local_160 = 0xc2000000;
  local_15c = 0;
  local_158 = FUN_01f79f34;
  local_150 = &DAT_02589ab8;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_copyWeak(auStack_140,auStack_50);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_138,PTR_s_rowActionWithStyle_title_handler_026a2d90,1,pcVar2,&local_168);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemPurpleColor_026cab90);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addObject__0269d180,local_138);
  puVar5 = PTR_WCRefineVoicePackStore_026cea20;
  uVar3 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_relativePath_026ac370);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isFavoriteRelativePath__026b0cb8);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  local_188 = local_58;
  local_178 = PTR__OBJC_CLASS___UITableViewRowAction_026ce5d8;
  local_169 = SUB81(puVar5,0);
  pcVar2 = &cf_Sm6e;
  if (((ulong)puVar5 & 1) == 0) {
    pcVar2 = &cf_6e;
  }
  local_1a8 = PTR___NSConcreteStackBlock_02578660;
  local_1a0 = 0xc2000000;
  local_19c = 0;
  local_198 = FUN_01f7a084;
  local_190 = &DAT_02589ab8;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_copyWeak(auStack_180,auStack_50);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_178,PTR_s_rowActionWithStyle_title_handler_026a2d90,1,pcVar2,&local_1a8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemOrangeColor_026cab80);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addObject__0269d180,local_178);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_setValue_forKey__0269d300,local_60,&cf_customRowAction);
  uVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_setCustomRowAction__026a53c0);
  if ((uVar3 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setCustomRowAction__026a53c0,local_60);
  }
  _objc_storeStrong(&local_178);
  _objc_destroyWeak(auStack_180);
  _objc_storeStrong(&local_188,0);
  _objc_storeStrong(&local_138,0);
  _objc_destroyWeak(auStack_140);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_c0,0);
  _objc_destroyWeak(auStack_b8);
  _objc_storeStrong(local_78,0);
  _objc_storeStrong(&local_88,0);
  _objc_destroyWeak(auStack_80);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_destroyWeak(auStack_50);
  local_44 = 0;
LAB_01f799f4:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

