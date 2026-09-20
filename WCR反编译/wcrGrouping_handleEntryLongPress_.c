// wcrGrouping_handleEntryLongPress: @ 003a8414

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineHomeSessionGroupingHook::wcrGrouping_handleEntryLongPress_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  ID IVar8;
  cfstringStruct *local_6d0;
  ID local_360;
  cfstringStruct *local_348;
  undefined *local_310;
  undefined4 local_308;
  undefined4 local_304;
  code *local_300;
  undefined *local_2f8;
  ID local_2f0;
  undefined1 auStack_2e8 [8];
  undefined *local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  code *local_2d0;
  undefined *local_2c8;
  cfstringStruct *local_2c0;
  undefined1 local_2b1;
  undefined *local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  code *local_2a0;
  undefined *local_298;
  ID local_290;
  cfstringStruct *local_288;
  undefined1 auStack_280 [15];
  undefined1 local_271;
  undefined *local_270;
  undefined4 local_268;
  undefined4 local_264;
  code *local_260;
  undefined *local_258;
  ID local_250;
  undefined1 auStack_248 [15];
  undefined1 local_239;
  undefined *local_238;
  undefined4 local_230;
  undefined4 local_22c;
  code *local_228;
  undefined *local_220;
  ID local_218;
  cfstringStruct *local_210;
  undefined1 auStack_208 [15];
  undefined1 local_1f9;
  undefined *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  code *local_1e8;
  undefined *local_1e0;
  ID local_1d8;
  cfstringStruct *local_1d0;
  undefined1 auStack_1c8 [8];
  undefined *local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  code *local_1b0;
  undefined *local_1a8;
  cfstringStruct *local_1a0;
  undefined1 auStack_198 [8];
  ulong local_190;
  undefined *local_188;
  ulong local_180;
  cfstringStruct *local_178;
  undefined1 local_169;
  undefined *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  code *local_158;
  undefined *local_150;
  cfstringStruct *local_148;
  undefined1 auStack_140 [15];
  undefined1 local_131;
  undefined *local_130;
  undefined4 local_128;
  undefined4 local_124;
  code *local_120;
  undefined *local_118;
  cfstringStruct *local_110;
  undefined1 auStack_108 [15];
  undefined1 local_f9;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  cfstringStruct *local_d8;
  undefined1 auStack_d0 [24];
  undefined *local_b8;
  byte local_a9;
  undefined1 auStack_a8 [15];
  byte local_99;
  ID local_98;
  ID local_90;
  cfstringStruct *local_88;
  ID local_80;
  byte local_71;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  ulong local_60;
  cfstringStruct *local_58;
  long local_50;
  ulong local_48;
  undefined4 local_3c;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
  if (uVar2 == 1) {
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    local_50 = 0;
    local_58 = (cfstringStruct *)0x0;
    local_48 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = uVar2;
    while (uVar2 = local_60, local_60 != 0) {
      if (local_50 == 0) {
        puVar3 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((uVar2 & 1) != 0) {
          _objc_storeStrong(&local_50,local_60);
        }
      }
      uVar2 = local_60;
      puVar3 = PTR__OBJC_CLASS___UITableView_026ce1a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar2 & 1) != 0) {
        _objc_storeStrong(&local_58,local_60);
        break;
      }
      uVar4 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_60;
      local_60 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    local_3c = 2;
    _objc_storeStrong(&local_60,0);
    local_71 = 0;
    if ((local_50 == 0) || (local_58 == (cfstringStruct *)0x0)) {
      local_348 = (cfstringStruct *)0x0;
    }
    else {
      local_348 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_indexPathForCell__0269e208,local_50);
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      local_70 = local_348;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_348;
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    if (local_68 == (cfstringStruct *)0x0) {
      local_3c = 1;
    }
    else {
      IVar8 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_wcrGrouping_snapshotForTableView_026a2a50,local_58);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = local_68;
      local_80 = IVar8;
      FUN_0039d120(local_68,IVar8);
      if (((ulong)pcVar7 & 1) == 0) {
        local_3c = 1;
      }
      else {
        pcVar7 = local_68;
        FUN_0039e3b0(local_68,local_80);
        _objc_retainAutoreleasedReturnValue();
        IVar8 = local_28;
        local_88 = pcVar7;
        if (pcVar7 == (cfstringStruct *)0x0) {
          local_3c = 1;
        }
        else {
          puVar3 = PTR__OBJC_CLASS___UIViewController_026cdf80;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(IVar8,PTR_s_isKindOfClass__0269cd68,puVar3);
          local_99 = 0;
          bVar1 = (IVar8 & 1) == 0;
          if (bVar1) {
            local_360 = local_28;
            FUN_003612b8(local_28,&cf_navigationController);
            _objc_retainAutoreleasedReturnValue();
            local_98 = local_360;
          }
          else {
            local_360 = local_28;
          }
          local_99 = bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_90 = local_360;
          if ((local_99 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_98);
          }
          _objc_initWeak(auStack_a8,local_28);
          local_a9 = 0;
          puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          pcVar7 = local_88;
          puVar3 = PTR_WCRGroupingSheetAction_026ce5f0;
          local_f8 = PTR___NSConcreteStackBlock_02578660;
          local_f0 = 0xc2000000;
          local_ec = 0;
          local_e8 = FUN_003a9a64;
          local_e0 = &DAT_02579c60;
          local_b8 = puVar5;
          (*(code *)PTR__objc_retain_02578638)();
          local_d8 = pcVar7;
          _objc_copyWeak(auStack_d0,auStack_a8);
          local_f9 = 1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_actionWithTitle_destructive_hand_026a2db8,&cf_9eTy,0,&local_f8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
          local_f9 = 0;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          pcVar7 = local_88;
          puVar5 = local_b8;
          puVar3 = PTR_WCRGroupingSheetAction_026ce5f0;
          if ((local_a9 & 1) == 0) {
            local_130 = PTR___NSConcreteStackBlock_02578660;
            local_128 = 0xc2000000;
            local_124 = 0;
            local_120 = FUN_003aa17c;
            local_118 = &DAT_02579c60;
            (*(code *)PTR__objc_retain_02578638)();
            local_110 = pcVar7;
            _objc_copyWeak(auStack_108,auStack_a8);
            local_131 = 1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_actionWithTitle_destructive_hand_026a2db8,&cf_9el,0,&local_130);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
            local_131 = 0;
            (*(code *)PTR__objc_release_02578630)(puVar3);
            _objc_destroyWeak(auStack_108);
            _objc_storeStrong(&local_110,0);
          }
          pcVar7 = local_88;
          puVar5 = local_b8;
          puVar3 = PTR_WCRGroupingSheetAction_026ce5f0;
          local_168 = PTR___NSConcreteStackBlock_02578660;
          local_160 = 0xc2000000;
          local_15c = 0;
          local_158 = FUN_003aa9c4;
          local_150 = &DAT_02579c60;
          (*(code *)PTR__objc_retain_02578638)();
          local_148 = pcVar7;
          _objc_copyWeak(auStack_140,auStack_a8);
          local_169 = 1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_actionWithTitle_destructive_hand_026a2db8,&cf_9eQ,0,&local_168);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
          local_169 = 0;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          pcVar7 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_groupId_0269ea88);
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = pcVar7;
          FUN_003595c8();
          (*(code *)PTR__objc_release_02578630)(pcVar7);
          puVar5 = PTR_WCRGroupingSheetAction_026ce5f0;
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          uVar2 = (ulong)(pcVar6 == (cfstringStruct *)0x0);
          local_180 = uVar2;
          local_178 = pcVar6;
          FUN_003aae5c();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf_Rbcc__);
          _objc_retainAutoreleasedReturnValue();
          pcVar7 = local_88;
          local_1c0 = PTR___NSConcreteStackBlock_02578660;
          local_1b8 = 0xc2000000;
          local_1b4 = 0;
          local_1b0 = FUN_003aae88;
          local_1a8 = &DAT_0257c708;
          (*(code *)PTR__objc_retain_02578638)();
          local_1a0 = pcVar7;
          local_190 = local_180;
          _objc_copyWeak(auStack_198,auStack_a8);
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_actionWithTitle_destructive_hand_026a2db8,puVar3,0,&local_1c0);
          _objc_retainAutoreleasedReturnValue();
          local_188 = puVar5;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_release_02578630)(uVar2);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_188,PTR_s_setImageName__0269fb18,&cf_arrow_up_arrow_down);
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_addObject__0269d180,local_188);
          puVar5 = local_b8;
          puVar3 = PTR_WCRGroupingSheetAction_026ce5f0;
          local_1f8 = PTR___NSConcreteStackBlock_02578660;
          local_1f0 = 0xc2000000;
          local_1ec = 0;
          local_1e8 = FUN_003aafd4;
          local_1e0 = &DAT_0257c978;
          _objc_copyWeak(auStack_1c8,auStack_a8);
          IVar8 = local_90;
          local_1f9 = 1;
          (*(code *)PTR__objc_retain_02578638)();
          pcVar7 = local_88;
          local_1d8 = IVar8;
          (*(code *)PTR__objc_retain_02578638)();
          local_1d0 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_actionWithTitle_destructive_hand_026a2db8,&cf_9e4YP,0,&local_1f8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
          local_1f9 = 0;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar5 = local_b8;
          puVar3 = PTR_WCRGroupingSheetAction_026ce5f0;
          local_238 = PTR___NSConcreteStackBlock_02578660;
          local_230 = 0xc2000000;
          local_22c = 0;
          local_228 = FUN_003ab258;
          local_220 = &DAT_0257c978;
          _objc_copyWeak(auStack_208,auStack_a8);
          IVar8 = local_90;
          local_239 = 1;
          (*(code *)PTR__objc_retain_02578638)();
          pcVar7 = local_88;
          local_218 = IVar8;
          (*(code *)PTR__objc_retain_02578638)();
          local_210 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_actionWithTitle_destructive_hand_026a2db8,&cf_fbcLr,0,&local_238);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
          local_239 = 0;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar5 = local_b8;
          puVar3 = PTR_WCRGroupingSheetAction_026ce5f0;
          local_270 = PTR___NSConcreteStackBlock_02578660;
          local_268 = 0xc2000000;
          local_264 = 0;
          local_260 = FUN_003ab3d8;
          local_258 = &DAT_02579c60;
          _objc_copyWeak(auStack_248,auStack_a8);
          IVar8 = local_90;
          local_271 = 1;
          (*(code *)PTR__objc_retain_02578638)();
          local_250 = IVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_actionWithTitle_destructive_hand_026a2db8,&cf_9eMOn_,0,&local_270)
          ;
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
          local_271 = 0;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar5 = local_b8;
          puVar3 = PTR_WCRGroupingSheetAction_026ce5f0;
          local_2b0 = PTR___NSConcreteStackBlock_02578660;
          local_2a8 = 0xc2000000;
          local_2a4 = 0;
          local_2a0 = FUN_003ab4d4;
          local_298 = &DAT_0257c978;
          _objc_copyWeak(auStack_280,auStack_a8);
          IVar8 = local_90;
          local_2b1 = 1;
          (*(code *)PTR__objc_retain_02578638)();
          pcVar7 = local_88;
          local_290 = IVar8;
          (*(code *)PTR__objc_retain_02578638)();
          local_288 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_actionWithTitle_destructive_hand_026a2db8,&cf__u7b_t,0,&local_2b0)
          ;
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
          local_2b1 = 0;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar5 = local_b8;
          puVar3 = PTR_WCRGroupingSheetAction_026ce5f0;
          local_2e0 = PTR___NSConcreteStackBlock_02578660;
          local_2d8 = 0xc2000000;
          local_2d4 = 0;
          local_2d0 = FUN_003ab6ec;
          local_2c8 = &DAT_0257a800;
          pcVar7 = local_88;
          (*(code *)PTR__objc_retain_02578638)();
          local_2c0 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_actionWithTitle_destructive_hand_026a2db8,&cf_Y6RR_I,0,&local_2e0)
          ;
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar5 = local_b8;
          puVar3 = PTR_WCRGroupingSheetAction_026ce5f0;
          local_310 = PTR___NSConcreteStackBlock_02578660;
          local_308 = 0xc2000000;
          local_304 = 0;
          local_300 = FUN_003ab7e8;
          local_2f8 = &DAT_02579c60;
          _objc_copyWeak(auStack_2e8,auStack_a8);
          IVar8 = local_90;
          (*(code *)PTR__objc_retain_02578638)();
          local_2f0 = IVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_actionWithTitle_destructive_hand_026a2db8,&cf_eQR__t,0,&local_310)
          ;
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          IVar8 = local_90;
          pcVar7 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_title_0269d250);
          _objc_retainAutoreleasedReturnValue();
          local_6d0 = pcVar7;
          if (pcVar7 == (cfstringStruct *)0x0) {
            local_6d0 = &cf_R_;
          }
          FUN_003aba34(IVar8,local_6d0,local_b8);
          (*(code *)PTR__objc_release_02578630)(pcVar7);
          _objc_storeStrong(&local_2f0);
          _objc_destroyWeak(auStack_2e8);
          _objc_storeStrong(&local_2c0,0);
          _objc_storeStrong(&local_288,0);
          _objc_storeStrong(&local_290,0);
          _objc_destroyWeak(auStack_280);
          _objc_storeStrong(&local_250,0);
          _objc_destroyWeak(auStack_248);
          _objc_storeStrong(&local_210,0);
          _objc_storeStrong(&local_218,0);
          _objc_destroyWeak(auStack_208);
          _objc_storeStrong(&local_1d0,0);
          _objc_storeStrong(&local_1d8,0);
          _objc_destroyWeak(auStack_1c8);
          _objc_storeStrong(&local_188,0);
          _objc_destroyWeak(auStack_198);
          _objc_storeStrong(&local_1a0,0);
          _objc_destroyWeak(auStack_140);
          _objc_storeStrong(&local_148,0);
          _objc_destroyWeak(auStack_d0);
          _objc_storeStrong(&local_d8,0);
          _objc_storeStrong(&local_b8,0);
          _objc_destroyWeak(auStack_a8);
          _objc_storeStrong(&local_90,0);
          local_3c = 0;
        }
        _objc_storeStrong(&local_88,0);
      }
      _objc_storeStrong(&local_80,0);
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
  }
  else {
    local_3c = 1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

