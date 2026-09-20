// FUN_005e20e8 @ 005e20e8

void FUN_005e20e8(undefined8 param_1,undefined1 *param_2,ulong *param_3)

{
  bool bVar1;
  ulong *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  undefined *local_b0;
  ulong local_a8;
  undefined *local_a0;
  ulong local_98;
  undefined *local_90;
  ulong local_88;
  undefined *local_80;
  ulong local_78;
  undefined *local_70;
  ulong local_68;
  ulong local_60 [3];
  uint local_44;
  ulong *local_40;
  undefined1 *local_38;
  ulong local_30;
  ulong local_28;
  
  puVar2 = &local_30;
  local_30 = 0;
  _objc_storeStrong(puVar2,param_1);
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (ulong *)0x0) {
    *param_3 = 0;
  }
  local_40 = param_3;
  local_38 = param_2;
  FUN_005e15b0();
  uVar4 = local_30;
  if (((ulong)puVar2 & 1) == 0) {
    local_28 = 0;
    local_44 = 1;
    goto LAB_005e2a10;
  }
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((uVar4 & 1) == 0) ||
     (uVar4 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     uVar4 == 0)) {
    local_28 = 0;
    local_44 = 1;
    goto LAB_005e2a10;
  }
  uVar4 = local_30;
  FUN_005e2a48();
  _objc_retainAutoreleasedReturnValue();
  local_60[0] = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
  if (uVar4 == 0) {
    _objc_storeStrong(local_60,local_30);
  }
  uVar4 = local_60[0];
  if (local_40 != (ulong *)0x0) {
    _objc_retainAutorelease();
    *local_40 = uVar4;
  }
  if (((DAT_028cb836 & 1) == 0) ||
     (uVar4 = local_60[0], (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_length_0269cca0),
     uVar4 == 0)) {
LAB_005e2580:
    uVar4 = local_60[0];
    FUN_005e3310(local_60[0],"service",DAT_028cb830 & 1,&cf_gR,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = uVar4;
    if (uVar4 != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar4;
    }
    local_44 = (uint)(uVar4 != 0);
    _objc_storeStrong(&local_c0,0);
    if (local_44 == 0) {
      uVar4 = local_60[0];
      FUN_005e3310(local_60[0],"favorite",DAT_028cb831 & 1,&cf_6e,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = uVar4;
      if (uVar4 != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = uVar4;
      }
      local_44 = (uint)(uVar4 != 0);
      _objc_storeStrong(&local_c8,0);
      if (local_44 == 0) {
        uVar4 = local_60[0];
        FUN_005e3310(local_60[0],"moments",DAT_028cb832 & 1,&cf_gSW,local_38);
        _objc_retainAutoreleasedReturnValue();
        local_d0 = uVar4;
        if (uVar4 != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = uVar4;
        }
        local_44 = (uint)(uVar4 != 0);
        _objc_storeStrong(&local_d0,0);
        if (local_44 == 0) {
          uVar4 = local_60[0];
          FUN_005e3310(local_60[0],"channels",DAT_028cb833 & 1,&cf_S,local_38);
          _objc_retainAutoreleasedReturnValue();
          local_d8 = uVar4;
          if (uVar4 != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = uVar4;
          }
          local_44 = (uint)(uVar4 != 0);
          _objc_storeStrong(&local_d8,0);
          if (local_44 == 0) {
            uVar4 = local_60[0];
            FUN_005e3310(local_60[0],"wallet",DAT_028cb834 & 1,&cf_aSS,local_38);
            _objc_retainAutoreleasedReturnValue();
            local_e0 = uVar4;
            if (uVar4 != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_28 = uVar4;
            }
            local_44 = (uint)(uVar4 != 0);
            _objc_storeStrong(&local_e0,0);
            if (local_44 == 0) {
              uVar4 = local_60[0];
              FUN_005e3310(local_60[0],"emoticon",DAT_028cb835 & 1,&cf_h_,local_38);
              _objc_retainAutoreleasedReturnValue();
              local_e8 = uVar4;
              if (uVar4 != 0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_28 = uVar4;
              }
              local_44 = (uint)(uVar4 != 0);
              _objc_storeStrong(&local_e8,0);
              if (local_44 == 0) {
                uVar4 = local_60[0];
                FUN_005e3310(local_60[0],"plugin",DAT_028cb836 & 1,&cf_cN,local_38);
                _objc_retainAutoreleasedReturnValue();
                local_f0 = uVar4;
                if (uVar4 != 0) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_28 = uVar4;
                }
                local_44 = (uint)(uVar4 != 0);
                _objc_storeStrong(&local_f0,0);
                if (local_44 == 0) {
                  local_28 = 0;
                  local_44 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    uVar5 = local_30;
    FUN_005e309c(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    FUN_005e2dbc();
    _objc_retainAutoreleasedReturnValue();
    local_68 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar5);
    uVar4 = local_68;
    puVar3 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_rangeOfString__0269d838,&cf_cN);
    bVar1 = false;
    local_78 = uVar4;
    local_70 = puVar3;
    if (uVar4 != 0x7fffffffffffffff) {
      uVar4 = local_68;
      puVar3 = PTR_s_rangeOfString__0269d838;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_rangeOfString__0269d838,&cf_Mn_);
      bVar1 = false;
      local_88 = uVar4;
      local_80 = puVar3;
      if (uVar4 != 0x7fffffffffffffff) {
        uVar4 = local_68;
        puVar3 = PTR_s_rangeOfString__0269d838;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_rangeOfString__0269d838,&cf_YN);
        bVar1 = true;
        local_98 = uVar4;
        local_90 = puVar3;
        if (uVar4 == 0x7fffffffffffffff) {
          uVar4 = local_68;
          puVar3 = PTR_s_rangeOfString__0269d838;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_rangeOfString__0269d838,&cf_b_Y);
          bVar1 = true;
          local_a8 = uVar4;
          local_a0 = puVar3;
          if (uVar4 == 0x7fffffffffffffff) {
            uVar4 = local_68;
            puVar3 = PTR_s_rangeOfString__0269d838;
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_rangeOfString__0269d838,&cf_nzz);
            bVar1 = uVar4 != 0x7fffffffffffffff;
            local_b8 = uVar4;
            local_b0 = puVar3;
          }
        }
      }
    }
    if (bVar1) {
      local_28 = 0;
    }
    local_44 = (uint)bVar1;
    _objc_storeStrong(&local_68,0);
    if (local_44 == 0) goto LAB_005e2580;
  }
  _objc_storeStrong(local_60,0);
LAB_005e2a10:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

