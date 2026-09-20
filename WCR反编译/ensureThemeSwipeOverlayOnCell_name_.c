// ensureThemeSwipeOverlayOnCell:name: @ 01fbf504

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

ID WCRefineWechatThemeManagerViewController::ensureThemeSwipeOverlayOnCell_name_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 in_d2;
  undefined8 uVar8;
  undefined8 in_d3;
  double dVar9;
  undefined *local_2e8;
  undefined *local_2e0;
  long local_2a8;
  undefined1 auStack_280 [48];
  undefined1 auStack_250 [48];
  double local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  double dStack_208;
  double local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  double dStack_1e0;
  undefined *local_1d8;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  undefined8 local_190;
  double local_188;
  double local_180;
  undefined8 local_178;
  double local_160;
  undefined8 local_158;
  double local_150;
  double local_148;
  double local_140;
  undefined8 local_138;
  double local_120;
  double local_118;
  double local_100;
  double local_f8;
  long local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined4 local_d4;
  long local_d0;
  long local_c8;
  SEL local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = (undefined *)param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  if ((local_c8 == 0) ||
     (lVar4 = local_d0, (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0),
     lVar4 == 0)) {
    local_b0 = (undefined *)0x0;
    local_d4 = 1;
  }
  else {
    puVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_themeSwipeOverlayOnCell__026ca080,local_c8)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      puVar1 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_themeSwipeActionSpecsForName__026ca078,local_d0);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_count_0269cfe0);
      if (puVar1 == (undefined *)0x0) {
        local_b0 = (undefined *)0x0;
        local_d4 = 1;
      }
      else {
        lVar4 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_contentView_026ca5a8);
        _objc_retainAutoreleasedReturnValue();
        local_2a8 = lVar4;
        if (lVar4 == 0) {
          local_2a8 = local_c8;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_f0 = local_2a8;
        (*(code *)PTR__objc_release_02578630)(lVar4);
        puVar1 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_count_0269cfe0);
        dVar6 = (double)puVar1;
        dVar5 = dVar6 * 72.0;
        local_f8 = dVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_bounds_026ca548);
        local_120 = dVar5;
        local_118 = dVar6;
        _CGRectGetHeight(dVar5,dVar6);
        uVar7 = 0x3ff0000000000000;
        if (dVar5 < 1.0) {
          local_100 = dVar5;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_bounds_026ca548);
          local_140 = dVar5;
          local_138 = uVar7;
          _CGRectGetHeight();
        }
        puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
        local_100 = dVar5;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_bounds_026ca548);
        local_180 = dVar5;
        local_178 = uVar7;
        _CGRectGetWidth(dVar5,uVar7,in_d2,in_d3);
        dVar5 = dVar5 - local_f8;
        uVar7 = 0;
        dVar6 = local_f8;
        dVar9 = local_100;
        FUN_01fb73a4();
        local_160 = dVar5;
        local_158 = uVar7;
        local_150 = dVar6;
        local_148 = dVar9;
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar5,uVar7,dVar6,dVar9,puVar2,PTR_s_initWithFrame__026ca6e8);
        puVar1 = local_e0;
        local_e0 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setTag__026caa80,DAT_0233a7c0);
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setAutoresizingMask__026ca878,0x11);
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setClipsToBounds__026ca8c8,1);
        local_188 = 0.0;
        _memset(auStack_1d0,0,0x40);
        puVar1 = local_e8;
        (*(code *)PTR__objc_retain_02578638)();
        local_2e0 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_a8,
                   0x10);
        if (local_2e0 != (undefined *)0x0) {
          lVar4 = *local_1c0;
          local_2e8 = (undefined *)0x0;
          do {
            do {
              if (*local_1c0 - lVar4 != 0) {
                _objc_enumerationMutation(*local_1c0 - lVar4,puVar1);
              }
              local_190 = *(undefined8 *)(local_1c8 + (long)local_2e8 * 8);
              puVar2 = PTR__OBJC_CLASS___UIButton_026cdfc8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558);
              _objc_retainAutoreleasedReturnValue();
              uVar7 = 0;
              uVar8 = 0x4052000000000000;
              dVar5 = local_188;
              dVar6 = local_100;
              local_1d8 = puVar2;
              FUN_01fb73a4();
              local_220 = dVar5;
              uStack_218 = uVar7;
              local_210 = uVar8;
              dStack_208 = dVar6;
              local_1f8 = dVar5;
              uStack_1f0 = uVar7;
              local_1e8 = uVar8;
              dStack_1e0 = dVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (dVar5,uVar7,uVar8,dVar6,local_1d8,PTR_s_setFrame__026ca960);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1d8,PTR_s_setAutoresizingMask__026ca878,0x10);
              uVar7 = local_190;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_190,PTR_s_objectForKeyedSubscript__0269d098,&cf_color);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_setBackgroundColor__026ca888);
              (*(code *)PTR__objc_release_02578630)(uVar7);
              puVar2 = local_1d8;
              uVar7 = local_190;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_190,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_setTitle_forState__026caab8,uVar7,0);
              (*(code *)PTR__objc_release_02578630)(uVar7);
              puVar2 = local_1d8;
              puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_setTitleColor_forState__026caac0,puVar3,0);
              (*(code *)PTR__objc_release_02578630)(puVar3);
              puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (0x402c000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
                         PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = local_1d8;
              (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_titleLabel_026caba0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(puVar3);
              (*(code *)PTR__objc_release_02578630)(puVar2);
              puVar2 = local_1d8;
              (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_titleLabel_026caba0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(puVar2);
              puVar2 = local_1d8;
              (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_titleLabel_026caba0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(0x3fe8000000000000);
              (*(code *)PTR__objc_release_02578630)(puVar2);
              puVar2 = local_1d8;
              uVar7 = local_190;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_190,PTR_s_objectForKeyedSubscript__0269d098,&cf_sel);
              _objc_retainAutoreleasedReturnValue();
              _objc_setAssociatedObject(puVar2,&DAT_028e4900,uVar7,3);
              (*(code *)PTR__objc_release_02578630)(uVar7);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1d8,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_b8,
                         PTR_s_themeSwipeActionButtonTapped__026ca088,0x40);
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addSubview__026ca4c0,local_1d8);
              local_188 = local_188 + 72.0;
              _objc_storeStrong(&local_1d8,0);
              local_2e8 = local_2e8 + 1;
            } while (local_2e8 < local_2e0);
            local_2e0 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_a8
                       ,0x10);
            local_2e8 = (undefined *)0x0;
          } while (local_2e0 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addSubview__026ca4c0,local_e0);
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_bringSubviewToFront__026ca550,local_e0)
        ;
        _CGAffineTransformMakeTranslation(local_f8,0);
        puVar1 = local_e0;
        _memcpy(auStack_280,auStack_250,0x30);
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTransform__026caad0,auStack_280);
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setHidden__026ca970,1);
        puVar1 = local_e0;
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = puVar1;
        local_d4 = 1;
        _objc_storeStrong(&local_f0,0);
      }
      _objc_storeStrong(&local_e8,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_d4 = 1;
      local_b0 = puVar1;
    }
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_b0;
}

