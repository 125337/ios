// FUN_007c8640 @ 007c8640

void FUN_007c8640(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong local_1a0;
  ulong local_198;
  ulong local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  ulong local_e8;
  undefined8 local_e0;
  cfstringStruct *local_d8;
  ulong local_d0;
  int local_c8;
  ulong local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar3 = local_b8;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar3 & 1) == 0) ||
     (uVar3 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0),
     uVar3 == 0)) {
    local_b0 = 0;
    local_c8 = 1;
  }
  else {
    FUN_007c91c4();
    _objc_retainAutoreleasedReturnValue();
    local_d0 = uVar3;
    if (uVar3 == 0) {
      local_b0 = 0;
      local_c8 = 1;
    }
    else {
      pcVar4 = &cf_getStringKeyInNSCacheByValue_;
      _NSSelectorFromString();
      uVar3 = local_d0;
      local_d8 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_respondsToSelector__026ca818,pcVar4);
      if ((uVar3 & 1) == 0) {
        local_b0 = 0;
        local_c8 = 1;
      }
      else {
        local_e0 = 0;
        uVar3 = local_b8;
        FUN_007c938c();
        _objc_retainAutoreleasedReturnValue();
        local_e8 = uVar3;
        _memset(auStack_130,0,0x40);
        uVar3 = local_e8;
        (*(code *)PTR__objc_retain_02578638)();
        local_198 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10
                  );
        if (local_198 != 0) {
          lVar6 = *local_120;
          local_1a0 = 0;
          do {
            do {
              if (*local_120 - lVar6 != 0) {
                _objc_enumerationMutation(*local_120 - lVar6,uVar3);
              }
              local_f0 = *(undefined8 *)(local_128 + local_1a0 * 8);
              uVar5 = local_d0;
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,local_d8,local_f0);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_138 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
              uVar7 = uVar5 & 0xffffffff;
              if ((uVar5 & 1) == 0) {
LAB_007c89b8:
                local_c8 = 0;
              }
              else {
                uVar5 = local_138;
                (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0);
                uVar7 = 0;
                if (uVar5 == 0) goto LAB_007c89b8;
                _objc_storeStrong(uVar5,&local_e0,local_138);
                uVar7 = 2;
                local_c8 = 2;
              }
              _objc_storeStrong(uVar7,&local_138,0);
              if (local_c8 != 0) goto LAB_007c8a4c;
              local_1a0 = local_1a0 + 1;
            } while (local_1a0 < local_198);
            local_198 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                       0x10);
            local_1a0 = 0;
          } while (local_198 != 0);
        }
        local_c8 = 0;
LAB_007c8a4c:
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar1 = local_e0;
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = uVar1;
        local_c8 = 1;
        _objc_storeStrong(&local_e8);
        _objc_storeStrong(&local_e0,0);
      }
    }
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

