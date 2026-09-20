// FUN_008708e0 @ 008708e0

void FUN_008708e0(double param_1,double param_2,double param_3,double param_4,ulong param_5,
                 undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  ulong local_160;
  ulong local_158;
  ulong local_118 [3];
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  ulong local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_6;
  local_b0 = param_5;
  (*DAT_028cd810)(param_5,param_6);
  if ((((DAT_028cd86e & 1) != 0) && (uVar2 = local_b0, FUN_0088db80(), (uVar2 & 1) != 0)) &&
     (uVar2 = local_b0, FUN_0088e33c(), (uVar2 & 1) != 0)) {
    _memset(auStack_100,0,0x40);
    uVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_158 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_158 != 0) {
      lVar4 = *local_f0;
      local_160 = 0;
      do {
        do {
          dVar6 = param_1;
          dVar7 = param_2;
          if (*local_f0 - lVar4 != 0) {
            _objc_enumerationMutation(*local_f0 - lVar4,uVar2);
            dVar6 = param_1;
            dVar7 = param_2;
          }
          uVar5 = *(ulong *)(local_f8 + local_160 * 8);
          puVar3 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
          local_c0 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
          uVar1 = local_c0;
          param_1 = dVar6;
          param_2 = dVar7;
          if ((uVar5 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_118[0] = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_frame_026ca640);
            param_2 = 10.0;
            param_1 = param_3;
            if ((param_3 <= 10.0) && (param_2 = 10.0, param_1 = param_4, param_4 <= 10.0)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_118[0],PTR_s_setHidden__026ca970,1);
              param_1 = param_4;
            }
            _objc_storeStrong(local_118,0);
            param_3 = dVar7;
            param_4 = dVar6;
          }
          local_160 = local_160 + 1;
        } while (local_160 < local_158);
        local_158 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10
                  );
        local_160 = 0;
      } while (local_158 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

