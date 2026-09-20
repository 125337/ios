// FUN_008eb4dc @ 008eb4dc

void FUN_008eb4dc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  cfstringStruct *local_1e8;
  ulong local_170;
  ulong local_168;
  cfstringStruct *local_128 [3];
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined8 local_d0;
  int local_c4;
  ulong local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  if (local_b8 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf___;
    local_c4 = 1;
  }
  else {
    _memset(auStack_110,0,0x40);
    uVar1 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    if (local_168 != 0) {
      lVar5 = *local_100;
      local_170 = 0;
      do {
        do {
          if (*local_100 - lVar5 != 0) {
            _objc_enumerationMutation(*local_100 - lVar5,uVar1);
          }
          local_d0 = *(undefined8 *)(local_108 + local_170 * 8);
          pcVar2 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_valueForKey__0269d128,local_d0);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_128[0] = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
          if ((((ulong)pcVar2 & 1) == 0) ||
             (pcVar4 = local_128[0],
             (*(code *)PTR__objc_msgSend_02578628)(local_128[0],PTR_s_length_0269cca0),
             pcVar2 = local_128[0], pcVar4 == (cfstringStruct *)0x0)) {
            pcVar2 = local_128[0];
            puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
            if (((ulong)pcVar2 & 1) == 0) {
              local_c4 = 0;
            }
            else {
              pcVar2 = local_128[0];
              (*(code *)PTR__objc_msgSend_02578628)(local_128[0],PTR_s_absoluteString_026a1de0);
              _objc_retainAutoreleasedReturnValue();
              local_1e8 = pcVar2;
              if (pcVar2 == (cfstringStruct *)0x0) {
                local_1e8 = &cf___;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = local_1e8;
              (*(code *)PTR__objc_release_02578630)(pcVar2);
              local_c4 = 1;
            }
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = pcVar2;
            local_c4 = 1;
          }
          _objc_storeStrong(local_128,0);
          if (local_c4 != 0) goto LAB_008eb8dc;
          local_170 = local_170 + 1;
        } while (local_170 < local_168);
        local_168 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_170 = 0;
      } while (local_168 != 0);
    }
    local_c4 = 0;
LAB_008eb8dc:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_c4 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = &cf___;
      local_c4 = 1;
    }
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

