// handleFloatingDrag: @ 0029e0fc

/* Function Stack Size: 0x18 bytes */

void WCRFloatingTabBarDragTarget::handleFloatingDrag_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 in_d0;
  undefined8 uVar8;
  undefined8 in_d1;
  undefined8 uVar9;
  undefined8 in_d2;
  undefined8 in_d3;
  uint local_24c;
  ulong local_240;
  ulong local_1d8;
  ulong local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulong local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  byte local_a9;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  ulong local_78;
  undefined4 local_70;
  byte local_69;
  undefined *local_68;
  byte local_59;
  ulong local_58;
  ulong local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_59 = 0;
  uVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UITabBar_026ce260;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UITabBar_026ce260,PTR_s_class_0269cd60);
  uVar6 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
  if ((uVar6 & 1) == 0) {
    local_240 = 0;
  }
  else {
    local_240 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = local_240;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_240;
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  (*(code *)PTR__objc_release_02578630)(uVar4);
  local_69 = 0;
  local_24c = 1;
  if (local_40 != 0) {
    puVar5 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_69 = 1;
    local_68 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_24c = (uint)puVar5 ^ 1;
  }
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  if ((local_24c & 1) != 0) {
    local_70 = 1;
    goto LAB_0029ef1c;
  }
  puVar5 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar5);
  if (((ulong)puVar7 & 1) == 0) {
    local_70 = 1;
    goto LAB_0029ef1c;
  }
  puVar5 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar5);
  if (((ulong)puVar7 & 1) == 0) {
    local_70 = 1;
    goto LAB_0029ef1c;
  }
  uVar4 = local_40;
  FUN_0029cc70();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = local_40;
  local_78 = uVar4;
  FUN_0029ded4(local_40,0x24f749);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_40;
  local_a9 = 0;
  local_80 = uVar6;
  if (uVar6 == 0) {
    puVar5 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_a9 = 1;
    local_a8 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    FUN_0029ef90(uVar4,(ulong)puVar5 & 0xffffffff,0);
    uVar3 = (uint)uVar4;
    local_a0 = in_d0;
    uStack_98 = in_d1;
    local_90 = in_d2;
    uStack_88 = in_d3;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_frame_026ca640);
    uVar3 = (uint)uVar6;
    local_a0 = in_d0;
    uStack_98 = in_d1;
    local_90 = in_d2;
    uStack_88 = in_d3;
  }
  if ((local_a9 & 1) != 0) {
    puVar5 = local_a8;
    (*(code *)PTR__objc_release_02578630)();
    uVar3 = (uint)puVar5;
  }
  uStack_c8 = uStack_98;
  local_d0 = local_a0;
  uStack_b8 = uStack_88;
  local_c0 = local_90;
  uVar8 = local_a0;
  uVar9 = uStack_98;
  _CGRectIsEmpty(local_a0,uStack_98,local_90,uStack_88);
  if ((uVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_locationInView__026ca798,local_40);
    uStack_108 = uStack_98;
    local_110 = local_a0;
    uStack_f8 = uStack_88;
    local_100 = local_90;
    uVar4 = local_40;
    local_e0 = uVar8;
    uStack_d8 = uVar9;
    FUN_002a00a0(local_a0,uStack_98,local_90,uStack_88,uVar8,uVar9);
    uVar6 = local_38;
    local_e8 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
    uVar4 = local_40;
    if (uVar6 == 1) {
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar4,&DAT_028c9610,puVar5,1);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      uVar4 = local_40;
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e0,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar4,&DAT_028c9611,puVar5,1);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      uVar4 = local_40;
      if (local_e8 != 0x7fffffffffffffff) {
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
                   local_e8);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar4,&DAT_028c9612,puVar5,1);
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      uStack_138 = uStack_98;
      local_140 = local_a0;
      uStack_128 = uStack_88;
      local_130 = local_90;
      uStack_148 = uStack_d8;
      local_150 = local_e0;
      FUN_002a0544(local_a0,uStack_98,local_90,uStack_88,local_e0,uStack_d8,local_40);
      local_70 = 1;
    }
    else {
      uVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
      if (uVar4 == 2) {
        uVar4 = local_40;
        _objc_getAssociatedObject(0,local_40,&DAT_028c9612);
        _objc_retainAutoreleasedReturnValue();
        local_158 = uVar4;
        if ((local_e8 != 0x7fffffffffffffff) &&
           ((uVar4 == 0 ||
            ((*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_unsignedIntegerValue_026cabb8),
            uVar4 != local_e8)))) {
          uVar4 = local_40;
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
                     local_e8);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(uVar4,&DAT_028c9612,puVar5,1);
          (*(code *)PTR__objc_release_02578630)(puVar5);
        }
        FUN_002a0544(local_a0,uStack_98,local_90,uStack_88,local_e0,uStack_d8,local_40);
        local_70 = 1;
        _objc_storeStrong(&local_158,0);
      }
      else {
        uVar6 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
        _objc_setAssociatedObject(local_40,&DAT_028c9610,0,1);
        _objc_setAssociatedObject(local_40,&DAT_028c9611,0,1);
        _objc_setAssociatedObject(local_40,&DAT_028c9612,0,1);
        _objc_setAssociatedObject(local_40,&DAT_028c9613,0,1);
        FUN_002a1338(local_40,0x7fffffffffffffff,0);
        FUN_002a1490(local_a0,uStack_98,local_90,uStack_88,local_e0,uStack_d8,local_40,
                     0x7fffffffffffffff,0);
        uVar4 = local_e8;
        bVar1 = false;
        bVar2 = false;
        if (((uVar6 == 3) && (bVar2 = false, local_78 != 0)) &&
           (bVar2 = false, local_e8 != 0x7fffffffffffffff)) {
          local_1d8 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_viewControllers_0269e348);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          uVar6 = local_1d8;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar2 = uVar4 < uVar6;
        }
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_1d8);
        }
        if (bVar2) {
          uVar4 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_selectedIndex_0269e580);
          if (uVar4 - local_e8 != 0) {
            FUN_002a18e8(uVar4 - local_e8,local_40,&cf_drag_commit);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_78,PTR_s_setSelectedIndex__0269e450,local_e8);
            FUN_002a1a50(local_40,local_e8,0);
            local_70 = 1;
            goto LAB_0029eefc;
          }
        }
        uVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
        if (uVar4 != 4) {
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
        }
        FUN_002a1f00(local_a0,uStack_98,local_90,uStack_88,local_40,1);
        local_70 = 0;
      }
    }
  }
  else {
    local_70 = 1;
  }
LAB_0029eefc:
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_78,0);
LAB_0029ef1c:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

