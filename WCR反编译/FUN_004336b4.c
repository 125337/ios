// FUN_004336b4 @ 004336b4

void FUN_004336b4(double param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  double local_118;
  double local_110;
  undefined *local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  undefined8 local_90;
  double local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  long *local_60;
  long local_58;
  undefined4 local_50;
  ulong local_40;
  undefined8 local_38;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  uVar2 = local_30;
  local_38 = param_3;
  (*DAT_028ca878)(local_30,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  local_40 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  uVar1 = local_40;
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar1;
    local_50 = 1;
  }
  else {
    local_60 = &local_58;
    local_58 = 0;
    local_80 = PTR___NSConcreteGlobalBlock_02578658;
    local_78 = 0xd0800000;
    local_74 = 0;
    local_70 = FUN_00433e14;
    local_68 = &DAT_0257bb68;
    _dispatch_sync(DAT_028ca828,&local_80);
    lVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    if (lVar4 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_doubleValue_026ca608);
      local_a8 = param_1 + 1.0;
      local_90 = 0x4026000000000000;
      local_a0 = DAT_02324170;
      local_110 = local_a8;
      if (DAT_02324170 < local_a8) {
        local_110 = DAT_02324170;
      }
      local_b0 = local_110;
      local_98 = local_110;
      if (local_110 <= 11.0) {
        local_118 = 11.0;
      }
      else {
        local_118 = local_110;
      }
      local_b8 = local_118;
      local_88 = local_118;
      puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_118,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
                 PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
      _objc_retainAutoreleasedReturnValue();
      local_c0 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        puVar5 = PTR__OBJC_CLASS___UIFont_026cdfc0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_c0;
        local_c0 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setFont__026ca958,local_c0);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTextAlignment__026caa90,1);
      _objc_storeStrong(&local_c0,0);
    }
    uVar1 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar1;
    local_50 = 1;
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

