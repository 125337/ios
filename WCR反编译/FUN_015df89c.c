// FUN_015df89c @ 015df89c

void FUN_015df89c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *local_2d8;
  undefined *local_2d0;
  undefined *local_268;
  undefined *local_260;
  cfstringStruct *local_230;
  undefined8 local_228;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  undefined8 local_1e0;
  cfstringStruct *local_1c0;
  undefined1 auStack_1b8 [8];
  long local_1b0;
  long *local_1a8;
  undefined8 local_178;
  int local_16c;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  undefined1 auStack_138 [128];
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_160 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_160,param_1);
  pcVar1 = local_160;
  FUN_015fab58();
  _objc_retainAutoreleasedReturnValue();
  local_168 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_158 = &cf___;
    local_16c = 1;
  }
  else {
    _memset(auStack_1b8,0,0x40);
    local_b8 = &cf_m_nsHeadImgUrl;
    local_b0 = &cf_m_nsHDHeadImgUrl;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,2
              );
    _objc_retainAutoreleasedReturnValue();
    local_260 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_260 != (undefined *)0x0) {
      lVar5 = *local_1a8;
      local_268 = (undefined *)0x0;
      do {
        do {
          if (*local_1a8 - lVar5 != 0) {
            _objc_enumerationMutation(*local_1a8 - lVar5,puVar2);
          }
          local_178 = *(undefined8 *)(local_1b0 + (long)local_268 * 8);
          pcVar1 = local_168;
          (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_valueForKey__0269d128,local_178);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_1c0 = pcVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
          uVar6 = (ulong)pcVar1 & 0xffffffff;
          if (((ulong)pcVar1 & 1) == 0) {
LAB_015dfb0c:
            local_16c = 0;
          }
          else {
            pcVar4 = local_1c0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_length_0269cca0);
            pcVar1 = local_1c0;
            uVar6 = 0;
            if (pcVar4 == (cfstringStruct *)0x0) goto LAB_015dfb0c;
            (*(code *)PTR__objc_retain_02578638)();
            local_158 = pcVar1;
            uVar6 = 1;
            local_16c = 1;
          }
          _objc_storeStrong(uVar6,&local_1c0,0);
          if (local_16c != 0) goto LAB_015dfb98;
          local_268 = local_268 + 1;
        } while (local_268 < local_260);
        local_260 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,
                   0x10);
        local_268 = (undefined *)0x0;
      } while (local_260 != (undefined *)0x0);
    }
    local_16c = 0;
LAB_015dfb98:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_16c == 0) {
      _memset(auStack_220,0,0x40);
      local_150 = &cf_getContactHeadImageURL;
      local_148 = &cf_getHeadImgUrl;
      local_140 = &cf_getBigHeadImgUrl;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                 &local_150,3);
      _objc_retainAutoreleasedReturnValue();
      local_2d0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_2d0 != (undefined *)0x0) {
        lVar5 = *local_210;
        local_2d8 = (undefined *)0x0;
        do {
          do {
            if (*local_210 - lVar5 != 0) {
              _objc_enumerationMutation(*local_210 - lVar5,puVar2);
            }
            uVar7 = *(undefined8 *)(local_218 + (long)local_2d8 * 8);
            local_1e0 = uVar7;
            _NSSelectorFromString();
            pcVar1 = local_168;
            local_228 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_168,PTR_s_respondsToSelector__026ca818,uVar7);
            if (((ulong)pcVar1 & 1) != 0) {
              pcVar1 = local_168;
              (*(code *)PTR__objc_msgSend_02578628)(local_168,local_228);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_230 = pcVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
              uVar6 = (ulong)pcVar1 & 0xffffffff;
              if (((ulong)pcVar1 & 1) == 0) {
LAB_015dfe18:
                local_16c = 0;
              }
              else {
                pcVar4 = local_230;
                (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_length_0269cca0);
                pcVar1 = local_230;
                uVar6 = 0;
                if (pcVar4 == (cfstringStruct *)0x0) goto LAB_015dfe18;
                (*(code *)PTR__objc_retain_02578638)();
                local_158 = pcVar1;
                uVar6 = 1;
                local_16c = 1;
              }
              _objc_storeStrong(uVar6,&local_230,0);
              if (local_16c != 0) goto LAB_015dfea4;
            }
            local_2d8 = local_2d8 + 1;
          } while (local_2d8 < local_2d0);
          local_2d0 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_138,
                     0x10);
          local_2d8 = (undefined *)0x0;
        } while (local_2d0 != (undefined *)0x0);
      }
      local_16c = 0;
LAB_015dfea4:
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (local_16c == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_158 = &cf___;
        local_16c = 1;
      }
    }
  }
  _objc_storeStrong(&local_168);
  _objc_storeStrong(&local_160,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_158);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

