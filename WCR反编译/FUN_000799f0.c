// FUN_000799f0 @ 000799f0

void FUN_000799f0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  float fVar6;
  undefined *local_b0;
  byte local_a1;
  ulong local_a0;
  byte local_91;
  ulong local_90;
  ulong local_88;
  undefined *local_80;
  double local_78;
  double local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50 [3];
  uint local_34;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  if (local_28 == 0) {
    local_34 = 1;
  }
  else if ((local_30 == 0) ||
          (uVar2 = local_30,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_isEqualToString__0269ccc8,&cf_my_profile), (uVar2 & 1) == 0)) {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    _objc_setAssociatedObject(local_28,DAT_026df788,0,1);
    local_34 = 1;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_50[0] = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_profileLayoutEnabled_0269e0f8);
    if ((((ulong)puVar3 & 1) == 0) ||
       (puVar4 = local_50[0],
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_50[0],PTR_s_profileAvatarCornerOverrideEnabl_0269e100),
       ((ulong)puVar4 & 1) == 0)) {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      _objc_setAssociatedObject(local_28,DAT_026df788,0,1);
      local_34 = 1;
    }
    else {
      puVar4 = local_50[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_profileAvatarRotationMode_0269e118);
      local_58 = puVar4;
      if ((long)puVar4 < 1) {
        uVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar2);
        _objc_setAssociatedObject(local_28,DAT_026df788,0,1);
        local_34 = 1;
      }
      else {
        puVar4 = local_50[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_profileAvatarRotationSpeed_0269e120)
        ;
        local_60 = puVar4;
        if ((long)puVar4 < -10) {
          local_60 = (undefined1 *)0xfffffffffffffff6;
        }
        if (10 < (long)local_60) {
          local_60 = (undefined1 *)((long)&MACH_HEADER.cpusubtype + 2);
        }
        local_68 = 0x4020000000000000;
        local_70 = 8.0 - DAT_02323cb8 * (double)(long)local_60;
        if (local_70 < 1.5) {
          local_70 = 1.5;
        }
        if (20.0 < local_70) {
          local_70 = 20.0;
        }
        fVar6 = -1.0;
        if (local_58 != (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
          fVar6 = 1.0;
        }
        local_78 = (double)fVar6;
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf__ld__ld___2f);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_28;
        local_80 = puVar3;
        _objc_getAssociatedObject(local_28,DAT_026df788);
        _objc_retainAutoreleasedReturnValue();
        local_91 = 0;
        local_a1 = 0;
        local_88 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isEqualToString__0269ccc8,local_80);
        bVar1 = false;
        if ((uVar2 & 1) != 0) {
          uVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          local_91 = 1;
          local_90 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_a1 = 1;
          bVar1 = uVar2 != 0;
          local_a0 = uVar2;
        }
        if ((local_a1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_a0);
        }
        if ((local_91 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_90);
        }
        if (!bVar1) {
          uVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar2);
          puVar3 = PTR__OBJC_CLASS___CABasicAnimation_026ce1e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___CABasicAnimation_026ce1e0,
                     PTR_s_animationWithKeyPath__026ca510,&cf_transform_rotation_z);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_b0 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setFromValue__026ca968);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78 * DAT_02323cb0 * 2.0,PTR__OBJC_CLASS___NSNumber_026ce038,
                     PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setToValue__026caac8);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_msgSend_02578628)(local_70,local_b0,PTR_s_setDuration__026ca920);
          (*(code *)PTR__objc_msgSend_02578628)(0x7f800000,local_b0,PTR_s_setRepeatCount__026caa18);
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setRemovedOnCompletion__026caa10,0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_setFillMode__026ca950,
                     *(undefined8 *)PTR__kCAFillModeForwards_025783d0);
          puVar3 = PTR__OBJC_CLASS___CAMediaTimingFunction_026ce1e8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___CAMediaTimingFunction_026ce1e8,
                     PTR_s_functionWithName__026ca648,
                     *(undefined8 *)PTR__kCAMediaTimingFunctionLinear_02578438);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setTimingFunction__026caaa0);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          uVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar2);
          _objc_setAssociatedObject(local_28,DAT_026df788,local_80,3);
          _objc_storeStrong(&local_b0,0);
        }
        local_34 = (uint)bVar1;
        _objc_storeStrong(&local_88);
        _objc_storeStrong(&local_80,0);
      }
    }
    _objc_storeStrong(local_50,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

