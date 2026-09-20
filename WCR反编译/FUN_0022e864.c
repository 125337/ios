// FUN_0022e864 @ 0022e864

byte FUN_0022e864(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  cfstringStruct *local_1d8;
  ulong local_198;
  ulong local_190;
  undefined *local_140;
  cfstringStruct *local_138;
  ulong local_130;
  undefined1 local_121;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  uint local_d8;
  long local_c8;
  ulong local_c0;
  cfstringStruct *local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_3);
  if ((((local_b8 == (cfstringStruct *)0x0) ||
       (uVar2 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0),
       uVar2 == 0)) ||
      (lVar5 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0),
      lVar5 == 0)) ||
     (pcVar3 = local_b8,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_b8,PTR_s_respondsToSelector__026ca818,
                PTR_s_getImgSavePath_forCategory_isHD__026a0a10), ((ulong)pcVar3 & 1) == 0)) {
    local_a9 = 0;
    local_d8 = 1;
  }
  else {
    _memset(auStack_120,0,0x40);
    uVar2 = local_c0;
    FUN_0022ef6c();
    _objc_retainAutoreleasedReturnValue();
    local_190 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_190 != 0) {
      lVar5 = *local_110;
      local_198 = 0;
      do {
        do {
          if (*local_110 - lVar5 != 0) {
            _objc_enumerationMutation(*local_110 - lVar5,uVar2);
          }
          uVar6 = *(undefined8 *)(local_118 + local_198 * 8);
          local_e0 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_unsignedCharValue_026a0a00);
          local_121 = (undefined1)uVar6;
          for (local_130 = 0; local_130 < 2; local_130 = local_130 + 1) {
            pcVar3 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_getImgSavePath_forCategory_isHD__026a0a10,local_c0,local_121,
                       local_130 == 1);
            _objc_retainAutoreleasedReturnValue();
            local_1d8 = pcVar3;
            if (pcVar3 == (cfstringStruct *)0x0) {
              local_1d8 = &cf___;
            }
            puVar4 = PTR__OBJC_CLASS___NSData_026ce1d0;
            local_138 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSData_026ce1d0,
                       PTR_s_dataWithContentsOfFile_options_e_026a09f0,local_1d8,1,0);
            _objc_retainAutoreleasedReturnValue();
            local_140 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isEqualToData__026a0a18,local_c8);
            bVar1 = ((ulong)puVar4 & 1) == 0;
            if (bVar1) {
              local_a9 = 0;
            }
            local_d8 = (uint)bVar1;
            _objc_storeStrong(&local_140);
            _objc_storeStrong(&local_138,0);
            if (local_d8 != 0) goto LAB_0022ec9c;
          }
          local_198 = local_198 + 1;
        } while (local_198 < local_190);
        local_190 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_198 = 0;
      } while (local_190 != 0);
    }
    local_d8 = 0;
LAB_0022ec9c:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_d8 == 0) {
      local_a9 = 1;
      local_d8 = 1;
    }
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

