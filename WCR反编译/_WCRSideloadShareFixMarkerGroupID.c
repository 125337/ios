// _WCRSideloadShareFixMarkerGroupID @ 01509ec8

void _WCRSideloadShareFixMarkerGroupID(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  uint local_174;
  ulong local_158;
  ulong local_150;
  undefined *local_130;
  byte local_121;
  ulong local_120;
  ulong local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  undefined *local_c8;
  int local_bc;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  FUN_01509968();
  _objc_retainAutoreleasedReturnValue();
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0);
  if (param_1 == 0) {
    local_b0 = (undefined *)0x0;
    local_bc = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar2;
    _memset(auStack_110,0,0x40);
    uVar1 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    if (local_150 != 0) {
      lVar7 = *local_100;
      local_158 = 0;
      do {
        do {
          if (*local_100 - lVar7 != 0) {
            _objc_enumerationMutation(*local_100 - lVar7,uVar1);
          }
          local_d0 = *(ulong *)(local_108 + local_158 * 8);
          uVar3 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_objectForKeyedSubscript__0269d098,local_d0);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          FUN_01509a84();
          _objc_retainAutoreleasedReturnValue();
          local_118 = uVar4;
          (*(code *)PTR__objc_release_02578630)(uVar3);
          uVar3 = local_118;
          (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_path_0269d4d8);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          puVar2 = local_c8;
          local_121 = 0;
          local_174 = 1;
          if (uVar4 != 0) {
            uVar4 = local_118;
            (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_path_0269d4d8);
            _objc_retainAutoreleasedReturnValue();
            local_121 = 1;
            local_120 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_fileExistsAtPath__026ca630);
            local_174 = (uint)puVar2 ^ 1;
          }
          if ((local_121 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_120);
          }
          (*(code *)PTR__objc_release_02578630)(uVar3);
          if ((local_174 & 1) == 0) {
            puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,
                       PTR_s_stringWithContentsOfURL_encoding_026a7ba0,local_118,4,0);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
            local_130 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                       PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar5,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = local_130;
            local_130 = puVar5;
            (*(code *)PTR__objc_release_02578630)(puVar2);
            (*(code *)PTR__objc_release_02578630)(puVar6);
            puVar2 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
            if (puVar2 == (undefined *)0x0) {
              local_bc = 3;
            }
            else {
              uVar4 = local_b8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b8,PTR_s_objectForKeyedSubscript__0269d098,local_130);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_release_02578630)();
              uVar3 = local_d0;
              puVar2 = local_130;
              if (uVar4 == 0) {
                puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
                if (((uVar3 & 1) == 0) ||
                   (uVar3 = local_d0,
                   (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0),
                   puVar2 = local_130, uVar3 == 0)) {
                  local_bc = 0;
                }
                else {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_b0 = puVar2;
                  local_bc = 1;
                }
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
                local_b0 = puVar2;
                local_bc = 1;
              }
            }
            _objc_storeStrong(&local_130,0);
          }
          else {
            local_bc = 3;
          }
          _objc_storeStrong(&local_118,0);
          if ((local_bc != 0) && (local_bc != 3)) goto LAB_0150a3f4;
          local_158 = local_158 + 1;
        } while (local_158 < local_150);
        local_150 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_158 = 0;
      } while (local_150 != 0);
    }
    local_bc = 0;
LAB_0150a3f4:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_bc == 0) {
      local_b0 = (undefined *)0x0;
      local_bc = 1;
    }
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

