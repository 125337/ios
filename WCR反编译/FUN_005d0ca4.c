// FUN_005d0ca4 @ 005d0ca4

void FUN_005d0ca4(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_1e0;
  ulong local_198;
  ulong local_190;
  char *local_160;
  ulong local_158;
  char *local_150;
  byte local_141;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined *local_d8;
  undefined4 local_d0;
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
  if (pcVar1 == (char *)0x0) {
    local_b0 = (undefined *)0x0;
    local_d0 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar2;
    _memset(auStack_120,0,0x40);
    uVar3 = local_b8;
    FUN_005a69dc();
    _objc_retainAutoreleasedReturnValue();
    local_190 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_190 != 0) {
      lVar5 = *local_110;
      local_198 = 0;
      do {
        do {
          if (*local_110 - lVar5 != 0) {
            _objc_enumerationMutation(*local_110 - lVar5,uVar3);
          }
          uVar6 = *(ulong *)(local_118 + local_198 * 8);
          local_e0 = uVar6;
          FUN_005a7354();
          _objc_retainAutoreleasedReturnValue();
          local_128 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_length_0269cca0);
          if (uVar6 == 0) {
            local_d0 = 3;
          }
          else {
            puVar2 = PTR__OBJC_CLASS___NSData_026ce1d0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,
                       local_128);
            _objc_retainAutoreleasedReturnValue();
            local_141 = 0;
            local_130 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
            if (puVar2 == (undefined *)0x0) {
              local_1e0 = (undefined *)0x0;
            }
            else {
              local_1e0 = PTR__OBJC_CLASS___UIImage_026cdfd0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,local_130)
              ;
              _objc_retainAutoreleasedReturnValue();
              local_141 = 1;
              local_140 = local_1e0;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_138 = local_1e0;
            if ((local_141 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_140);
            }
            if (local_138 == (undefined *)0x0) {
              local_d0 = 3;
            }
            else {
              local_150 = (char *)0x0;
              pcVar1 = local_c0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c0,PTR_s_instancesRespondToSelector__0269da90,
                         PTR_s_initWithImage__0269e558);
              if (((ulong)pcVar1 & 1) != 0) {
                pcVar4 = local_c0;
                _objc_alloc();
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar4,PTR_s_initWithImage__0269e558,local_138);
                pcVar1 = local_150;
                local_150 = pcVar4;
                (*(code *)PTR__objc_release_02578630)(pcVar1);
              }
              if (local_150 == (char *)0x0) {
                local_d0 = 3;
              }
              else {
                uVar6 = local_e0;
                FUN_005a71f0();
                if ((uVar6 & 1) != 0) {
                  uVar6 = local_e0;
                  FUN_005c75c4();
                  _objc_retainAutoreleasedReturnValue();
                  local_158 = uVar6;
                  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_setIsLivePhoto__026a5b90,1);
                  uVar6 = local_158;
                  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
                  if (uVar6 != 0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_150,PTR_s_setLivePhotoVideoPath__026a5b98,local_158);
                    pcVar1 = local_150;
                    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_tempExtraInfo_026a5ba0);
                    _objc_retainAutoreleasedReturnValue();
                    local_160 = pcVar1;
                    if (pcVar1 != (char *)0x0) {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (pcVar1,PTR_s_setObject_forKey__026ca9e8,local_158,
                                 &cf_ExportedLivePhotoPath);
                    }
                    _objc_storeStrong(&local_160,0);
                  }
                  _objc_storeStrong(&local_158,0);
                }
                (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_150);
                local_d0 = 0;
              }
              _objc_storeStrong(&local_150,0);
            }
            _objc_storeStrong(&local_138);
            _objc_storeStrong(&local_130,0);
          }
          _objc_storeStrong(&local_128,0);
          local_198 = local_198 + 1;
        } while (local_198 < local_190);
        local_190 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_198 = 0;
      } while (local_190 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    puVar2 = local_d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar2;
    local_d0 = 1;
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

