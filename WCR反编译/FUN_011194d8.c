// FUN_011194d8 @ 011194d8

void FUN_011194d8(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *local_280;
  undefined *local_278;
  undefined *local_228;
  cfstringStruct *local_218;
  cfstringStruct *local_200;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e8;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  undefined8 local_1a0;
  byte local_191;
  undefined *local_190;
  byte local_181;
  undefined *local_180;
  byte local_171;
  undefined *local_170;
  byte local_161;
  undefined *local_160;
  byte local_151;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  byte local_131;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  byte local_119;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  byte local_101;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  uint local_dc;
  ulong local_d8;
  ulong local_d0;
  cfstringStruct *local_c8;
  undefined1 auStack_c0 [128];
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_1);
  uVar2 = local_d0;
  FUN_0110d24c();
  _objc_retainAutoreleasedReturnValue();
  local_d8 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_c8 = (cfstringStruct *)0x0;
    local_dc = 1;
  }
  else {
    pcVar3 = &cf_MMServiceCenter;
    _NSClassFromString();
    pcVar4 = &cf_MMHeadImageMgr;
    local_e8 = pcVar3;
    _NSClassFromString();
    local_101 = 0;
    local_f0 = pcVar4;
    if ((local_e8 == (cfstringStruct *)0x0) ||
       (pcVar3 = local_e8,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_e8,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
       ((ulong)pcVar3 & 1) == 0)) {
      local_1f0 = (cfstringStruct *)0x0;
    }
    else {
      local_1f0 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_101 = 1;
      local_100 = local_1f0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_f8 = local_1f0;
    if ((local_101 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_100);
    }
    local_119 = 0;
    if (((local_f8 == (cfstringStruct *)0x0) || (local_f0 == (cfstringStruct *)0x0)) ||
       (pcVar3 = local_f8,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_f8,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
       ((ulong)pcVar3 & 1) == 0)) {
      local_200 = (cfstringStruct *)0x0;
    }
    else {
      local_200 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_getService__0269d170,local_f0);
      _objc_retainAutoreleasedReturnValue();
      local_119 = 1;
      local_118 = local_200;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_110 = local_200;
    if ((local_119 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_118);
    }
    pcVar3 = local_110;
    FUN_0111b06c(local_110,&cf_headImgCacher);
    _objc_retainAutoreleasedReturnValue();
    local_131 = 0;
    local_218 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_218 = local_110;
      FUN_0111b06c(local_110,&cf__headImgCacher);
      _objc_retainAutoreleasedReturnValue();
      local_130 = local_218;
    }
    local_131 = pcVar3 == (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_128 = local_218;
    if ((local_131 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_130);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    local_140 = PTR_s_loadImageFromLocal_withCategory__026a0a08;
    if ((local_128 == (cfstringStruct *)0x0) ||
       (pcVar3 = local_128,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_128,PTR_s_respondsToSelector__026ca818,
                  PTR_s_loadImageFromLocal_withCategory__026a0a08), ((ulong)pcVar3 & 1) == 0)) {
      local_c8 = (cfstringStruct *)0x0;
      local_dc = 1;
    }
    else {
      uVar2 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_hasSuffix__0269d018,&cf__chatroom);
      local_151 = 0;
      local_161 = 0;
      local_171 = 0;
      local_181 = 0;
      local_191 = 0;
      if ((uVar2 & 1) == 0) {
        puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
        _objc_retainAutoreleasedReturnValue();
        local_181 = 1;
        local_228 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_180 = puVar6;
        local_40 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_40,1);
        _objc_retainAutoreleasedReturnValue();
        local_191 = 1;
        local_190 = local_228;
      }
      else {
        puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810);
        _objc_retainAutoreleasedReturnValue();
        local_151 = 1;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_150 = puVar6;
        local_38 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
        _objc_retainAutoreleasedReturnValue();
        local_161 = 1;
        local_228 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_160 = puVar5;
        local_30 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_38,2);
        _objc_retainAutoreleasedReturnValue();
        local_171 = 1;
        local_170 = local_228;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_148 = local_228;
      if ((local_191 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_190);
      }
      if ((local_181 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_180);
      }
      if ((local_171 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_170);
      }
      if ((local_161 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_160);
      }
      if ((local_151 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_150);
      }
      _memset(auStack_1e0,0,0x40);
      puVar6 = local_148;
      (*(code *)PTR__objc_retain_02578638)();
      local_278 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_c0,0x10)
      ;
      if (local_278 != (undefined *)0x0) {
        lVar7 = *local_1d0;
        local_280 = (undefined *)0x0;
        do {
          do {
            if (*local_1d0 - lVar7 != 0) {
              _objc_enumerationMutation(*local_1d0 - lVar7,puVar6);
            }
            uVar2 = local_d8;
            pcVar3 = local_128;
            puVar5 = local_140;
            uVar8 = *(undefined8 *)(local_1d8 + (long)local_280 * 8);
            local_1a0 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_unsignedIntValue_0269db10);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar5,uVar2,uVar8,1);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___UIImage_026cdfd0;
            local_1e8 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
            uVar2 = local_d8;
            pcVar4 = local_128;
            puVar5 = local_140;
            if (((ulong)pcVar3 & 1) == 0) {
              uVar8 = local_1a0;
              (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_unsignedIntValue_0269db10);
              (*(code *)PTR__objc_msgSend_02578628)(pcVar4,puVar5,uVar2,uVar8,0);
              _objc_retainAutoreleasedReturnValue();
              pcVar3 = local_1e8;
              local_1e8 = pcVar4;
              (*(code *)PTR__objc_release_02578630)(pcVar3);
            }
            pcVar3 = local_1e8;
            puVar5 = PTR__OBJC_CLASS___UIImage_026cdfd0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
            pcVar4 = local_1e8;
            bVar1 = ((ulong)pcVar3 & 1) != 0;
            if (bVar1) {
              (*(code *)PTR__objc_retain_02578638)();
              local_c8 = pcVar4;
            }
            local_dc = (uint)bVar1;
            _objc_storeStrong(&local_1e8,0);
            if (local_dc != 0) goto LAB_01119d9c;
            local_280 = local_280 + 1;
          } while (local_280 < local_278);
          local_278 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_c0,
                     0x10);
          local_280 = (undefined *)0x0;
        } while (local_278 != (undefined *)0x0);
      }
      local_dc = 0;
LAB_01119d9c:
      (*(code *)PTR__objc_release_02578630)(puVar6);
      if (local_dc == 0) {
        local_c8 = (cfstringStruct *)0x0;
        local_dc = 1;
      }
      _objc_storeStrong(&local_148,0);
    }
    _objc_storeStrong(&local_128);
    _objc_storeStrong(&local_110,0);
    _objc_storeStrong(&local_f8,0);
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_c8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

