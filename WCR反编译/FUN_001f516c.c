// FUN_001f516c @ 001f516c

void FUN_001f516c(undefined8 param_1)

{
  uint uVar1;
  ulong uVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  undefined4 local_c0;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  ulong *puVar2;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = &local_b0;
  local_b0 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  FUN_001e6b90();
  if (((uVar1 & 1) == 0) || (local_b0 == 0)) {
    local_c0 = 1;
  }
  else {
    _memset(auStack_108,0,0x40);
    uVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_130 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_130 != 0) {
      lVar7 = *local_f8;
      local_138 = 0;
      do {
        do {
          if (*local_f8 - lVar7 != 0) {
            _objc_enumerationMutation(*local_f8 - lVar7,uVar3);
          }
          uVar8 = *(ulong *)(local_100 + local_138 * 8);
          pcVar4 = &cf_MMEmoticonView;
          local_c8 = uVar8;
          _NSClassFromString();
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,pcVar4);
          uVar6 = local_c8;
          if ((uVar8 & 1) == 0) {
            puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
            if ((uVar6 & 1) != 0) {
              uVar6 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_layer_026ca788);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(0);
              (*(code *)PTR__objc_release_02578630)(uVar6);
              puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
              _objc_retainAutoreleasedReturnValue();
              _objc_retainAutorelease();
              (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_CGColor_026ca470);
              uVar6 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_layer_026ca788);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(uVar6);
              (*(code *)PTR__objc_release_02578630)(puVar5);
              FUN_001f516c(local_c8);
            }
          }
          local_138 = local_138 + 1;
        } while (local_138 < local_130);
        local_130 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10
                  );
        local_138 = 0;
      } while (local_130 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_c0 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

