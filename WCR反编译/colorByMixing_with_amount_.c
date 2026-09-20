// colorByMixing:with:amount: @ 00f8be5c

/* Function Stack Size: 0x28 bytes */

ID WCRefineGradientPalette::colorByMixing_with_amount_
             (ID param_1,SEL param_2,ID param_3,ID param_4,double param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  double local_148;
  double local_140;
  undefined *local_128;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8 [4];
  undefined8 local_d8;
  undefined1 local_d0 [32];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined4 local_74;
  double local_70;
  undefined4 local_64;
  undefined4 local_60;
  byte local_59;
  undefined *local_58;
  double local_50;
  undefined *local_48;
  undefined *local_40;
  SEL local_38;
  ID local_30;
  undefined *local_28;
  
  local_40 = (undefined *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = (undefined *)0x0;
  _objc_storeStrong(&local_48,param_4);
  puVar3 = local_40;
  local_50 = param_5;
  if (local_40 == (undefined *)0x0) {
    local_59 = 0;
    bVar1 = local_48 == (undefined *)0x0;
    if (bVar1) {
      local_128 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_128;
    }
    else {
      local_128 = local_48;
    }
    local_59 = bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_128;
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
  }
  else if (local_48 == (undefined *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar3;
  }
  else {
    local_64 = 0;
    local_74 = 1;
    local_140 = param_5;
    if (1.0 < param_5) {
      local_140 = 1.0;
    }
    local_88 = local_140;
    local_70 = local_140;
    if (local_140 <= 0.0) {
      local_148 = 0.0;
    }
    else {
      local_148 = local_140;
    }
    local_90 = local_148;
    local_50 = local_148;
    puVar2 = local_40;
    local_80 = param_5;
    FUN_00f8c1b8(local_40,&local_b0);
    puVar3 = local_48;
    if (((ulong)puVar2 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar3;
    }
    else {
      puVar2 = local_48;
      FUN_00f8c1b8(local_48,local_d0);
      puVar3 = local_40;
      if (((ulong)puVar2 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = puVar3;
      }
      else {
        FUN_00f8c2b4();
        local_f8[0] = 0;
        local_100 = 0;
        local_108 = 0;
        local_d8 = local_98;
        FUN_00f8c428(local_b0,local_a8,local_a0,local_98,local_f8,&local_100,&local_108);
        puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f8[0],local_100,local_108,local_d8,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithRed_green_blue_alpha__0269cc48);
        _objc_retainAutoreleasedReturnValue();
        local_28 = puVar3;
      }
    }
  }
  local_60 = 1;
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

