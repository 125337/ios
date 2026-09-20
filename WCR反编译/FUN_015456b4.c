// FUN_015456b4 @ 015456b4

byte FUN_015456b4(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,byte param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_2c0;
  undefined *local_2b0;
  undefined1 auStack_1b0 [48];
  undefined1 auStack_180 [48];
  undefined8 local_150;
  undefined8 uStack_148;
  double local_140;
  double dStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  double local_120;
  double dStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  double local_100;
  double dStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  double local_e0;
  double dStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  double local_c0;
  double dStack_b8;
  long local_b0;
  bool local_a1;
  undefined *local_a0;
  long local_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  byte local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined *local_38;
  undefined8 local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  local_38 = (undefined *)0x0;
  _objc_storeStrong(&local_38,param_6);
  local_40 = (undefined *)0x0;
  _objc_storeStrong(&local_40,param_7);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_8);
  local_70 = param_13;
  puVar3 = local_38;
  local_78 = param_1;
  local_68 = param_12;
  local_60 = param_11;
  local_51 = param_10;
  local_50 = param_9;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_wxid_026b04e8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  FUN_01528c84();
  _objc_retainAutoreleasedReturnValue();
  local_80 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_80;
  FUN_0157efe4(local_80,local_60,local_68,local_70,DAT_028e3988,local_51 & 1);
  uVar2 = DAT_028e3880;
  if (((ulong)puVar3 & 1) == 0) {
    local_21 = 0;
    local_84 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    lVar5 = DAT_028e3888;
    local_90 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = lVar5;
    _objc_storeStrong(&DAT_028e3880);
    _objc_storeStrong(&DAT_028e3888,0);
    _objc_storeStrong(&DAT_028e3890,0);
    lVar5 = local_98;
    uVar2 = DAT_028c5df8;
    DAT_028c5f58 = 0xffffffffffffffff;
    DAT_028c5f60 = 0xffffffffffffffff;
    DAT_028c5f68 = 0xffffffffffffffff;
    puVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_contact_026a0d10);
    _objc_retainAutoreleasedReturnValue();
    local_a1 = false;
    local_2b0 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      bVar1 = local_40 == (undefined *)0x0;
      if (bVar1) {
        local_2c0 = PTR__OBJC_CLASS___NSNull_026ce0e8;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_a0 = local_2c0;
      }
      else {
        local_2c0 = local_40;
      }
      local_2b0 = local_2c0;
      local_a1 = bVar1;
    }
    _objc_setAssociatedObject(lVar5,uVar2,local_2b0,1);
    if ((local_a1 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    lVar5 = local_98;
    uVar2 = DAT_028c5e10;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_51 & 1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar5,uVar2,puVar3,1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    FUN_0157f1f0(local_98,local_51 & 1,local_60);
    puVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isGroup_026af768);
    if ((((ulong)puVar3 & 1) == 0) &&
       (puVar3 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isSelf_0269ff30),
       lVar5 = local_98, ((ulong)puVar3 & 1) == 0)) {
      puVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_commonGroupCount_026af808);
      puVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_deferredDataPending_026b0530);
      FUN_0157f538(lVar5,puVar3,puVar4);
    }
    lVar5 = local_98;
    _objc_getAssociatedObject(local_98,DAT_028c5e00);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = lVar5;
    if (lVar5 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_bounds_026ca548);
      local_f0 = param_1;
      uStack_e8 = param_2;
      local_e0 = param_3;
      dStack_d8 = param_4;
      local_d0 = param_1;
      uStack_c8 = param_2;
      local_c0 = param_3;
      dStack_b8 = param_4;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setFrame__026ca960);
      FUN_01551e44(local_b0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
    local_150 = param_1;
    uStack_148 = param_2;
    local_140 = param_3;
    dStack_138 = param_4;
    local_130 = param_1;
    uStack_128 = param_2;
    local_120 = param_3;
    dStack_118 = param_4;
    local_110 = param_1;
    uStack_108 = param_2;
    local_100 = param_3;
    dStack_f8 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,local_90,PTR_s_setFrame__026ca960);
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setAutoresizingMask__026ca878,0x12);
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setAlpha__026ca860);
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setAlpha__026ca860);
    _memcpy(auStack_180,PTR__CGAffineTransformIdentity_025782d8,0x30);
    lVar5 = local_98;
    _memcpy(auStack_1b0,auStack_180,0x30);
    (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_setTransform__026caad0,auStack_1b0);
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_frame_026ca640);
    (*(code *)PTR__objc_msgSend_02578628)
              ((local_100 - param_3) * 0.5,(dStack_f8 - param_4) * 0.5,param_3,param_4,local_98,
               PTR_s_setFrame__026ca960);
    _objc_storeStrong(&DAT_028e3870,local_90);
    _objc_storeStrong(&DAT_028e3878,local_98);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addSubview__026ca4c0,local_90);
    FUN_015526f4(local_78,local_90,local_98);
    puVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_deferredDataPending_026b0530);
    if (((ulong)puVar3 & 1) != 0) {
      FUN_01554ed4(local_40,local_48,local_38,local_50);
    }
    local_21 = 1;
    local_84 = 1;
    _objc_storeStrong(&local_b0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_90,0);
  }
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

