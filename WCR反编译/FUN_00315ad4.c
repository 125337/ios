// FUN_00315ad4 @ 00315ad4

void FUN_00315ad4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong local_168;
  ulong local_160;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined *local_d8;
  undefined4 local_d0;
  long local_c0;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  if ((local_b8 == 0) ||
     (lVar5 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0),
     lVar5 == 0)) {
    local_b0 = (undefined *)0x0;
    local_d0 = 1;
  }
  else {
    local_d8 = (undefined *)0x0;
    _memset(auStack_120,0,0x40);
    uVar6 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_sublayers_026a07b8);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar6);
    local_160 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_160 != 0) {
      lVar5 = *local_110;
      local_168 = 0;
      do {
        do {
          if (*local_110 - lVar5 != 0) {
            _objc_enumerationMutation(*local_110 - lVar5,uVar1);
          }
          uVar6 = *(ulong *)(local_118 + local_168 * 8);
          puVar2 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
          local_e0 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((uVar6 & 1) != 0) {
            uVar6 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_name_0269d828);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar6);
            if ((uVar3 & 1) != 0) {
              if (local_d8 == (undefined *)0x0) {
                _objc_storeStrong(&local_d8,local_e0);
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_removeFromSuperlayer_026ca7f8);
              }
            }
          }
          local_168 = local_168 + 1;
        } while (local_168 < local_160);
        local_160 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_168 = 0;
      } while (local_160 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_d8 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_d8;
      local_d8 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setName__0269e0c8,local_c0);
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_addSublayer__026ca4b8,local_d8);
    }
    puVar2 = local_d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar2;
    local_d0 = 1;
    _objc_storeStrong(&local_d8,0);
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

