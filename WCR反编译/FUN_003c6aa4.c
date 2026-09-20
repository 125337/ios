// FUN_003c6aa4 @ 003c6aa4

void FUN_003c6aa4(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_310;
  undefined *local_308;
  uint local_22c;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  ulong local_1c8;
  cfstringStruct *local_1a8;
  ulong local_1a0;
  ulong local_198;
  ulong local_190;
  ulong local_188;
  byte local_17a;
  byte local_179;
  ulong local_178;
  ulong local_170;
  ulong local_168;
  ulong local_160;
  ulong local_158;
  ulong local_150;
  ulong local_148;
  ulong local_140;
  undefined4 local_134;
  ulong local_130;
  ulong local_128;
  ulong local_120;
  ulong local_118;
  undefined1 auStack_110 [128];
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_1);
  if (local_130 == 0) {
    local_134 = 1;
    goto LAB_003c7660;
  }
  uVar6 = local_130;
  _objc_getAssociatedObject(local_130,&DAT_028ca140);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_130;
  local_140 = uVar6;
  _objc_getAssociatedObject(local_130,&DAT_028ca141);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = local_130;
  local_148 = uVar1;
  _objc_getAssociatedObject(local_130,&DAT_028ca142);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_140;
  local_150 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
  if (((uVar1 == 0) &&
      (uVar6 = local_148, (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0),
      uVar6 == 0)) &&
     (uVar6 = local_150, (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0),
     uVar6 == 0)) {
    uVar6 = local_130;
    FUN_00355cb8();
    _objc_retainAutoreleasedReturnValue();
    local_158 = local_140;
    local_160 = local_148;
    local_168 = local_150;
    FUN_003c76a4();
    _objc_storeStrong(&local_140,local_158);
    _objc_storeStrong(&local_148,local_160);
    _objc_storeStrong(&local_150,local_168);
    (*(code *)PTR__objc_release_02578630)(uVar6);
  }
  uVar6 = local_130;
  FUN_003612b8(local_130,&cf_m_cellData);
  _objc_retainAutoreleasedReturnValue();
  local_170 = uVar6;
  if (uVar6 == 0) {
    uVar1 = local_130;
    FUN_003b3da8(local_130,"m_cellData");
    _objc_retainAutoreleasedReturnValue();
    uVar6 = local_170;
    local_170 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar6);
  }
  uVar6 = local_170;
  FUN_003c77d8();
  _objc_retainAutoreleasedReturnValue();
  local_178 = uVar6;
  FUN_003ad8e4();
  uVar1 = local_140;
  local_179 = (byte)uVar6;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar6 = local_148;
  local_22c = 1;
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar1 = local_150;
    local_22c = 1;
    if ((uVar6 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      local_22c = (uint)uVar1;
    }
  }
  local_17a = (byte)local_22c & 1;
  if (((local_179 & 1) == 0) && ((local_22c & 1) == 0)) {
    local_134 = 1;
  }
  else {
    uVar1 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
    uVar6 = local_170;
    if (uVar1 == 0) {
      local_38 = &cf_m_textForNameLabel;
      local_30 = &cf_textForNameLabel;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      FUN_003afe84();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_140;
      local_140 = uVar6;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    uVar1 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0);
    uVar6 = local_170;
    if (uVar1 == 0) {
      local_48 = &cf_m_textForMessageLabel;
      local_40 = &cf_textForMessageLabel;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      FUN_003afe84();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_148;
      local_148 = uVar6;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    uVar1 = local_150;
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0);
    uVar6 = local_170;
    if (uVar1 == 0) {
      local_58 = &cf_m_textForTimeLabel;
      local_50 = &cf_textForTimeLabel;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      FUN_003afe84();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_150;
      local_150 = uVar6;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    uVar6 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
    if (((uVar6 == 0) &&
        (uVar6 = local_148, (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0),
        uVar6 == 0)) &&
       (uVar6 = local_150, (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0),
       uVar6 == 0)) {
      local_134 = 1;
    }
    else {
      uVar6 = local_130;
      local_60 = &cf_MMCPLabel;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      FUN_003c7a00(uVar6,&cf_m_nameLabel);
      _objc_retainAutoreleasedReturnValue();
      local_188 = uVar6;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      uVar6 = local_130;
      local_70 = &cf_NoLineBreakLabel;
      local_68 = &cf_MMCPLabel;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_70
                );
      _objc_retainAutoreleasedReturnValue();
      FUN_003c7a00(uVar6,&cf_m_messageLabel);
      _objc_retainAutoreleasedReturnValue();
      local_190 = uVar6;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      uVar6 = local_130;
      local_80 = &cf_MMUILabel;
      local_78 = &cf_UILabel;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_80
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      FUN_003c7a00(uVar6,&cf_m_timeLabel);
      _objc_retainAutoreleasedReturnValue();
      local_198 = uVar6;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      uVar6 = local_170;
      local_90 = &cf_m_cpKeyForNickname;
      local_88 = &cf_cpKeyForNickname;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_90
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      FUN_003afe84();
      _objc_retainAutoreleasedReturnValue();
      local_1a0 = uVar6;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      uVar1 = local_1a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_length_0269cca0);
      uVar6 = local_188;
      if (uVar1 == 0) {
LAB_003c7398:
        FUN_003c7be4(local_188,local_140);
      }
      else {
        puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
        if ((uVar6 & 1) == 0) goto LAB_003c7398;
        pcVar3 = &cf_setCpKey_;
        _NSSelectorFromString();
        uVar6 = local_188;
        local_1a8 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_respondsToSelector__026ca818,pcVar3);
        if ((uVar6 & 1) == 0) {
          FUN_003c7be4(local_188,local_140);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_188,local_1a8,local_1a0);
        }
      }
      FUN_003c7be4(local_190,local_148);
      FUN_003c7be4(local_198,local_150);
      _memset(auStack_208,0,0x40);
      local_128 = local_188;
      local_120 = local_190;
      local_118 = local_198;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                 &local_128,3);
      _objc_retainAutoreleasedReturnValue();
      local_308 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_308 != (undefined *)0x0) {
        lVar5 = *local_1f8;
        local_310 = (undefined *)0x0;
        do {
          do {
            if (*local_1f8 - lVar5 != 0) {
              _objc_enumerationMutation(*local_1f8 - lVar5,puVar2);
            }
            uVar6 = *(ulong *)(local_200 + (long)local_310 * 8);
            puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
            local_1c8 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
            if ((uVar6 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_setHidden__026ca970,0);
              (*(code *)PTR__objc_msgSend_02578628)
                        (0x3ff0000000000000,local_1c8,PTR_s_setAlpha__026ca860);
            }
            local_310 = local_310 + 1;
          } while (local_310 < local_308);
          local_308 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_110,
                     0x10);
          local_310 = (undefined *)0x0;
        } while (local_308 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if ((local_179 & 1) != 0) {
        FUN_003c8194(local_130,local_188,local_190,local_198);
      }
      FUN_003c89a0(local_130,local_140,local_148,local_150);
      _objc_storeStrong(&local_1a0);
      _objc_storeStrong(&local_198,0);
      _objc_storeStrong(&local_190,0);
      _objc_storeStrong(&local_188,0);
      local_134 = 0;
    }
  }
  _objc_storeStrong(&local_178);
  _objc_storeStrong(&local_170,0);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
LAB_003c7660:
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

