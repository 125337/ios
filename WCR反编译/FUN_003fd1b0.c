// FUN_003fd1b0 @ 003fd1b0

void FUN_003fd1b0(undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  byte local_20c;
  byte local_1fc;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  byte local_b9;
  ulong local_b8;
  byte local_a9;
  ulong local_a8;
  undefined1 local_9d;
  byte local_9c;
  byte local_9b;
  byte local_9a;
  byte local_99;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  byte local_59;
  ulong local_58;
  ulong local_50 [2];
  undefined1 *local_40;
  undefined4 local_38;
  ulong local_28;
  ulong *puVar3;
  
  puVar3 = &local_28;
  local_28 = 0;
  _objc_storeStrong(puVar3,param_1);
  uVar2 = (uint)puVar3;
  if ((local_28 == 0) || (FUN_003fe19c(), (uVar2 & 1) != 0)) {
    local_38 = 1;
  }
  else {
    local_40 = (undefined1 *)0x0;
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    FUN_003fe214(local_40);
    if (local_40 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      FUN_003fe250(0,local_28);
      local_38 = 1;
    }
    else {
      uVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationItem_0269cf08);
      _objc_retainAutoreleasedReturnValue();
      local_59 = 0;
      local_50[0] = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_titleView_0269ea50);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UISegmentedControl_026ce290,PTR_s_class_0269cd60);
      uVar7 = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
      bVar1 = false;
      if ((uVar7 & 1) != 0) {
        uVar7 = local_50[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_titleView_0269ea50);
        _objc_retainAutoreleasedReturnValue();
        local_59 = 1;
        local_58 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = uVar7 == 0x57435249;
      }
      if ((local_59 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_58);
      }
      (*(code *)PTR__objc_release_02578630)(uVar6);
      if (bVar1) {
        (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_setTitleView__026a3560,0);
      }
      uVar6 = local_50[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_rightBarButtonItem_0269feb8);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = local_50[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_rightBarButtonItems_0269eab0);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      FUN_003fe8ac();
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar8;
      (*(code *)PTR__objc_release_02578630)(uVar7);
      (*(code *)PTR__objc_release_02578630)(uVar6);
      uVar6 = local_50[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_leftBarButtonItem_026a3568);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = local_50[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_leftBarButtonItems_026a3570);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      FUN_003fe8ac();
      _objc_retainAutoreleasedReturnValue();
      local_70 = uVar8;
      (*(code *)PTR__objc_release_02578630)(uVar7);
      (*(code *)PTR__objc_release_02578630)(uVar6);
      uVar6 = local_68;
      FUN_003fea60();
      _objc_retainAutoreleasedReturnValue();
      local_78 = uVar6;
      if (uVar6 == 0) {
        uVar7 = local_70;
        FUN_003fea60();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = local_78;
        local_78 = uVar7;
        (*(code *)PTR__objc_release_02578630)(uVar6);
      }
      if (local_78 == 0) {
        uVar6 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_80 = uVar7;
        (*(code *)PTR__objc_release_02578630)(uVar6);
        uVar6 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_viewWithTag__026cabe0,0x57435249);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
        local_88 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UISegmentedControl_026ce290,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
        if ((uVar6 & 1) != 0) {
          _objc_storeStrong(&local_78,local_88);
        }
        _objc_storeStrong(&local_88);
        _objc_storeStrong(&local_80,0);
      }
      uVar6 = local_68;
      FUN_003feda4();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = local_70;
      local_90 = uVar6;
      FUN_003feda4();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = local_90;
      local_98 = uVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_count_0269cfe0);
      local_1fc = 1;
      if (uVar6 < 2) {
        uVar7 = local_90;
        FUN_003ff1e4(uVar6 - 2);
        local_1fc = (byte)uVar7;
      }
      local_99 = local_1fc & 1;
      uVar6 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_count_0269cfe0);
      local_20c = 1;
      if (uVar6 < 2) {
        uVar7 = local_98;
        FUN_003ff1e4(uVar6 - 2);
        local_20c = (byte)uVar7;
      }
      local_9a = local_20c & 1;
      uVar6 = local_68;
      FUN_003fea60();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      uVar7 = local_70;
      local_9b = uVar6 != 0;
      FUN_003fea60();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      local_a9 = 0;
      local_b9 = 0;
      bVar1 = false;
      local_9c = uVar7 != 0;
      if (local_78 != 0) {
        uVar6 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        local_a9 = 1;
        bVar1 = false;
        local_a8 = uVar6;
        if (uVar6 != 0) {
          uVar6 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          local_b9 = 1;
          local_b8 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar1 = uVar6 == 0x5743524f;
        }
      }
      if ((local_b9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_b8);
      }
      if ((local_a9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_a8);
      }
      local_9d = bVar1;
      if (((local_9b & 1) == 0) || ((local_99 & 1) != 0)) {
        if (((local_9c & 1) == 0) || (((local_99 & 1) == 0 || ((local_9a & 1) != 0)))) {
          if ((bVar1) && (((local_99 & 1) != 0 && ((local_9a & 1) != 0)))) {
            uVar7 = local_28;
            FUN_003ffbb8(local_28,local_78);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = local_78;
            local_78 = uVar7;
            (*(code *)PTR__objc_release_02578630)(uVar6);
            FUN_003ffa34(local_78);
            local_38 = 1;
          }
          else {
            if (local_78 == 0) {
              uVar7 = local_28;
              FUN_004007b0();
              _objc_retainAutoreleasedReturnValue();
              uVar6 = local_78;
              local_78 = uVar7;
              (*(code *)PTR__objc_release_02578630)(uVar6);
            }
            puVar4 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
            _objc_alloc();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_initWithCustomView__026a3578,local_78);
            local_c8 = puVar4;
            if ((local_99 & 1) == 0) {
              puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithArray__0269eab8,
                         local_90);
              _objc_retainAutoreleasedReturnValue();
              local_d0 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180,local_c8);
              FUN_003ff678(local_50[0],0,local_d0);
              FUN_003ff678(local_50[0],1,local_98);
              FUN_003ff528(local_28);
              _objc_storeStrong(&local_d0,0);
            }
            else if ((local_9a & 1) == 0) {
              puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithArray__0269eab8,
                         local_98);
              _objc_retainAutoreleasedReturnValue();
              local_d8 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180,local_c8);
              FUN_003ff678(local_50[0],1,local_d8);
              FUN_003ff678(local_50[0],0,local_90);
              FUN_003ff528(local_28);
              _objc_storeStrong(&local_d8,0);
            }
            else {
              FUN_003ff678(local_50[0],0,local_90);
              FUN_003ff678(local_50[0],1,local_98);
              uVar7 = local_28;
              FUN_003ffbb8(local_28,local_78);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = local_78;
              local_78 = uVar7;
              (*(code *)PTR__objc_release_02578630)(uVar6);
            }
            FUN_003ffa34(local_78);
            _objc_storeStrong(&local_c8,0);
            local_38 = 0;
          }
        }
        else {
          FUN_003ff528(local_28);
          FUN_003ff678(local_50[0],0,local_90);
          FUN_003ffa34(local_78);
          local_38 = 1;
        }
      }
      else {
        FUN_003ff528(local_28);
        if ((local_9c & 1) != 0) {
          FUN_003ff678(local_50[0],1,local_98);
        }
        FUN_003ffa34(local_78);
        local_38 = 1;
      }
      _objc_storeStrong(&local_98);
      _objc_storeStrong(&local_90,0);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(local_50,0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

