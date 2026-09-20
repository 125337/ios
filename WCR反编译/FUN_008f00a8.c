// FUN_008f00a8 @ 008f00a8

void FUN_008f00a8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined8 uVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  cfstringStruct *local_230;
  ulong local_178;
  ulong local_170;
  cfstringStruct *local_138;
  cfstringStruct *local_130 [3];
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  int local_cc;
  ulong local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_c0,param_1);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_2);
  if (local_c0 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b8 = &cf___;
    local_cc = 1;
  }
  else {
    _memset(auStack_118,0,0x40);
    uVar1 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_170 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
    if (local_170 != 0) {
      lVar7 = *local_108;
      local_178 = 0;
      do {
        do {
          if (*local_108 - lVar7 != 0) {
            _objc_enumerationMutation(*local_108 - lVar7,uVar1);
          }
          pcVar3 = local_c0;
          local_d8 = *(undefined8 *)(local_110 + local_178 * 8);
          puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_b0 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_b0,1);
          _objc_retainAutoreleasedReturnValue();
          FUN_008eb4dc();
          _objc_retainAutoreleasedReturnValue();
          local_130[0] = pcVar3;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          pcVar4 = local_130[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_130[0],PTR_s_length_0269cca0);
          pcVar6 = local_c0;
          pcVar3 = local_130[0];
          if (pcVar4 == (cfstringStruct *)0x0) {
            uVar5 = local_d8;
            _NSSelectorFromString();
            FUN_008e6088(pcVar6,uVar5);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_138 = pcVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
            if ((((ulong)pcVar6 & 1) == 0) ||
               (pcVar6 = local_138,
               (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0),
               pcVar3 = local_138, pcVar6 == (cfstringStruct *)0x0)) {
              pcVar3 = local_138;
              puVar2 = PTR__OBJC_CLASS___NSURL_026ce328;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
              if (((ulong)pcVar3 & 1) == 0) {
                local_cc = 0;
              }
              else {
                pcVar3 = local_138;
                (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_absoluteString_026a1de0);
                _objc_retainAutoreleasedReturnValue();
                local_230 = pcVar3;
                if (pcVar3 == (cfstringStruct *)0x0) {
                  local_230 = &cf___;
                }
                (*(code *)PTR__objc_retain_02578638)();
                local_b8 = local_230;
                (*(code *)PTR__objc_release_02578630)(pcVar3);
                local_cc = 1;
              }
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_b8 = pcVar3;
              local_cc = 1;
            }
            _objc_storeStrong(&local_138,0);
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_b8 = pcVar3;
            local_cc = 1;
          }
          _objc_storeStrong(local_130,0);
          if (local_cc != 0) goto LAB_008f05ac;
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_178 = 0;
      } while (local_170 != 0);
    }
    local_cc = 0;
LAB_008f05ac:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_cc == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b8 = &cf___;
      local_cc = 1;
    }
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

