// FUN_001473c8 @ 001473c8

void FUN_001473c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined *local_158;
  undefined *local_140;
  ulong *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulong *local_d0;
  ulong *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong *local_70;
  ulong local_68;
  ulong local_60;
  ulong *local_58;
  ulong *local_50;
  byte local_45;
  ulong *local_38;
  uint local_2c;
  ulong local_28;
  
  puVar1 = &local_28;
  local_28 = 0;
  _objc_storeStrong(puVar1,param_5);
  if ((local_28 == 0) || ((DAT_028c87b8 & 1) == 0)) {
    local_2c = 1;
    goto LAB_00147990;
  }
  FUN_00147e08();
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  if (puVar1 == (ulong *)0x0) {
    local_2c = 1;
  }
  else {
    FUN_00147f7c();
    local_45 = (byte)puVar1;
    if (((ulong)puVar1 & 1) == 0) {
      local_140 = PTR_s_inputFullZSBG_0269f3e8;
    }
    else {
      local_140 = PTR_s_inputFullZSBG2_0269f3e0;
    }
    puVar1 = local_38;
    FUN_00148168(local_38,local_140);
    _objc_retainAutoreleasedReturnValue();
    if ((local_45 & 1) == 0) {
      local_158 = PTR_s_inputFullBG_0269f3f8;
    }
    else {
      local_158 = PTR_s_inputFullBG2_0269f3f0;
    }
    puVar2 = local_38;
    local_50 = puVar1;
    FUN_00148168(local_38,local_158);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_28;
    local_58 = puVar2;
    FUN_00148324();
    _objc_retainAutoreleasedReturnValue();
    local_60 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_image_026ca678);
    _objc_retainAutoreleasedReturnValue();
    local_68 = uVar3;
    if (local_60 == 0) {
      local_2c = 1;
    }
    else {
      FUN_0014856c(uVar3,local_58,local_50);
      if ((uVar3 & 1) == 0) {
        local_2c = 1;
      }
      else {
        if (local_50 != (ulong *)0x0) {
          puVar1 = local_50;
          FUN_001487f8();
          _objc_retainAutoreleasedReturnValue();
          local_70 = puVar1;
          FUN_001489f4(local_45 & 1);
          puVar1 = local_70;
          local_c0 = param_1;
          uStack_b8 = param_2;
          local_b0 = param_3;
          uStack_a8 = param_4;
          local_90 = param_1;
          uStack_88 = param_2;
          local_80 = param_3;
          uStack_78 = param_4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_70,PTR_s_resizableImageWithCapInsets_resi_0269f400,1);
          _objc_retainAutoreleasedReturnValue();
          local_98 = puVar1;
          if (puVar1 != (ulong *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setImage__026ca978,puVar1);
          }
          local_2c = (uint)(puVar1 != (ulong *)0x0);
          _objc_storeStrong(&local_98);
          _objc_storeStrong(&local_70,0);
          if (local_2c != 0) goto LAB_00147948;
        }
        puVar1 = local_38;
        FUN_00148168(local_38,PTR_s_inputZSBG_0269f408);
        _objc_retainAutoreleasedReturnValue();
        local_c8 = puVar1;
        if (puVar1 == (ulong *)0x0) {
          local_2c = 1;
        }
        else {
          FUN_001487f8();
          _objc_retainAutoreleasedReturnValue();
          local_d0 = puVar1;
          FUN_00148a94();
          puVar1 = local_d0;
          local_f0 = param_1;
          uStack_e8 = param_2;
          local_e0 = param_3;
          uStack_d8 = param_4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (param_1,param_2,param_3,param_4,local_d0,
                     PTR_s_resizableImageWithCapInsets_resi_0269f400,1);
          _objc_retainAutoreleasedReturnValue();
          local_f8 = puVar1;
          if (puVar1 != (ulong *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setImage__026ca978,puVar1);
          }
          _objc_storeStrong(&local_f8);
          _objc_storeStrong(&local_d0,0);
          local_2c = 0;
        }
        _objc_storeStrong(&local_c8,0);
      }
    }
LAB_00147948:
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38,0);
LAB_00147990:
  _objc_storeStrong(&local_28,0);
  return;
}

