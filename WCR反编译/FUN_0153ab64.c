// FUN_0153ab64 @ 0153ab64

void FUN_0153ab64(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_1c8;
  undefined8 local_1b0;
  undefined8 local_198;
  undefined *local_150;
  undefined4 local_148;
  undefined4 local_144;
  code *local_140;
  undefined *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 local_108;
  long local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  long local_d8;
  undefined8 local_d0;
  byte local_c1;
  undefined8 local_c0;
  byte local_b1;
  undefined8 local_b0;
  byte local_91;
  undefined8 local_90;
  undefined8 *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_48 = &local_50;
  local_50 = 0;
  local_40 = 0x20000000;
  local_3c = 0x20;
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  local_30 = param_1;
  local_28 = param_1;
  FUN_0153b130();
  local_68 = &local_70;
  local_70 = 0;
  local_60 = 0x20000000;
  local_5c = 0x20;
  uVar7 = 0;
  local_58 = 0;
  local_88 = &local_90;
  local_90 = 0;
  local_80 = 0x20000000;
  local_7c = 0x20;
  local_78 = 0;
  local_91 = DAT_028e3990 & 1;
  DAT_028e3990 = 0;
  local_38 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_wcr_removeCardImmediately_026b0460);
  if ((local_91 & 1) == 0) {
    DAT_028e3988 = 0;
    _objc_storeWeak(&DAT_028e3908);
    _objc_storeWeak(&DAT_028e3910,0);
    _objc_storeStrong(&DAT_028e3918,0);
    _objc_storeWeak(&DAT_028e38e8,*(undefined8 *)(param_1 + 0x20));
    uVar4 = *(ulong *)(param_1 + 0x28);
    puVar1 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar4 & 1) == 0) {
      local_198 = 0;
    }
    else {
      local_198 = *(undefined8 *)(param_1 + 0x28);
    }
    _objc_storeWeak(&DAT_028e38f0,local_198);
    lVar2 = *(long *)(param_1 + 0x30);
    local_b1 = 0;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
    if (lVar2 == 0) {
      local_1b0 = 0;
    }
    else {
      local_1b0 = *(undefined8 *)(param_1 + 0x30);
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_copy_0269d150);
      local_b1 = 1;
      local_b0 = local_1b0;
    }
    _objc_storeStrong(&DAT_028e38f8,local_1b0);
    if ((local_b1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_b0);
    }
    lVar2 = *(long *)(param_1 + 0x38);
    local_c1 = 0;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
    if (lVar2 == 0) {
      local_1c8 = 0;
    }
    else {
      local_1c8 = *(undefined8 *)(param_1 + 0x38);
      (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_copy_0269d150);
      local_c1 = 1;
      local_c0 = local_1c8;
    }
    _objc_storeStrong(&DAT_028e3900,local_1c8);
    if ((local_c1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_c0);
    }
    FUN_01539224();
    local_d0 = uVar7;
    FUN_0153b168();
    uVar7 = local_d0;
    FUN_0153b130();
    local_68[3] = uVar7;
  }
  else {
    DAT_028e3988 = 1;
    _objc_storeWeak(&DAT_028e38e8);
    _objc_storeWeak(&DAT_028e38f0,0);
    _objc_storeStrong(&DAT_028e38f8,0);
    _objc_storeStrong(&DAT_028e3900,0);
    _objc_storeWeak(&DAT_028e38a8,0);
    DAT_028e3940 = 0;
    _objc_storeWeak(&DAT_028e38b0,0);
  }
  DAT_028e3998 = DAT_028e3998 + 1;
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  local_d8 = DAT_028e3998;
  FUN_0152eb20();
  _objc_retainAutoreleasedReturnValue();
  local_e0 = uVar6;
  FUN_01539224();
  uVar6 = local_e0;
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  local_150 = PTR___NSConcreteStackBlock_02578660;
  local_148 = 0xc2000000;
  local_144 = 0;
  local_140 = FUN_0153b714;
  local_138 = &DAT_02586620;
  local_120 = &local_90;
  local_100 = local_d8;
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  local_108 = uVar7;
  local_e8 = uVar7;
  (*(code *)PTR__objc_retain_02578638)();
  uVar7 = local_e0;
  local_130 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_128 = uVar7;
  local_f8 = *(undefined8 *)(param_1 + 0x48);
  local_118 = &local_50;
  local_110 = &local_70;
  local_f0 = *(undefined8 *)(param_1 + 0x50);
  FUN_0153b4fc(uVar5,uVar6,&local_150);
  _objc_storeStrong(&local_128);
  _objc_storeStrong(&local_130,0);
  _objc_storeStrong(&local_e0,0);
  __Block_object_dispose(&local_90,8);
  __Block_object_dispose(&local_70,8);
  __Block_object_dispose(&local_50,8);
  return;
}

