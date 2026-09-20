// FUN_001c8dd0 @ 001c8dd0

void FUN_001c8dd0(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong local_140;
  ulong local_138;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  ulong local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_3;
  local_b0 = param_2;
  (*DAT_028c8dd8)(param_2,param_3);
  _memset(auStack_100,0,0x40);
  uVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
  _objc_retainAutoreleasedReturnValue();
  local_138 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_138 != 0) {
    lVar4 = *local_f0;
    local_140 = 0;
    do {
      do {
        if (*local_f0 - lVar4 != 0) {
          _objc_enumerationMutation(*local_f0 - lVar4,uVar2);
        }
        uVar5 = *(ulong *)(local_f8 + local_140 * 8);
        puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
        local_c0 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
        uVar1 = (uint)uVar5;
        if (((uVar5 & 1) != 0) && (FUN_001cf94c(), (uVar1 & 1) != 0)) {
          FUN_001dac54();
          FUN_001d5a74(local_c0);
          uVar5 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(param_1);
          (*(code *)PTR__objc_release_02578630)(uVar5);
          uVar5 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar5);
          uVar5 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          param_1 = 0;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar5);
          puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
          uVar5 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar5);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        local_140 = local_140 + 1;
      } while (local_140 < local_138);
      local_138 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
      local_140 = 0;
    } while (local_138 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

