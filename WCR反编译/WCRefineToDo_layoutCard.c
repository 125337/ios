// WCRefineToDo_layoutCard @ 007fe940

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineToDoHook::WCRefineToDo_layoutCard(WCRefineToDoHook *this,ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 in_d0;
  cfstringStruct *local_260;
  undefined *local_258;
  undefined *local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined *local_210;
  undefined *local_208;
  undefined8 local_1f8;
  ID local_1f0;
  undefined *local_1e8;
  ID local_1e0;
  undefined **local_1d8;
  ID *local_1d0;
  uint local_1c8;
  uint local_1c4;
  ID local_1c0;
  undefined *local_1b8;
  ID local_1b0;
  undefined **local_1a8;
  ID *local_1a0;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  undefined *local_188;
  undefined *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined *local_140;
  undefined *local_138;
  undefined1 *local_130;
  undefined *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  undefined *local_110;
  uint local_104;
  ID local_100;
  uint local_f4;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  ID local_d0;
  undefined1 local_c1;
  ID local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  ID local_90;
  ID local_88;
  byte local_79;
  ID local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  undefined *local_60;
  ID local_58;
  undefined1 local_49;
  undefined *local_48;
  undefined4 local_3c;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_WCRefineToDo_findMainTableView_026a87e8);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  if (param_1 == 0) {
    local_3c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isDragging_0269ddf8);
    if ((((param_1 & 1) == 0) &&
        (IVar2 = local_38,
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isDecelerating_0269e888),
        (IVar2 & 1) == 0)) &&
       (IVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isTracking_0269ddf0),
       (IVar2 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_WCRefineToDo_restoreInsetIfNeede_026a8820,local_38);
      IVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_tableHeaderView_0269ea08);
      _objc_retainAutoreleasedReturnValue();
      local_100 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_49 = 0;
      bVar1 = IVar2 != _kWCRHomeTableHeaderHostTag;
      local_f4 = 1;
      if (bVar1) {
        puVar3 = PTR_WCRefineHomeTableHeaderHost_026ce570;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHomeTableHeaderHost_026ce570,PTR_s_todoSlotInTableView__026a8938,
                   local_38);
        _objc_retainAutoreleasedReturnValue();
        local_f4 = (uint)(puVar3 != (undefined *)0x0);
        local_48 = puVar3;
      }
      local_104 = local_f4;
      local_49 = bVar1;
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_48);
      }
      (*(code *)PTR__objc_release_02578630)(local_100);
      if ((local_104 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHomeTableHeaderHost_026ce570,PTR_s_applyOnTableView_owner__026a23c8,
                   local_38,local_28);
      }
      local_110 = &DAT_028ccee6;
      IVar2 = local_28;
      _objc_getAssociatedObject();
      _objc_retainAutoreleasedReturnValue();
      local_58 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_removeFromSuperview_026ca800);
      _objc_setAssociatedObject(local_28,local_110,0,1);
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar3;
      FUN_007f309c();
      if (((ulong)puVar3 & 1) == 0) {
        FUN_007f7ae4();
        if (((ulong)puVar3 & 1) == 0) {
          FUN_007f8a9c();
          local_120 = &cf_footer;
          if (((ulong)puVar3 & 1) == 0) {
            local_120 = &cf_none;
          }
        }
        else {
          local_120 = &cf_header;
        }
        local_118 = local_120;
      }
      else {
        local_118 = &cf_tableHeader;
      }
      local_198 = local_118;
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = local_198;
      local_138 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_190 = local_198;
      puVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_toDoCardPosition_026a8940);
      puVar4 = local_60;
      local_188 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_toDoCardCustomSectionOffset_026a2578);
      local_180 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_toDoCardHeight_026a8948);
      local_178 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_toDoCardWidth_026a8950);
      local_170 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_toDoCardTopSpacing_026a8958);
      local_168 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_toDoCardBottomSpacing_026a8960);
      local_160 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_toDoCardSideMargin_026a8968);
      local_158 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_toDoCardScale_026a8970);
      local_150 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_toDoCardOffsetX_026a8978);
      puVar3 = local_60;
      local_148 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_toDoCardLocalItems_026a8980);
      _objc_retainAutoreleasedReturnValue();
      local_128 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      puVar4 = local_60;
      local_140 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_toDoCardSourceMode_026a8828);
      local_260 = local_190;
      local_258 = local_188;
      local_250 = local_180;
      local_248 = local_178;
      local_240 = local_170;
      local_238 = local_168;
      local_230 = local_160;
      local_228 = local_158;
      local_220 = local_150;
      local_218 = local_148;
      local_210 = local_140;
      puVar3 = local_138;
      local_208 = puVar4;
      local_130 = (undefined1 *)&local_260;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_138,PTR_s_stringWithFormat__0269cca8,
                 &cf_____ld__ld___2f___2f___2f___2f___2f___2f___2f__lu__ld);
      _objc_retainAutoreleasedReturnValue();
      local_70 = puVar3;
      (*(code *)PTR__objc_release_02578630)(local_128);
      IVar2 = local_28;
      _objc_getAssociatedObject(local_28,&DAT_028ccee7);
      _objc_retainAutoreleasedReturnValue();
      local_78 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isEqualToString__0269ccc8,local_70);
      local_79 = ((byte)IVar2 ^ 1) & 1;
      if (local_79 != 0) {
        IVar2 = local_28;
        _objc_setAssociatedObject(local_28,&DAT_028ccee7,local_70,3);
      }
      FUN_007f309c();
      if ((IVar2 & 1) == 0) {
        FUN_007f7ae4();
        if ((IVar2 & 1) == 0) {
          IVar2 = local_28;
          _objc_getAssociatedObject(local_28,&DAT_028ccee2);
          _objc_retainAutoreleasedReturnValue();
          local_b8 = IVar2;
          FUN_007f8a9c();
          if ((IVar2 & 1) != 0) {
            local_c1 = 0;
            local_1c4 = 0;
            bVar1 = (local_79 & 1) != 0;
            if (bVar1) {
              IVar2 = local_b8;
              (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_superview_026cab50);
              _objc_retainAutoreleasedReturnValue();
              local_1c4 = (uint)(IVar2 == 0);
              local_c0 = IVar2;
            }
            local_1c8 = local_1c4;
            local_c1 = bVar1;
            if (bVar1) {
              (*(code *)PTR__objc_release_02578630)(local_c0);
            }
            if ((local_1c8 & 1) == 0) {
              IVar2 = local_b8;
              (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_superview_026cab50);
              _objc_retainAutoreleasedReturnValue();
              local_1f0 = IVar2;
              (*(code *)PTR__objc_release_02578630)();
              if (local_1f0 != 0) {
                FUN_007f0494(local_b8,local_38,local_28);
              }
            }
            else {
              local_1e8 = PTR__OBJC_CLASS___UIView_026cdfd8;
              local_1d8 = &local_f0;
              local_f0 = PTR___NSConcreteGlobalBlock_02578658;
              local_e8 = 0xd0800000;
              local_e4 = 0;
              local_e0 = FUN_007ff274;
              local_d8 = &DAT_0257a9d0;
              local_1d0 = &local_d0;
              local_1e0 = local_38;
              (*(code *)PTR__objc_retain_02578638)();
              local_d0 = local_1e0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1e8,PTR_s_performWithoutAnimation__0269e7e0,local_1d8);
              _objc_storeStrong(local_1d0,0);
            }
          }
          _objc_storeStrong(&local_b8,0);
          local_3c = 0;
        }
        else {
          IVar2 = local_28;
          _objc_getAssociatedObject(local_28,&DAT_028ccee1);
          _objc_retainAutoreleasedReturnValue();
          local_88 = IVar2;
          if (((local_79 & 1) == 0) && (IVar2 != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            local_1c0 = IVar2;
            (*(code *)PTR__objc_release_02578630)();
            if (local_1c0 != 0) {
              FUN_007f0494(local_88,local_38,local_28);
            }
          }
          else {
            local_1b8 = PTR__OBJC_CLASS___UIView_026cdfd8;
            local_1a8 = &local_b0;
            local_b0 = PTR___NSConcreteGlobalBlock_02578658;
            local_a8 = 0xd0800000;
            local_a4 = 0;
            local_a0 = FUN_007ff234;
            local_98 = &DAT_0257a9d0;
            local_1a0 = &local_90;
            local_1b0 = local_38;
            (*(code *)PTR__objc_retain_02578638)();
            local_90 = local_1b0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1b8,PTR_s_performWithoutAnimation__0269e7e0,local_1a8);
            _objc_storeStrong(local_1a0,0);
          }
          local_3c = 1;
          _objc_storeStrong(&local_88,0);
        }
      }
      else {
        local_3c = 1;
      }
      local_1f8 = 0;
      _objc_storeStrong(&local_78);
      _objc_storeStrong(&local_70,local_1f8);
      _objc_storeStrong(&local_68,local_1f8);
      _objc_storeStrong(&local_60,local_1f8);
      _objc_storeStrong(&local_58,local_1f8);
    }
    else {
      local_3c = 1;
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

