// FUN_002b3234 @ 002b3234

void FUN_002b3234(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double local_220;
  double local_218;
  double local_210;
  undefined *local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  code *local_1b8;
  undefined *local_1b0;
  ulong local_1a8;
  undefined1 auStack_1a0 [48];
  undefined1 auStack_170 [48];
  undefined1 auStack_140 [48];
  undefined1 auStack_110 [48];
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  double local_a0;
  double local_98;
  double local_68;
  long local_60;
  undefined4 local_58;
  long local_48;
  ulong local_40;
  undefined8 local_38;
  ulong local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_48 = param_1;
  local_40 = param_4;
  local_38 = param_3;
  if (((local_30 == 0) ||
      (uVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isHidden_026ca768),
      (uVar2 & 1) != 0)) || (uVar2 = local_40, FUN_002ae800(), (uVar2 & 1) != 0)) {
    local_58 = 1;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
    FUN_002b3738(lVar3,local_40);
    local_60 = lVar3;
    if (lVar3 == 0x7fffffffffffffff) {
      local_58 = 1;
    }
    else {
      dVar4 = *(double *)(param_1 + 0x28);
      _CGRectGetMinX(dVar4,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                     *(undefined8 *)(param_1 + 0x40));
      dVar5 = (double)NEON_ucvtf(local_60);
      local_68 = dVar4 + dVar5 * *(double *)(param_1 + 0x48) + *(double *)(param_1 + 0x48) * 0.5;
      local_98 = ABS(*(double *)(param_1 + 0x50) - local_68);
      if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
        local_218 = 0.0;
      }
      else {
        local_a8 = 0x3ff0000000000000;
        local_b0 = *(double *)(param_1 + 0x48) * DAT_02323f30;
        local_210 = local_b0;
        if (local_b0 <= 1.0) {
          local_210 = 1.0;
        }
        local_b8 = local_210;
        local_218 = 1.0 - local_98 / local_210;
        FUN_002adba4(local_218,0);
      }
      local_a0 = local_218;
      if (*(ulong *)(param_1 + 0x60) == local_40) {
        local_c0 = local_218;
        local_c8 = DAT_02323f28;
        if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
          local_c8 = 0.0;
        }
        local_220 = local_c8;
        if (local_c8 <= local_218) {
          local_220 = local_218;
        }
        local_d0 = local_220;
        local_a0 = local_220;
      }
      local_d8 = DAT_02323f20 * local_a0 + 1.0;
      local_e0 = local_a0 * -2.0;
      if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
        _memcpy(auStack_110,PTR__CGAffineTransformIdentity_025782d8,0x30);
      }
      else {
        _CGAffineTransformMakeScale(local_d8,local_d8);
        _CGAffineTransformTranslate(auStack_110,0,local_e0,auStack_140);
      }
      uVar2 = local_30;
      puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
      if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
        local_1c8 = PTR___NSConcreteStackBlock_02578660;
        local_1c0 = 0xc2000000;
        local_1bc = 0;
        local_1b8 = FUN_002b3814;
        local_1b0 = &DAT_02578c20;
        (*(code *)PTR__objc_retain_02578638)();
        local_1a8 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_02323cc0,0,puVar1,PTR_s_animateWithDuration_delay_option_026ca4f0,
                   &DAT_00020006,&local_1c8,0);
        _objc_storeStrong(&local_1a8,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_begin_026ca520);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_setDisableActions__026ca918,1);
        _memcpy(auStack_170,auStack_110,0x30);
        uVar2 = local_30;
        _memcpy(auStack_1a0,auStack_170,0x30);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setTransform__026caad0,auStack_1a0);
        (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,local_30,PTR_s_setAlpha__026ca860);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_commit_026ca580);
      }
      local_58 = 0;
    }
  }
  _objc_storeStrong(&local_30,0);
  return;
}

