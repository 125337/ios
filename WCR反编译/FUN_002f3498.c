// FUN_002f3498 @ 002f3498

void FUN_002f3498(double param_1,undefined8 param_2,byte *param_3,byte *param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  double dVar5;
  uint local_184;
  byte local_178;
  undefined *local_150;
  undefined4 local_148;
  undefined4 local_144;
  code *local_140;
  undefined *local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  byte local_120;
  undefined **local_118;
  undefined *local_110;
  undefined4 local_108;
  undefined4 local_104;
  code *local_100;
  undefined *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  byte local_e0;
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  code *local_70;
  long local_68;
  byte local_5f;
  byte local_5e;
  byte local_5d;
  undefined *local_50;
  undefined4 local_44;
  byte *local_40;
  byte *local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  if (param_3 != (byte *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (byte *)0x0) {
    *param_4 = 0;
  }
  local_40 = param_4;
  local_38 = param_3;
  if (local_30 == 0) {
    local_28 = 0;
    local_44 = 1;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_screenshotWatermarkEnabled_026a1ee0);
    local_178 = 0;
    if (((ulong)puVar1 & 1) != 0) {
      puVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_screenshotWatermarkGestureEnable_026a1ee8);
      local_178 = (byte)puVar1;
    }
    local_5d = local_178 & 1;
    puVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_screenshotFrameEnabled_026a1ef0);
    local_184 = 0;
    if (((ulong)puVar1 & 1) != 0) {
      puVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_screenshotFrameGestureEnabled_026a1ef8);
      local_184 = (uint)puVar1;
    }
    lVar4 = local_30;
    local_5e = (byte)local_184 & 1;
    if (((local_5d & 1) == 0) && ((local_184 & 1) == 0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = lVar4;
      local_44 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_screenshotWatermarkDelay_026a1f10);
      dVar5 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_screenshotFrameDelay_026a1f18);
      lVar4 = local_30;
      local_5f = param_1 <= dVar5;
      local_90 = 0;
      local_80 = 0x32000000;
      local_7c = 0x30;
      local_78 = FUN_002f4ea4;
      local_70 = FUN_002f4ef8;
      local_88 = &local_90;
      (*(code *)PTR__objc_retain_02578638)();
      puVar1 = PTR___NSConcreteStackBlock_02578660;
      local_68 = lVar4;
      local_e8 = &local_b0;
      local_b0 = 0;
      local_a0 = 0x20000000;
      local_9c = 0x20;
      local_98 = 0;
      local_d0 = 0;
      local_c0 = 0x20000000;
      local_bc = 0x20;
      local_b8 = 0;
      ppuVar2 = &local_110;
      local_110 = PTR___NSConcreteStackBlock_02578660;
      local_108 = 0xc2000000;
      local_104 = 0;
      local_100 = FUN_002f4f24;
      local_f8 = &DAT_0257bd18;
      local_e0 = local_5d & 1;
      local_f0 = &local_90;
      local_c8 = &local_d0;
      local_a8 = local_e8;
      _objc_retainBlock();
      ppuVar3 = &local_150;
      local_150 = puVar1;
      local_148 = 0xc2000000;
      local_144 = 0;
      local_140 = FUN_002f4ff0;
      local_138 = &DAT_0257bd18;
      local_120 = local_5e & 1;
      local_130 = &local_90;
      local_128 = &local_d0;
      local_d8 = ppuVar2;
      _objc_retainBlock();
      local_118 = ppuVar3;
      if (((local_5d & 1) == 0) || ((local_5e & 1) == 0)) {
        if ((local_5d & 1) == 0) {
          (*(code *)ppuVar3[2])();
        }
        else {
          (*(code *)local_d8[2])();
        }
      }
      else if ((local_5f & 1) == 0) {
        (*(code *)ppuVar3[2])();
        (*(code *)local_d8[2])();
      }
      else {
        (*(code *)local_d8[2])();
        (*(code *)local_118[2])();
      }
      if (local_38 != (byte *)0x0) {
        *local_38 = *(byte *)(local_a8 + 3) & 1;
      }
      if (local_40 != (byte *)0x0) {
        *local_40 = *(byte *)(local_c8 + 3) & 1;
      }
      lVar4 = local_88[5];
      (*(code *)PTR__objc_retain_02578638)();
      local_44 = 1;
      local_28 = lVar4;
      _objc_storeStrong(&local_118);
      _objc_storeStrong(&local_d8,0);
      __Block_object_dispose(&local_d0,8);
      __Block_object_dispose(&local_b0,8);
      __Block_object_dispose(&local_90,8);
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

