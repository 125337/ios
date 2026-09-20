// FUN_000f2598 @ 000f2598

void FUN_000f2598(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *local_198;
  undefined *local_190;
  ulong local_160 [2];
  int local_14c;
  ulong local_148;
  undefined8 local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_1);
  uVar7 = local_d8;
  FUN_000ebff0();
  _objc_retainAutoreleasedReturnValue();
  local_e0 = uVar7;
  _memset(auStack_138,0,0x40);
  local_c8 = &cf_m_nsUsrName;
  local_c0 = &cf_m_nsUserName;
  local_b8 = &cf_username;
  local_b0 = &cf_userName;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8,4);
  _objc_retainAutoreleasedReturnValue();
  local_190 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_190 != (undefined *)0x0) {
    lVar5 = *local_128;
    local_198 = (undefined *)0x0;
    do {
      do {
        if (*local_128 - lVar5 != 0) {
          _objc_enumerationMutation(*local_128 - lVar5,puVar1);
        }
        uVar6 = *(undefined8 *)(local_130 + (long)local_198 * 8);
        local_f8 = uVar6;
        _NSSelectorFromString();
        uVar7 = local_e0;
        local_140 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_respondsToSelector__026ca818,uVar6);
        if ((uVar7 & 1) != 0) {
          uVar2 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,local_140);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_148 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
          uVar7 = uVar2 & 0xffffffff;
          if ((uVar2 & 1) == 0) {
LAB_000f2894:
            local_14c = 0;
          }
          else {
            uVar4 = local_148;
            (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0);
            uVar2 = local_148;
            uVar7 = 0;
            if (uVar4 == 0) goto LAB_000f2894;
            (*(code *)PTR__objc_retain_02578638)();
            local_d0 = uVar2;
            uVar7 = 1;
            local_14c = 1;
          }
          _objc_storeStrong(uVar7,&local_148,0);
          if (local_14c != 0) goto LAB_000f2aac;
        }
        uVar2 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_valueForKey__0269d128,local_f8);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_160[0] = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        uVar7 = uVar2 & 0xffffffff;
        if ((uVar2 & 1) == 0) {
LAB_000f2a14:
          local_14c = 0;
        }
        else {
          uVar4 = local_160[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_160[0],PTR_s_length_0269cca0);
          uVar2 = local_160[0];
          uVar7 = 0;
          if (uVar4 == 0) goto LAB_000f2a14;
          (*(code *)PTR__objc_retain_02578638)();
          local_d0 = uVar2;
          uVar7 = 1;
          local_14c = 1;
        }
        _objc_storeStrong(uVar7,local_160,0);
        if (local_14c != 0) goto LAB_000f2aac;
        local_198 = local_198 + 1;
      } while (local_198 < local_190);
      local_190 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10)
      ;
      local_198 = (undefined *)0x0;
    } while (local_190 != (undefined *)0x0);
  }
  local_14c = 0;
LAB_000f2aac:
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (local_14c == 0) {
    local_d0 = 0;
    local_14c = 1;
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_d0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

