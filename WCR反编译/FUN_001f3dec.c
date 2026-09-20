// FUN_001f3dec @ 001f3dec

void FUN_001f3dec(double param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  double dVar7;
  ulong local_170;
  ulong local_168;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  ulong local_d8;
  double local_d0;
  double local_c8;
  undefined4 local_c0;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  ulong *puVar2;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = &local_b0;
  local_b0 = 0;
  _objc_storeStrong(puVar2,param_2);
  uVar1 = (uint)puVar2;
  FUN_001e6b90();
  if (((uVar1 & 1) == 0) || (local_b0 == 0)) {
    local_c0 = 1;
  }
  else {
    uVar3 = local_b0;
    FUN_001f4530();
    if ((uVar3 & 1) == 0) {
      FUN_001f4a4c();
      local_c8 = param_1;
      FUN_001f4b44();
      local_d0 = param_1;
      FUN_001f4c24();
      _objc_retainAutoreleasedReturnValue();
      local_d8 = uVar3;
      _memset(auStack_120,0,0x40);
      uVar3 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_168 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_168 != 0) {
        lVar5 = *local_110;
        local_170 = 0;
        do {
          do {
            if (*local_110 - lVar5 != 0) {
              _objc_enumerationMutation(*local_110 - lVar5,uVar3);
            }
            uVar6 = *(ulong *)(local_118 + local_170 * 8);
            puVar4 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
            local_e0 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
            if ((uVar6 & 1) != 0) {
              dVar7 = local_c8;
              FUN_001d5a74(local_e0);
              uVar6 = local_e0;
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_layer_026ca788);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(dVar7);
              (*(code *)PTR__objc_release_02578630)(uVar6);
              dVar7 = local_d0;
              if (local_d0 <= 0.0) {
                uVar6 = local_e0;
                (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_layer_026ca788);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(0);
                (*(code *)PTR__objc_release_02578630)(uVar6);
                puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
                _objc_retainAutoreleasedReturnValue();
                _objc_retainAutorelease();
                (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGColor_026ca470);
                uVar6 = local_e0;
                (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_layer_026ca788);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(uVar6);
                (*(code *)PTR__objc_release_02578630)(puVar4);
              }
              else {
                uVar6 = local_e0;
                (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_layer_026ca788);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(dVar7);
                (*(code *)PTR__objc_release_02578630)(uVar6);
                uVar6 = local_d8;
                _objc_retainAutorelease();
                (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_CGColor_026ca470);
                uVar6 = local_e0;
                (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_layer_026ca788);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(uVar6);
              }
              uVar6 = local_e0;
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_layer_026ca788);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(uVar6);
            }
            local_170 = local_170 + 1;
          } while (local_170 < local_168);
          local_168 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                     0x10);
          local_170 = 0;
        } while (local_168 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      _objc_storeStrong(&local_d8,0);
      local_c0 = 0;
    }
    else {
      local_c0 = 1;
    }
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

