// FUN_015769f8 @ 015769f8

void FUN_015769f8(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_1a0;
  ulong local_180;
  ulong local_178;
  char *local_158;
  ulong local_150;
  char *local_148;
  bool local_139;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  undefined *local_d0;
  undefined4 local_c4;
  char *local_c0;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  pcVar1 = "MMImage";
  _objc_getClass();
  local_c0 = pcVar1;
  if ((pcVar1 == (char *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_instancesRespondToSelector__0269da90,PTR_s_initWithImage__0269e558),
     ((ulong)pcVar1 & 1) == 0)) {
    local_b0 = (undefined *)0x0;
    local_c4 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = puVar2;
    _memset(auStack_118,0,0x40);
    uVar3 = local_b8;
    FUN_01574f3c();
    _objc_retainAutoreleasedReturnValue();
    local_178 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_178 != 0) {
      lVar5 = *local_108;
      local_180 = 0;
      do {
        do {
          if (*local_108 - lVar5 != 0) {
            _objc_enumerationMutation(*local_108 - lVar5,uVar3);
          }
          uVar6 = *(ulong *)(local_110 + local_180 * 8);
          local_d8 = uVar6;
          FUN_01575f2c();
          _objc_retainAutoreleasedReturnValue();
          local_120 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_length_0269cca0);
          if (uVar6 == 0) {
            local_c4 = 3;
          }
          else {
            puVar2 = PTR__OBJC_CLASS___NSData_026ce1d0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,
                       local_120);
            _objc_retainAutoreleasedReturnValue();
            local_128 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
            local_139 = false;
            if (puVar2 == (undefined *)0x0) {
              local_1a0 = (undefined *)0x0;
            }
            else {
              local_1a0 = PTR__OBJC_CLASS___UIImage_026cdfd0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,local_128)
              ;
              _objc_retainAutoreleasedReturnValue();
              local_138 = local_1a0;
            }
            local_139 = puVar2 != (undefined *)0x0;
            (*(code *)PTR__objc_retain_02578638)();
            local_130 = local_1a0;
            if ((local_139 & 1U) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_138);
            }
            if (local_130 == (undefined *)0x0) {
              local_c4 = 3;
            }
            else {
              pcVar1 = local_c0;
              _objc_alloc();
              pcVar4 = pcVar1;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              local_148 = pcVar4;
              (*(code *)PTR__objc_release_02578630)(pcVar1);
              if (local_148 == (char *)0x0) {
                local_c4 = 3;
              }
              else {
                uVar6 = local_d8;
                FUN_01573a0c();
                if ((uVar6 & 1) != 0) {
                  uVar6 = local_d8;
                  FUN_01576028();
                  _objc_retainAutoreleasedReturnValue();
                  pcVar4 = local_148;
                  local_150 = uVar6;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_148,PTR_s_respondsToSelector__026ca818,
                             PTR_s_setIsLivePhoto__026a5b90);
                  pcVar1 = local_148;
                  if (((ulong)pcVar4 & 1) == 0) {
                    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1)
                    ;
                    _objc_retainAutoreleasedReturnValue();
                    FUN_01563e1c(pcVar1,&cf_isLivePhoto);
                    (*(code *)PTR__objc_release_02578630)(puVar2);
                  }
                  else {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_148,PTR_s_setIsLivePhoto__026a5b90,1);
                  }
                  uVar6 = local_150;
                  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0);
                  if (uVar6 != 0) {
                    FUN_01563e1c(uVar6,local_148,&cf_livePhotoVideoPath,local_150);
                    pcVar1 = local_148;
                    FUN_01533df4(local_148,PTR_s_tempExtraInfo_026a5ba0);
                    _objc_retainAutoreleasedReturnValue();
                    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
                    local_158 = pcVar1;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_class_0269cd60);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
                    if (((ulong)pcVar1 & 1) != 0) {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_158,PTR_s_setObject_forKey__026ca9e8,local_150,
                                 &cf_ExportedLivePhotoPath);
                    }
                    _objc_storeStrong(&local_158,0);
                  }
                  _objc_storeStrong(&local_150,0);
                }
                (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,local_148);
                local_c4 = 0;
              }
              _objc_storeStrong(&local_148,0);
            }
            _objc_storeStrong(&local_130);
            _objc_storeStrong(&local_128,0);
          }
          _objc_storeStrong(&local_120,0);
          local_180 = local_180 + 1;
        } while (local_180 < local_178);
        local_178 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_180 = 0;
      } while (local_178 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    puVar2 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar2;
    local_c4 = 1;
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

