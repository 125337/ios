// presentActionsForItem: @ 01eeebbc

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineToDoHTMLRepositoryViewController::presentActionsForItem_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1c0;
  undefined *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  code *local_188;
  undefined *local_180;
  undefined1 auStack_178 [15];
  undefined1 local_169;
  undefined *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  code *local_158;
  undefined *local_150;
  undefined1 auStack_148 [15];
  undefined1 local_139;
  undefined *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  code *local_128;
  undefined *local_120;
  undefined1 auStack_118 [15];
  undefined1 local_109;
  undefined *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  code *local_f8;
  undefined *local_f0;
  undefined1 auStack_e8 [15];
  undefined1 local_d9;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined1 auStack_b8 [11];
  undefined1 local_ad;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *local_70;
  char *local_68;
  char *local_60;
  byte local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  if (local_38 == (cfstringStruct *)0x0) {
    local_3c = 1;
  }
  else {
    _objc_setAssociatedObject(local_28,&DAT_028e4878,local_38,1);
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_name)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_1c0 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_1c0 = &cf__g_TTNx;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_1c0;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_author);
    _objc_retainAutoreleasedReturnValue();
    local_1d8 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_1d8 = &cf_WCR;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_1d8;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_pinned);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    local_51 = (byte)pcVar2;
    pcVar3 = "WCUIActionSheet";
    _objc_getClass();
    pcVar1 = local_48;
    puVar6 = PTR__OBJC_CLASS___UIAlertController_026ce178;
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_60 = pcVar3;
    if (pcVar3 == (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&cf__O_);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_alertControllerWithTitle_message_0269dc00,pcVar1);
      _objc_retainAutoreleasedReturnValue();
      local_70 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      _objc_initWeak(auStack_78,local_28);
      puVar6 = local_70;
      puVar5 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      local_a0 = PTR___NSConcreteStackBlock_02578660;
      local_98 = 0xc2000000;
      local_94 = 0;
      local_90 = FUN_01eefa38;
      local_88 = &DAT_02583468;
      _objc_copyWeak(auStack_80,auStack_78);
      local_ad = 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_bNx,0,&local_a0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addAction__0269dc10);
      local_ad = 0;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar6 = local_70;
      puVar5 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      local_d8 = PTR___NSConcreteStackBlock_02578660;
      local_d0 = 0xc2000000;
      local_cc = 0;
      local_c8 = FUN_01eefab4;
      local_c0 = &DAT_02583468;
      _objc_copyWeak(auStack_b8,auStack_78);
      local_d9 = 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_hQO_>e_Y,0,&local_d8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addAction__0269dc10);
      local_d9 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar6 = local_70;
      puVar5 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      local_108 = PTR___NSConcreteStackBlock_02578660;
      local_100 = 0xc2000000;
      local_fc = 0;
      local_f8 = FUN_01eefb30;
      local_f0 = &DAT_02583468;
      _objc_copyWeak(auStack_e8,auStack_78);
      local_109 = 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_actionWithTitle_style_handler__0269dc08,&cf__Nx,0,&local_108);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addAction__0269dc10);
      local_109 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar6 = local_70;
      puVar5 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      local_138 = PTR___NSConcreteStackBlock_02578660;
      local_130 = 0xc2000000;
      local_12c = 0;
      local_128 = FUN_01eefbac;
      local_120 = &DAT_02583468;
      _objc_copyWeak(auStack_118,auStack_78);
      local_139 = 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_actionWithTitle_style_handler__0269dc08,&cf__TT,0,&local_138);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addAction__0269dc10);
      local_139 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar6 = local_70;
      puVar5 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      pcVar1 = &cf_Smn_v;
      if ((local_51 & 1) == 0) {
        pcVar1 = &cf_n_v;
      }
      local_168 = PTR___NSConcreteStackBlock_02578660;
      local_160 = 0xc2000000;
      local_15c = 0;
      local_158 = FUN_01eefc28;
      local_150 = &DAT_02583468;
      _objc_copyWeak(auStack_148,auStack_78);
      local_169 = 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_actionWithTitle_style_handler__0269dc08,pcVar1,0,&local_168);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addAction__0269dc10);
      local_169 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar6 = local_70;
      puVar5 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      local_198 = PTR___NSConcreteStackBlock_02578660;
      local_190 = 0xc2000000;
      local_18c = 0;
      local_188 = FUN_01eefca4;
      local_180 = &DAT_02583468;
      _objc_copyWeak(auStack_178,auStack_78);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Rd,2,&local_198);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addAction__0269dc10);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = local_70;
      puVar6 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIAlertAction_026ce180,
                 PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1,0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addAction__0269dc10);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_presentViewController_animated_c_0269d2b0,local_70,1,0);
      _objc_destroyWeak(auStack_178);
      _objc_destroyWeak(auStack_148);
      _objc_destroyWeak(auStack_118);
      _objc_destroyWeak(auStack_e8);
      _objc_destroyWeak(auStack_b8);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
      _objc_storeStrong(&local_70,0);
      local_3c = 0;
    }
    else {
      _objc_alloc();
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_initWithTitle__0269d2f8);
      local_68 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_addBtnTitle_target_sel__0269d278,&cf_bNx,local_28,
                 PTR_s_repoSelectCurrentItem_026c7eb0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_addBtnTitle_target_sel__0269d278,&cf_hQO_>e_Y,local_28,
                 PTR_s_repoPreviewCurrentItem_026c7eb8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_addBtnTitle_target_sel__0269d278,&cf__Nx,local_28,
                 PTR_s_repoEditCurrentItem_026c7ec0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_addBtnTitle_target_sel__0269d278,&cf__TT,local_28,
                 PTR_s_repoRenameCurrentItem_026c7ec8);
      pcVar1 = &cf_Smn_v;
      if ((local_51 & 1) == 0) {
        pcVar1 = &cf_n_v;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_addBtnTitle_target_sel__0269d278,pcVar1,local_28,
                 PTR_s_repoTogglePinCurrentItem_026c7ed0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Rd,local_28,
                 PTR_s_repoDeleteCurrentItem_026c7ed8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
      pcVar3 = local_68;
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_showInView__0269d310);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      local_3c = 1;
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

