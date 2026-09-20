// FUN_006eea30 @ 006eea30

void FUN_006eea30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined **ppuVar9;
  byte local_17c;
  undefined *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  code *local_148;
  undefined *local_140;
  undefined8 local_138;
  undefined **local_130;
  undefined1 auStack_128 [8];
  undefined *local_120;
  undefined4 local_118;
  undefined4 local_114;
  code *local_110;
  undefined *local_108;
  long local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 auStack_d8 [8];
  undefined8 local_d0;
  byte local_c8;
  byte local_c7;
  byte local_c6;
  byte local_c5;
  byte local_c4;
  undefined **local_c0;
  long local_b8;
  byte local_a9;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  long local_88;
  byte local_80;
  undefined8 local_78;
  undefined8 local_70;
  byte local_55;
  uint local_54;
  long local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  lVar2 = param_1 + 0x40;
  local_48 = param_1;
  _objc_loadWeakRetained();
  local_50 = lVar2;
  if (lVar2 == 0) {
    local_54 = 1;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_screenRecordingFrameDeleteOrigin_026a7028);
    local_17c = 1;
    if ((uVar3 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_videoWatermarkDeleteOriginal_026a7030);
      local_17c = (byte)uVar4;
    }
    local_55 = local_17c & 1;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_videoWatermarkAddTiming_026a7038);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    local_70 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_localIdentifier_026a6f90);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR___dispatch_main_q_02578680;
    local_78 = uVar5;
    if (local_30 == 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_50;
      local_a8 = PTR___NSConcreteStackBlock_02578660;
      local_a0 = 0xc2000000;
      local_9c = 0;
      local_98 = FUN_006ef278;
      local_90 = &DAT_0257b488;
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = lVar2;
      local_80 = *(byte *)(param_1 + 0x48) & 1;
      _dispatch_async(puVar6,&local_a8);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      local_54 = 1;
      _objc_storeStrong(&local_88,0);
    }
    else {
      puVar6 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar6);
      local_a9 = (byte)puVar7;
      if (((ulong)puVar7 & 1) == 0) {
        lVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_tracksWithMediaType__0269f568,
                   *(undefined8 *)PTR__AVMediaTypeVideo_02578588);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_b8 = lVar8;
        (*(code *)PTR__objc_release_02578630)(lVar2);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_wcr_logVideoTrackInfo_label__026a7050,local_b8,&cf_SU_O_bR);
        _objc_storeStrong(&local_b8,0);
      }
      ppuVar9 = &local_120;
      local_120 = PTR___NSConcreteStackBlock_02578660;
      local_118 = 0xc2000000;
      local_114 = 0;
      local_110 = FUN_006ef2cc;
      local_108 = &DAT_0257eed8;
      _objc_copyWeak(auStack_d8,param_1 + 0x40);
      lVar2 = local_30;
      (*(code *)PTR__objc_retain_02578638)();
      uVar4 = local_38;
      local_100 = lVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_f8 = uVar4;
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      (*(code *)PTR__objc_retain_02578638)();
      local_c8 = *(byte *)(param_1 + 0x49) & 1;
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      local_f0 = uVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_c7 = *(byte *)(param_1 + 0x4a) & 1;
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      local_e8 = uVar5;
      (*(code *)PTR__objc_retain_02578638)();
      local_d0 = local_70;
      local_c6 = local_55 & 1;
      local_c5 = *(byte *)(param_1 + 0x48) & 1;
      local_c4 = *(byte *)(param_1 + 0x4b) & 1;
      local_e0 = uVar4;
      _objc_retainBlock();
      lVar8 = local_30;
      lVar2 = local_50;
      bVar1 = (local_a9 & 1) == 0;
      local_c0 = ppuVar9;
      if (bVar1) {
        local_158 = PTR___NSConcreteStackBlock_02578660;
        local_150 = 0xc2000000;
        local_14c = 0;
        local_148 = FUN_006ef51c;
        local_140 = &DAT_0257ef08;
        _objc_copyWeak(auStack_128,param_1 + 0x40);
        uVar4 = local_78;
        (*(code *)PTR__objc_retain_02578638)();
        ppuVar9 = local_c0;
        local_138 = uVar4;
        (*(code *)PTR__objc_retain_02578638)();
        local_130 = ppuVar9;
        (*(code *)PTR__objc_msgSend_02578628)
                  (lVar2,PTR_s_wcr_checkAVAssetProcessedMarker__026a7070,lVar8,&local_158);
        _objc_storeStrong(&local_130);
        _objc_storeStrong(&local_138,0);
        _objc_destroyWeak(auStack_128);
      }
      else {
        (*(code *)ppuVar9[2])();
      }
      local_54 = (uint)!bVar1;
      _objc_storeStrong(&local_c0);
      _objc_storeStrong(&local_e0,0);
      _objc_storeStrong(&local_e8,0);
      _objc_storeStrong(&local_f0,0);
      _objc_storeStrong(&local_f8,0);
      _objc_storeStrong(&local_100,0);
      _objc_destroyWeak(auStack_d8);
    }
    _objc_storeStrong(&local_78,0);
  }
  _objc_storeStrong(&local_50,0);
  if (local_54 == 0) {
    local_54 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

