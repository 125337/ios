// FUN_007817d0 @ 007817d0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_007817d0(double param_1,undefined8 param_2,double param_3,ulong param_4,undefined8 param_5,
                 undefined8 param_6)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  double dVar7;
  double dVar8;
  uint local_254;
  uint local_23c;
  uint local_20c;
  uint local_1f4;
  undefined1 *local_c0;
  undefined1 *local_b8;
  ulong local_58;
  int local_50;
  ulong local_40;
  undefined8 local_38;
  ulong local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_5;
  local_30 = param_4;
  _objc_storeStrong(&local_40,param_6);
  uVar5 = local_40;
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wcrefine_swipeGesture_026a7fb8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (uVar5 == uVar2) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (((ulong)puVar4 & 1) == 0) {
      local_21 = 0;
      local_50 = 1;
      goto LAB_0078245c;
    }
    uVar1 = (uint)local_30;
    FUN_0077b5c0();
    uVar5 = local_40;
    if ((uVar1 & 1) == 0) {
      local_21 = 0;
      local_50 = 1;
      goto LAB_0078245c;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_velocityInView__026cabd0,local_30);
    puVar3 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    dVar7 = param_3;
    FUN_0077bb2c();
    dVar8 = dVar7;
    FUN_0077bd00(local_58,local_30);
    uVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wcrefine_isMyMessage_026a42e0);
    uVar1 = (uint)uVar5 & 1;
    FUN_00784100();
    if ((uVar1 & 1) == 0) {
      local_23c = 0;
      if ((uVar5 & 1) != 0) {
        puVar3 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_23c = (uint)puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      if ((local_23c & 1) == 0) {
        local_254 = 0;
        if ((uVar5 & 1) != 0) {
          puVar3 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_254 = (uint)puVar4 ^ 1;
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        if ((local_254 & 1) == 0) {
          puVar3 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          local_b8 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        else {
          local_b8 = (undefined1 *)0x0;
        }
      }
      else {
        local_b8 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
      }
    }
    else {
      if ((uVar5 & 1) == 0) {
        puVar4 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      else {
        puVar4 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        puVar3 = (undefined *)((ulong)puVar3 & 1);
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      local_c0 = (undefined1 *)(long)(int)(uint)(puVar3 == (undefined *)0x0);
      if (((local_c0 == (undefined1 *)0x0) && (param_1 < 0.0)) ||
         ((local_c0 == (undefined1 *)((long)&MACH_HEADER.magic + 1) && (0.0 < param_1)))) {
        local_b8 = local_c0;
      }
      else {
        local_1f4 = 0;
        if ((uVar5 & 1) != 0) {
          puVar3 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_1f4 = (uint)puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        if ((local_1f4 & 1) == 0) {
          local_20c = 0;
          if ((uVar5 & 1) != 0) {
            puVar3 = PTR_WCRefineConfig_026cdf58;
            (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0)
            ;
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_20c = (uint)puVar4 ^ 1;
            (*(code *)PTR__objc_release_02578630)(puVar3);
          }
          if ((local_20c & 1) == 0) {
            puVar3 = PTR_WCRefineConfig_026cdf58;
            (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0)
            ;
            _objc_retainAutoreleasedReturnValue();
            local_b8 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar3);
          }
          else {
            local_b8 = (undefined1 *)0x0;
          }
        }
        else {
          local_b8 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
        }
      }
    }
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar6 = local_b8;
    FUN_0077beac(dVar8,param_3,param_3 / 6.0,dVar7,local_b8,puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (((ulong)puVar6 & 1) == 0) {
      uVar5 = local_30;
      FUN_0077bf90(local_30,local_58,&cf_common_shouldBegin);
      if ((uVar5 & 1) == 0) {
        local_21 = 0;
        local_50 = 1;
      }
      else {
        FUN_0077c2bc(param_1,param_2);
        if (((ulong)local_b8 & 1) == 0) {
          local_21 = 0;
          local_50 = 1;
        }
        else {
          local_50 = 0;
        }
      }
    }
    else {
      local_21 = 0;
      local_50 = 1;
    }
    _objc_storeStrong(&local_58,0);
    if (local_50 != 0) goto LAB_0078245c;
  }
  uVar5 = local_30;
  (*DAT_028cc9d0)(local_30,local_38,local_40);
  local_21 = (byte)uVar5 & 1;
  local_50 = 1;
LAB_0078245c:
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

