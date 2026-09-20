// _WCRQuickChatHeadViewForUsername @ 015df154

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void _WCRQuickChatHeadViewForUsername(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  cfstringStruct *local_2e8;
  undefined *local_2b0;
  undefined *local_2a8;
  char *local_258 [2];
  int local_244;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [48];
  undefined1 auStack_180 [48];
  char *local_150 [3];
  char *local_138;
  undefined8 local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  char *local_e0;
  cfstringStruct *local_d8;
  undefined8 local_d0;
  cfstringStruct *local_c8;
  char *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_c8,param_2);
  pcVar1 = local_c8;
  local_d0 = param_1;
  FUN_015df89c();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = "MMHeadImageHelper";
  local_d8 = pcVar1;
  _objc_getClass();
  local_e0 = pcVar2;
  _memset(auStack_128,0,0x40);
  local_b8 = &cf_getMainFrameHeadImageViewWithUsrName_headImgUrl_bAutoUpdate_bRoundCorner_;
  local_b0 = &cf_getProfileHeadImageViewWithUsrName_headImgUrl_bAutoUpdate_bRoundCorner_;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,2);
  _objc_retainAutoreleasedReturnValue();
  local_2a8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_2a8 != (undefined *)0x0) {
    lVar6 = *local_118;
    local_2b0 = (undefined *)0x0;
    do {
      do {
        if (*local_118 - lVar6 != 0) {
          _objc_enumerationMutation(*local_118 - lVar6,puVar3);
        }
        uVar7 = *(undefined8 *)(local_120 + (long)local_2b0 * 8);
        local_e8 = uVar7;
        _NSSelectorFromString();
        pcVar2 = local_e0;
        local_130 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_respondsToSelector__026ca818,uVar7);
        if (((ulong)pcVar2 & 1) != 0) {
          if (local_c8 == (cfstringStruct *)0x0) {
            local_2e8 = &cf___;
          }
          else {
            local_2e8 = local_c8;
          }
          pcVar4 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,local_130,local_2e8,local_d8,1,1);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
          local_138 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
          pcVar2 = local_138;
          if (((ulong)pcVar4 & 1) == 0) {
            local_244 = 0;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_150[0] = pcVar2;
            _memcpy(auStack_180,PTR__CGAffineTransformIdentity_025782d8,0x30);
            pcVar2 = local_150[0];
            _memcpy(auStack_1b0,auStack_180,0x30);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setTransform__026caad0,auStack_1b0);
            uVar10 = 0;
            uVar8 = 0;
            uVar7 = local_d0;
            uVar9 = local_d0;
            FUN_015dff84();
            local_1d0 = uVar8;
            uStack_1c8 = uVar10;
            local_1c0 = uVar7;
            uStack_1b8 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar8,uVar10,uVar7,uVar9,local_150[0],PTR_s_setBounds__026ca8a0);
            uVar10 = 0;
            uVar8 = 0;
            uVar7 = local_d0;
            uVar9 = local_d0;
            FUN_015dff84();
            local_230 = uVar8;
            uStack_228 = uVar10;
            local_220 = uVar7;
            uStack_218 = uVar9;
            local_210 = uVar8;
            uStack_208 = uVar10;
            local_200 = uVar7;
            uStack_1f8 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar8,uVar10,uVar7,uVar9,local_150[0],PTR_s_setFrame__026ca960);
            pcVar2 = local_150[0];
            pcVar1 = &cf_setImageSize_;
            _NSSelectorFromString();
            (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_respondsToSelector__026ca818,pcVar1);
            pcVar4 = local_150[0];
            if (((ulong)pcVar2 & 1) != 0) {
              pcVar1 = &cf_setImageSize_;
              _NSSelectorFromString();
              uVar7 = local_d0;
              uVar9 = local_d0;
              FUN_015dffd0();
              local_240 = uVar7;
              local_238 = uVar9;
              (*(code *)PTR__objc_msgSend_02578628)(uVar7,uVar9,pcVar4,pcVar1);
            }
            pcVar2 = local_150[0];
            (*(code *)PTR__objc_retain_02578638)();
            local_c0 = pcVar2;
            local_244 = 1;
            _objc_storeStrong(local_150,0);
          }
          _objc_storeStrong(&local_138,0);
          if (local_244 != 0) goto LAB_015df6d0;
        }
        local_2b0 = local_2b0 + 1;
      } while (local_2b0 < local_2a8);
      local_2a8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10)
      ;
      local_2b0 = (undefined *)0x0;
    } while (local_2a8 != (undefined *)0x0);
  }
  local_244 = 0;
LAB_015df6d0:
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (local_244 == 0) {
    pcVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    _objc_alloc();
    uVar10 = 0;
    uVar8 = 0;
    uVar7 = local_d0;
    uVar9 = local_d0;
    FUN_015dff84();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar8,uVar10,uVar7,uVar9,pcVar2,PTR_s_initWithFrame__026ca6e8);
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_258[0] = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323f88,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_258[0],PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_258[0],PTR_s_setContentMode__026ca8e0,2);
    pcVar2 = local_258[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = pcVar2;
    local_244 = 1;
    _objc_storeStrong(local_258,0);
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_c0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

