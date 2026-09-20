// presentActionsForItem:sourceView: @ 018e7808

/* Function Stack Size: 0x20 bytes */

void WCRefineClipboardHistoryListViewController::presentActionsForItem_sourceView_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  ID local_3d8;
  byte local_234;
  cfstringStruct *local_228;
  ID local_1b0;
  ID local_1a8;
  undefined1 local_199;
  undefined *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  code *local_188;
  undefined *local_180;
  cfstringStruct *local_178;
  undefined1 auStack_170 [15];
  undefined1 local_161;
  undefined *local_160;
  undefined4 local_158;
  undefined4 local_154;
  code *local_150;
  undefined *local_148;
  cfstringStruct *local_140;
  undefined1 auStack_138 [15];
  undefined1 local_129;
  undefined *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  code *local_118;
  undefined *local_110;
  cfstringStruct *local_108;
  undefined1 auStack_100 [15];
  undefined1 local_f1;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  cfstringStruct *local_d0;
  undefined1 auStack_c8 [11];
  undefined1 local_bd;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  cfstringStruct *local_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *local_78;
  byte local_69;
  cfstringStruct *local_68;
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
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,_WCRClipboardItemIdKey);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_59 = false;
    bVar1 = ((ulong)pcVar4 & 1) == 0;
    if (bVar1) {
      local_228 = &::cf___;
    }
    else {
      local_228 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectForKeyedSubscript__0269d098,_WCRClipboardItemIdKey);
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_228;
    }
    local_59 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_228;
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
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectForKeyedSubscript__0269d098,_WCRClipboardItemPinnedKey);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_69 = 0;
      local_234 = 0;
      if (((ulong)pcVar4 & 1) != 0) {
        pcVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_objectForKeyedSubscript__0269d098,_WCRClipboardItemPinnedKey);
        _objc_retainAutoreleasedReturnValue();
        local_69 = 1;
        local_68 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_234 = (byte)pcVar4;
      }
      if ((local_69 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      local_5a = local_234 & 1;
      puVar2 = PTR__OBJC_CLASS___UIAlertController_026ce178;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIAlertController_026ce178,
                 PTR_s_alertControllerWithTitle_message_0269dc00,&cf__4_gagv,0,0);
      _objc_retainAutoreleasedReturnValue();
      local_78 = puVar2;
      _objc_initWeak(auStack_80,local_28);
      pcVar3 = local_50;
      puVar6 = local_78;
      puVar2 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      if ((local_5a & 1) == 0) {
        local_128 = PTR___NSConcreteStackBlock_02578660;
        local_120 = 0xc2000000;
        local_11c = 0;
        local_118 = FUN_018e87c0;
        local_110 = &DAT_0258a148;
        (*(code *)PTR__objc_retain_02578638)();
        local_108 = pcVar3;
        _objc_copyWeak(auStack_100,auStack_80);
        local_129 = 1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_6e,0,&local_128);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addAction__0269dc10);
        local_129 = 0;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar5 = PTR_WCRClipboardHistoryStore_026ce680;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRClipboardHistoryStore_026ce680,PTR_s_isVoiceItem__026b8310,local_38);
        puVar6 = local_78;
        puVar2 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
        if (((ulong)puVar5 & 1) != 0) {
          local_160 = PTR___NSConcreteStackBlock_02578660;
          local_158 = 0xc2000000;
          local_154 = 0;
          local_150 = FUN_018e889c;
          local_148 = &DAT_0258a148;
          _objc_copyWeak(auStack_138,auStack_80);
          pcVar3 = local_38;
          local_161 = 1;
          (*(code *)PTR__objc_retain_02578638)();
          local_140 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Yl,0,&local_160);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addAction__0269dc10);
          local_161 = 0;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          _objc_storeStrong(&local_140,0);
          _objc_destroyWeak(auStack_138);
        }
        pcVar3 = local_50;
        puVar6 = local_78;
        puVar2 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
        local_198 = PTR___NSConcreteStackBlock_02578660;
        local_190 = 0xc2000000;
        local_18c = 0;
        local_188 = FUN_018e8924;
        local_180 = &DAT_0258a148;
        (*(code *)PTR__objc_retain_02578638)();
        local_178 = pcVar3;
        _objc_copyWeak(auStack_170,auStack_80);
        local_199 = 1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Rd,2,&local_198);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addAction__0269dc10);
        local_199 = 0;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        _objc_destroyWeak(auStack_170);
        _objc_storeStrong(&local_178);
        _objc_destroyWeak(auStack_100);
        _objc_storeStrong(&local_108,0);
      }
      else {
        local_b0 = PTR___NSConcreteStackBlock_02578660;
        local_a8 = 0xc2000000;
        local_a4 = 0;
        local_a0 = FUN_018e865c;
        local_98 = &DAT_0258a148;
        (*(code *)PTR__objc_retain_02578638)();
        local_90 = pcVar3;
        _objc_copyWeak(auStack_88,auStack_80);
        local_bd = 1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm6e,0,&local_b0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addAction__0269dc10);
        local_bd = 0;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar5 = PTR_WCRClipboardHistoryStore_026ce680;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRClipboardHistoryStore_026ce680,PTR_s_isVoiceItem__026b8310,local_38);
        puVar6 = local_78;
        puVar2 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
        if (((ulong)puVar5 & 1) != 0) {
          local_f0 = PTR___NSConcreteStackBlock_02578660;
          local_e8 = 0xc2000000;
          local_e4 = 0;
          local_e0 = FUN_018e8738;
          local_d8 = &DAT_0258a148;
          _objc_copyWeak(auStack_c8,auStack_80);
          pcVar3 = local_38;
          local_f1 = 1;
          (*(code *)PTR__objc_retain_02578638)();
          local_d0 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Yl,0,&local_f0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addAction__0269dc10);
          local_f1 = 0;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          _objc_storeStrong(&local_d0,0);
          _objc_destroyWeak(auStack_c8);
        }
        _objc_destroyWeak(auStack_88);
        _objc_storeStrong(&local_90,0);
      }
      puVar2 = local_78;
      puVar6 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIAlertAction_026ce180,
                 PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1,0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addAction__0269dc10);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar2 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_popoverPresentationController_0269fdf0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (puVar2 != (undefined *)0x0) {
        bVar1 = local_40 == 0;
        if (bVar1) {
          local_3d8 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          local_1b0 = local_3d8;
        }
        else {
          local_3d8 = local_40;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_1a8 = local_3d8;
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_1b0);
        }
        puVar2 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_popoverPresentationController_0269fdf0)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_bounds_026ca548);
        puVar2 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_popoverPresentationController_0269fdf0)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(in_d0,in_d1,in_d2,in_d3);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_popoverPresentationController_0269fdf0)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        _objc_storeStrong(&local_1a8,0);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_presentViewController_animated_c_0269d2b0,local_78,1,0);
      _objc_destroyWeak(auStack_80);
      _objc_storeStrong(&local_78,0);
      local_44 = 0;
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

