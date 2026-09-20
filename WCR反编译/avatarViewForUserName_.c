// avatarViewForUserName: @ 01a01b58

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID WCRefineFriendRelationResultListViewController::avatarViewForUserName_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  cfstringStruct *local_2f0;
  cfstringStruct *local_2e0;
  undefined *local_230;
  undefined *local_228;
  bool local_1d9;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined *local_198 [2];
  undefined *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  code *local_178;
  undefined *local_170;
  char *local_168;
  undefined *local_160;
  int local_158;
  char *local_148;
  undefined8 local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  char *local_f0;
  undefined *local_e8;
  ID local_e0;
  cfstringStruct *local_d8;
  SEL local_d0;
  ID local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = (cfstringStruct *)0x0;
  local_d0 = param_2;
  local_c8 = param_1;
  _objc_storeStrong(&local_d8,param_3);
  IVar1 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_avatarURLForUserName__026bb5f8,local_d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_e0 = IVar1;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
             *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
  local_e8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setUserInteractionEnabled__026caad8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setClipsToBounds__026ca8c8,1);
  puVar2 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4034000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_tertiarySystemFillColor_026aa650);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar4 = "MMHeadImageHelper";
  _objc_getClass();
  local_f0 = pcVar4;
  _memset(auStack_138,0,0x40);
  local_b8 = &cf_getMainFrameHeadImageViewWithUsrName_headImgUrl_bAutoUpdate_bRoundCorner_;
  local_b0 = &cf_getProfileHeadImageViewWithUsrName_headImgUrl_bAutoUpdate_bRoundCorner_;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,2);
  _objc_retainAutoreleasedReturnValue();
  local_228 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_228 != (undefined *)0x0) {
    lVar7 = *local_128;
    local_230 = (undefined *)0x0;
    do {
      do {
        if (*local_128 - lVar7 != 0) {
          _objc_enumerationMutation(*local_128 - lVar7,puVar2);
        }
        uVar8 = *(undefined8 *)(local_130 + (long)local_230 * 8);
        local_f8 = uVar8;
        _NSSelectorFromString();
        pcVar4 = local_f0;
        local_140 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_respondsToSelector__026ca818,uVar8);
        if (((ulong)pcVar4 & 1) != 0) {
          pcVar4 = local_f0;
          (*(code *)PTR__objc_msgSend_02578628)(local_f0,local_140,local_d8,local_e0,1,0);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
          local_148 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((ulong)pcVar4 & 1) == 0) {
            local_158 = 3;
          }
          else {
            FUN_01a02528(0x4044000000000000,local_148);
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addSubview__026ca4c0,local_148);
            puVar3 = PTR___dispatch_main_q_02578680;
            _objc_retainAutoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            local_188 = PTR___NSConcreteStackBlock_02578660;
            local_180 = 0xc2000000;
            local_17c = 0;
            local_178 = FUN_01a02838;
            local_170 = &DAT_0257a7a0;
            pcVar4 = local_148;
            (*(code *)PTR__objc_retain_02578638)();
            puVar5 = local_e8;
            local_168 = pcVar4;
            (*(code *)PTR__objc_retain_02578638)();
            local_160 = puVar5;
            _dispatch_async(puVar3,&local_188);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            puVar3 = local_e8;
            (*(code *)PTR__objc_retain_02578638)();
            local_c0 = puVar3;
            local_158 = 1;
            _objc_storeStrong(&local_160);
            _objc_storeStrong(&local_168,0);
          }
          _objc_storeStrong(&local_148,0);
          if (local_158 != 3) goto LAB_01a02164;
        }
        local_230 = local_230 + 1;
      } while (local_230 < local_228);
      local_228 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10)
      ;
      local_230 = (undefined *)0x0;
    } while (local_228 != (undefined *)0x0);
  }
  local_158 = 0;
LAB_01a02164:
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (local_158 == 0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc();
    uVar9 = 0;
    uVar8 = 0;
    uVar11 = 0x4044000000000000;
    uVar10 = 0x4044000000000000;
    FUN_019ff2f4();
    local_1b8 = uVar8;
    local_1b0 = uVar9;
    local_1a8 = uVar10;
    local_1a0 = uVar11;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar8,uVar9,uVar10,uVar11,puVar2,PTR_s_initWithFrame__026ca6e8);
    local_198[0] = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTextAlignment__026caa90,1);
    puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4030000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
               PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_198[0],PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_198[0],PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar6 = local_d8;
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)pcVar6 & 1) == 0) {
      local_2e0 = &::cf___;
    }
    else {
      local_2e0 = local_d8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_1c0 = local_2e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_2e0,PTR_s_length_0269cca0);
    local_2f0 = local_1c0;
    if (local_2e0 == (cfstringStruct *)0x0) {
      local_2f0 = &cf__;
    }
    else {
      pcVar6 = local_1c0;
      puVar2 = PTR_s_rangeOfComposedCharacterSequence_026aadc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1c0,PTR_s_rangeOfComposedCharacterSequence_026aadc0,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_2f0,PTR_s_substringWithRange__0269d138,pcVar6,puVar2);
      _objc_retainAutoreleasedReturnValue();
      local_1d8 = local_2f0;
    }
    local_1d9 = local_2e0 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_msgSend_02578628)(local_198[0],PTR_s_setText__026caa88,local_2f0);
    if (local_1d9) {
      (*(code *)PTR__objc_release_02578630)(local_1d8);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addSubview__026ca4c0,local_198[0]);
    puVar2 = local_e8;
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = puVar2;
    local_158 = 1;
    _objc_storeStrong(&local_1c0);
    _objc_storeStrong(local_198,0);
  }
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_c0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

