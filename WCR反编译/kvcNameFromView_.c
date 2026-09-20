// kvcNameFromView: @ 00fe1410

/* Function Stack Size: 0x18 bytes */

ID WCRefineIconNameCaptureSupport::kvcNameFromView_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong local_188;
  ulong local_180;
  ulong local_150 [3];
  ulong local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  byte local_e5;
  int local_e4;
  ulong local_e0;
  ulong local_d8;
  SEL local_d0;
  ID local_c8;
  ulong local_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  local_d0 = param_2;
  local_c8 = param_1;
  _objc_storeStrong(&local_d8,param_3);
  local_b0 = &DAT_028e3078;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,&PTR___NSConcreteGlobalBlock_02583e68);
  if (*local_b0 + 1 != 0) {
    _dispatch_once(*local_b0 + 1,local_b0,local_b8);
  }
  _objc_storeStrong(&local_b8,0);
  uVar1 = local_d8;
  (*(code *)PTR__objc_retain_02578638)();
  local_e0 = uVar1;
  while (local_e0 != 0) {
    local_e5 = local_e0 == local_d8;
    _memset(auStack_130,0,0x40);
    uVar1 = DAT_028e3070;
    (*(code *)PTR__objc_retain_02578638)();
    local_180 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
    if (local_180 != 0) {
      lVar5 = *local_120;
      local_188 = 0;
      do {
        do {
          if (*local_120 - lVar5 != 0) {
            _objc_enumerationMutation(*local_120 - lVar5,uVar1);
          }
          uVar6 = *(ulong *)(local_128 + local_188 * 8);
          local_f0 = uVar6;
          if (((local_e5 & 1) != 0) ||
             ((*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isEqualToString__0269ccc8,&cf_name),
             (uVar6 & 1) == 0)) {
            uVar2 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_valueForKey__0269d128,local_f0);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_138 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
            uVar6 = local_138;
            if ((uVar2 & 1) == 0) {
              local_e4 = 6;
            }
            else {
              puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                         PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar6,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
              _objc_retainAutoreleasedReturnValue();
              local_150[0] = uVar6;
              (*(code *)PTR__objc_release_02578630)(puVar3);
              uVar6 = local_150[0];
              (*(code *)PTR__objc_msgSend_02578628)(local_150[0],PTR_s_length_0269cca0);
              if ((uVar6 == 0) ||
                 (((local_e5 & 1) == 0 && (uVar6 = local_150[0], FUN_00fe1ae8(), (uVar6 & 1) == 0)))
                 ) {
                local_e4 = 6;
              }
              else {
                uVar6 = local_150[0];
                (*(code *)PTR__objc_retain_02578638)();
                local_c0 = uVar6;
                local_e4 = 1;
              }
              _objc_storeStrong(local_150,0);
            }
            _objc_storeStrong(&local_138,0);
            if (local_e4 != 6) goto LAB_00fe1874;
          }
          local_188 = local_188 + 1;
        } while (local_188 < local_180);
        local_180 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10
                  );
        local_188 = 0;
      } while (local_180 != 0);
    }
    local_e4 = 0;
LAB_00fe1874:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_e4 != 0) goto LAB_00fe18d4;
    uVar6 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_e0;
    local_e0 = uVar6;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  local_e4 = 2;
LAB_00fe18d4:
  _objc_storeStrong(&local_e0,0);
  iVar4 = local_e4 + -2;
  if (iVar4 == 0) {
    local_c0 = 0;
    iVar4 = 1;
    local_e4 = 1;
  }
  _objc_storeStrong(iVar4,&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_c0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

