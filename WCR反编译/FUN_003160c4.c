// FUN_003160c4 @ 003160c4

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_003160c4(void)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_108;
  undefined *local_f0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  byte local_71;
  undefined *local_70;
  byte local_61;
  undefined *local_60;
  undefined4 local_54;
  undefined *local_50 [3];
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  
  puVar5 = DAT_028c9ac8;
  uVar2 = DAT_02323d70;
  if (DAT_028c9ac8 == (undefined *)0x0) {
    puVar5 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_globalCornerStrokeColorLight_026a2078);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = local_30;
    local_38 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_globalCornerStrokeColorDark_026a2080);
    _objc_retainAutoreleasedReturnValue();
    local_50[0] = local_f0;
    if ((local_38 == (undefined *)0x0) && (local_f0 == (undefined *)0x0)) {
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,uVar2,0x3fe6666666666666,0x3fe0000000000000,
                 PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = DAT_028c9ac8;
      DAT_028c9ac8 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = DAT_028c9ac8;
      (*(code *)PTR__objc_retain_02578638)();
      local_54 = 1;
      local_28 = puVar5;
    }
    else {
      if (local_38 == (undefined *)0x0) {
        local_61 = 0;
        bVar1 = local_f0 == (undefined *)0x0;
        if (bVar1) {
          local_f0 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,uVar2,0x3fe6666666666666,0x3fe0000000000000,
                     PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithRed_green_blue_alpha__0269cc48);
          _objc_retainAutoreleasedReturnValue();
          local_60 = local_f0;
        }
        local_61 = bVar1;
        _objc_storeStrong(&local_38,local_f0);
        if ((local_61 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_60);
        }
      }
      if (local_50[0] == (undefined *)0x0) {
        local_71 = 0;
        bVar1 = local_38 == (undefined *)0x0;
        if (bVar1) {
          local_108 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,uVar2,0x3fe6666666666666,0x3fe0000000000000,
                     PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithRed_green_blue_alpha__0269cc48);
          _objc_retainAutoreleasedReturnValue();
          local_70 = local_108;
        }
        else {
          local_108 = local_38;
        }
        local_71 = bVar1;
        _objc_storeStrong(local_50,local_108);
        if ((local_71 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_70);
        }
      }
      puVar4 = local_50[0];
      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
      local_a8 = PTR___NSConcreteStackBlock_02578660;
      local_a0 = 0xc2000000;
      local_9c = 0;
      local_98 = FUN_00322234;
      local_90 = &DAT_0257add8;
      (*(code *)PTR__objc_retain_02578638)();
      puVar3 = local_38;
      local_88 = puVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_colorWithDynamicProvider__0269e538,&local_a8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = DAT_028c9ac8;
      DAT_028c9ac8 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar5 = DAT_028c9ac8;
      (*(code *)PTR__objc_retain_02578638)();
      local_54 = 1;
      local_28 = puVar5;
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_88,0);
    }
    _objc_storeStrong(local_50);
    _objc_storeStrong(&local_38,0);
    _objc_storeStrong(&local_30,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar5;
  }
  _objc_autoreleaseReturnValue(local_28);
  return;
}

