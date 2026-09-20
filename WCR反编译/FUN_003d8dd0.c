// FUN_003d8dd0 @ 003d8dd0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_003d8dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                 undefined8 param_5,byte param_6,undefined8 param_7)

{
  undefined8 uVar1;
  byte bVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *local_1f8;
  undefined *local_1e0;
  undefined *local_1b8;
  undefined *local_1a0;
  uint local_184;
  ulong local_178;
  undefined *local_170;
  bool local_d9;
  undefined *local_d8;
  bool local_c9;
  undefined *local_c8;
  bool local_b9;
  ulong local_b8;
  ulong local_b0;
  byte local_a1;
  undefined *local_a0;
  byte local_91;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined4 local_74;
  undefined *local_70;
  undefined *local_68;
  undefined8 local_60;
  byte local_51;
  ulong local_50;
  byte local_41;
  ulong local_40;
  long local_38;
  undefined *local_30;
  undefined *local_28;
  
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  local_50 = 0;
  local_41 = param_4;
  _objc_storeStrong(&local_50,param_5);
  puVar3 = local_30;
  local_60 = param_7;
  local_51 = param_6;
  FUN_0036bd00();
  _objc_retainAutoreleasedReturnValue();
  local_68 = puVar3;
  if ((puVar3 == (undefined *)0x0) && (uVar4 = local_40, FUN_00364dd0(), (uVar4 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_layoutIfNeeded_026ca790);
    puVar5 = local_30;
    FUN_0036bd00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_68;
    local_68 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  puVar5 = local_68;
  FUN_003c9b84();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_68;
  local_70 = puVar5;
  if (puVar5 == (undefined *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar3;
    local_74 = 1;
  }
  else {
    lVar6 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_groupId_0269ea88);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    FUN_00355e04();
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(puVar5,&DAT_028ca295,lVar7,3);
    (*(code *)PTR__objc_release_02578630)(lVar7);
    (*(code *)PTR__objc_release_02578630)(lVar6);
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    lVar6 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_groupId_0269ea88);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf_____p__d__ld);
    _objc_retainAutoreleasedReturnValue();
    local_80 = puVar3;
    (*(code *)PTR__objc_release_02578630)(lVar6);
    puVar3 = local_70;
    _objc_setAssociatedObject(local_70,&DAT_028ca320,local_80,3);
    FUN_003dc4ec();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_88 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_91 = 0;
    local_a1 = 0;
    if ((local_51 & 1) == 0) {
      local_170 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      local_a1 = 1;
      local_a0 = local_170;
    }
    else {
      local_170 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323cc0,local_88,PTR_s_colorWithAlphaComponent__026ca578);
      _objc_retainAutoreleasedReturnValue();
      local_91 = 1;
      local_90 = local_170;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setBackgroundColor__026ca888,local_170);
    if ((local_a1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a0);
    }
    if ((local_91 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    local_b9 = (local_51 & 1) == 0;
    if (local_b9) {
      local_178 = local_50;
    }
    else {
      local_178 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_imageWithRenderingMode__026ca690,2);
      _objc_retainAutoreleasedReturnValue();
      local_b8 = local_178;
    }
    local_b9 = !local_b9;
    uVar4 = local_178;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = local_178;
    if (local_b9) {
      (*(code *)PTR__objc_release_02578630)();
      uVar4 = local_b8;
    }
    FUN_003c9db4();
    local_184 = 0;
    if ((uVar4 & 1) != 0) {
      lVar6 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_nativePassthrough_026a2e00);
      local_184 = (uint)lVar6 ^ 1;
    }
    lVar6 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_nativePassthrough_026a2e00);
    puVar3 = local_70;
    bVar2 = (byte)lVar6 ^ 1;
    local_c9 = (local_184 & 1) == 0;
    if (local_c9) {
      local_1a0 = (undefined *)0x0;
    }
    else {
      local_1a0 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = local_1a0;
    }
    local_c9 = !local_c9;
    _objc_setAssociatedObject(puVar3,&DAT_028ca297,local_1a0,1);
    if (local_c9) {
      (*(code *)PTR__objc_release_02578630)(local_c8);
    }
    puVar3 = local_70;
    local_d9 = (bVar2 & 1) == 0;
    if (local_d9) {
      local_1b8 = (undefined *)0x0;
    }
    else {
      local_1b8 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = local_1b8;
    }
    local_d9 = !local_d9;
    _objc_setAssociatedObject(puVar3,&DAT_028ca29a,local_1b8,1);
    if (local_d9) {
      (*(code *)PTR__objc_release_02578630)(local_d8);
    }
    if ((local_184 & 1) == 0) {
      FUN_003ca2ec(local_68);
      FUN_003ca3d4(local_70,0);
      if ((local_41 & 1) == 0) {
        if ((local_51 & 1) == 0) {
          local_1f8 = (undefined *)0x0;
        }
        else {
          local_1f8 = local_88;
        }
        uVar1 = 4;
        if ((local_51 & 1) == 0) {
          uVar1 = 2;
        }
        FUN_003dc9b4(local_70,local_b0,local_1f8,uVar1);
      }
      else {
        if ((local_51 & 1) == 0) {
          local_1e0 = (undefined *)0x0;
        }
        else {
          local_1e0 = local_88;
        }
        uVar1 = 4;
        if ((local_51 & 1) == 0) {
          uVar1 = 2;
        }
        FUN_003dc7d0(local_70,local_b0,local_1e0,uVar1);
      }
      if ((bVar2 & 1) == 0) {
        _objc_setAssociatedObject(local_70,&DAT_028ca29a,0,1);
      }
      else {
        FUN_003dcd84(local_70);
      }
      puVar3 = local_68;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar3;
    }
    else {
      FUN_003dc694(local_70,local_b0,0,1);
      FUN_003c9dc0(local_68,local_70);
      puVar3 = local_68;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar3;
    }
    local_74 = 1;
    _objc_storeStrong(&local_b0);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

