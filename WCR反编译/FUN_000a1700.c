// FUN_000a1700 @ 000a1700

byte FUN_000a1700(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  ulong uVar6;
  undefined1 *puVar7;
  int local_98;
  int local_94;
  ulong local_48;
  cfstringStruct *local_40;
  uint local_34;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_3);
  local_30 = 0;
  local_28 = param_4;
  _objc_storeStrong(&local_30,param_5);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    if (DAT_028c8030 == (code *)0x0) {
      local_94 = 1;
    }
    else {
      uVar4 = local_20;
      (*DAT_028c8030)(local_20,local_28,local_30);
      local_94 = (int)uVar4;
    }
    local_11 = local_94 != 0;
    local_34 = 1;
  }
  else {
    uVar4 = local_30;
    FUN_000a2b9c();
    if ((uVar4 & 1) == 0) {
      if (DAT_028c8030 == (code *)0x0) {
        local_98 = 1;
      }
      else {
        uVar4 = local_20;
        (*DAT_028c8030)(local_20,local_28,local_30);
        local_98 = (int)uVar4;
      }
      local_11 = local_98 != 0;
      local_34 = 1;
    }
    else {
      pcVar5 = &cf__parent;
      _NSSelectorFromString();
      uVar4 = local_20;
      local_40 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar5);
      if ((uVar4 & 1) != 0) {
        uVar4 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,local_40);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
        local_48 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
        bVar1 = false;
        if ((uVar4 & 1) != 0) {
          uVar4 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_viewControllers_0269e348);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar1 = uVar6 < 2;
          (*(code *)PTR__objc_release_02578630)(uVar4);
        }
        if (bVar1) {
          local_11 = 0;
        }
        local_34 = (uint)bVar1;
        _objc_storeStrong(&local_48,0);
        if (local_34 != 0) goto LAB_000a1b40;
      }
      uVar4 = local_30;
      uVar6 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_velocityInView__026cabd0);
      (*(code *)PTR__objc_release_02578630)(uVar6);
      if (ABS(param_2) < ABS(param_1)) {
        puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if (puVar7 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
          local_11 = 0.0 < param_1;
        }
        else {
          local_11 = param_1 < 0.0;
        }
        local_34 = 1;
      }
      else {
        local_11 = 0;
        local_34 = 1;
      }
    }
  }
LAB_000a1b40:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

