// FUN_002e28b0 @ 002e28b0

void FUN_002e28b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *local_158;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  undefined *local_98;
  long *local_90;
  undefined8 local_88;
  undefined *local_80;
  long local_78;
  undefined *local_70;
  undefined4 local_68;
  undefined *local_58;
  undefined8 local_50;
  ulong local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined *local_28;
  undefined **ppuVar2;
  
  local_48 = 0;
  _objc_storeStrong(&local_48,param_1);
  ppuVar2 = &local_58;
  local_58 = (undefined *)0x0;
  local_50 = param_2;
  _objc_storeStrong(ppuVar2,param_3);
  uVar1 = (uint)ppuVar2;
  FUN_002e4780();
  if ((((uVar1 & 1) == 0) || (uVar3 = local_48, FUN_002e61ec(), (uVar3 & 1) == 0)) ||
     (puVar4 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0),
     puVar4 == (undefined *)0x0)) {
    (*DAT_028c9908)(local_48,local_50,local_58);
    local_68 = 1;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSMutableAttributedString_026ce3e8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_initWithAttributedString__026a1d80,local_58);
    local_78 = 0;
    uVar7 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
    puVar6 = puVar5;
    local_70 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_length_0269cca0);
    puVar4 = local_70;
    local_38 = 0;
    local_30 = 0;
    local_88 = 0;
    local_b8 = PTR___NSConcreteGlobalBlock_02578658;
    local_b0 = 0xd0800000;
    local_ac = 0;
    local_a8 = FUN_002e6990;
    local_a0 = &DAT_0257bbe8;
    local_80 = puVar6;
    local_40 = puVar6;
    local_28 = puVar6;
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = puVar4;
    local_90 = &local_78;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_enumerateAttribute_inRange_optio_026a1d90,uVar7,local_88,local_80,0,
               &local_b8);
    if (local_78 < 1) {
      local_158 = local_58;
    }
    else {
      local_158 = local_70;
    }
    (*DAT_028c9908)(local_48,local_50,local_158);
    if (0 < local_78) {
      FUN_002e6764(local_78,local_48);
    }
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_70,0);
    local_68 = 0;
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_48,0);
  return;
}

