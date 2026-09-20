// FUN_0170e9fc @ 0170e9fc

void FUN_0170e9fc(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong local_310;
  ulong local_308;
  undefined *local_2e0;
  long local_2c0;
  undefined1 auStack_2b0 [48];
  undefined1 auStack_280 [48];
  undefined1 auStack_250 [48];
  undefined1 auStack_220 [48];
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  undefined8 local_190;
  byte local_181;
  undefined *local_180;
  byte local_171;
  undefined *local_170;
  undefined *local_168;
  undefined1 auStack_160 [48];
  undefined1 auStack_130 [48];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  byte local_d1;
  long local_d0;
  byte local_c1;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c1 = 0;
  local_d1 = 0;
  local_2c0 = param_1;
  local_b8 = param_1;
  local_b0 = param_1;
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    FUN_0170cb4c();
    _objc_retainAutoreleasedReturnValue();
    local_d1 = 1;
    local_d0 = local_2c0;
  }
  else {
    FUN_0170f16c();
    _objc_retainAutoreleasedReturnValue();
    local_c1 = 1;
    local_c0 = local_2c0;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setBackgroundColor__026ca888,local_2c0);
  if ((local_d1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d0);
  }
  if ((local_c1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c0);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  FUN_0170e490();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_e8 = uVar5;
  uStack_e0 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_knob_026b3808);
  _objc_retainAutoreleasedReturnValue();
  uStack_f8 = uStack_e0;
  local_100 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,uStack_e0);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    _CGAffineTransformMakeTranslation(auStack_130,*(undefined8 *)(param_1 + 0x38),0);
  }
  else {
    _memcpy(auStack_130,PTR__CGAffineTransformIdentity_025782d8,0x30);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_moonView_026b38d8);
  _objc_retainAutoreleasedReturnValue();
  _memcpy(auStack_160,auStack_130,0x30);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setTransform__026caad0,auStack_160);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  local_171 = 0;
  local_181 = 0;
  local_2e0 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,DAT_02323c88,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_181 = 1;
    local_180 = local_2e0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fde1e1e1e1e1e1e,DAT_02323da8,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_171 = 1;
    local_170 = local_2e0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_168 = local_2e0;
  if ((local_181 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_180);
  }
  if ((local_171 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_170);
  }
  _memset(auStack_1d0,0,0x40);
  uVar3 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_haloViews_026b3908);
  _objc_retainAutoreleasedReturnValue();
  local_308 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_308 != 0) {
    lVar4 = *local_1c0;
    local_310 = 0;
    do {
      do {
        if (*local_1c0 - lVar4 != 0) {
          _objc_enumerationMutation(*local_1c0 - lVar4,uVar3);
        }
        local_190 = *(undefined8 *)(local_1c8 + local_310 * 8);
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        uVar5 = *(undefined8 *)(param_1 + 0x30);
        FUN_0170e490();
        local_1f0 = uVar2;
        uStack_1e8 = uVar5;
        local_1e0 = uVar2;
        uStack_1d8 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,uVar5,local_190,PTR_s_setCenter__026ca8c0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_190,PTR_s_setBackgroundColor__026ca888,local_168);
        local_310 = local_310 + 1;
      } while (local_310 < local_308);
      local_308 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_a8,0x10);
      local_310 = 0;
    } while (local_308 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    _memcpy(auStack_220,PTR__CGAffineTransformIdentity_025782d8,0x30);
  }
  else {
    _CGAffineTransformMakeTranslation(auStack_220,0,*(undefined8 *)(param_1 + 0x40));
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_cloudView_026b38b0);
  _objc_retainAutoreleasedReturnValue();
  _memcpy(auStack_250,auStack_220,0x30);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setTransform__026caad0,auStack_250);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  bVar1 = *(byte *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_cloudView_026b38b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)((double)((bVar1 & 1) == 0));
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    _CGAffineTransformMakeTranslation(auStack_280,0,-*(double *)(param_1 + 0x40));
  }
  else {
    _memcpy(auStack_280,PTR__CGAffineTransformIdentity_025782d8,0x30);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_starView_026b38e8);
  _objc_retainAutoreleasedReturnValue();
  _memcpy(auStack_2b0,auStack_280,0x30);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setTransform__026caad0,auStack_2b0);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  bVar1 = *(byte *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_starView_026b38e8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)((double)((bVar1 & 1) != 0));
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _objc_storeStrong(&local_168,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

