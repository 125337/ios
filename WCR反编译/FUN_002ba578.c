// FUN_002ba578 @ 002ba578

void FUN_002ba578(double param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  dispatch_time_t dVar6;
  ulong uVar7;
  long *local_110;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  long local_80;
  ulong local_78;
  byte local_6a;
  byte local_69;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  undefined4 local_48;
  long *local_38;
  ulong local_30;
  long local_28;
  
  plVar3 = &local_28;
  local_28 = 0;
  _objc_storeStrong(plVar3,param_2);
  local_30 = param_3;
  FUN_002b64a4();
  _objc_retainAutoreleasedReturnValue();
  local_38 = plVar3;
  if (plVar3 == (long *)0x0) {
    local_48 = 1;
  }
  else {
    FUN_002bad18();
    if (((ulong)plVar3 & 1) == 0) {
      plVar3 = local_38;
      _objc_getAssociatedObject(local_38,&DAT_028c9802);
      _objc_retainAutoreleasedReturnValue();
      plVar4 = plVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(plVar3);
      if (((ulong)plVar4 & 1) == 0) {
        local_48 = 1;
      }
      else {
        plVar3 = local_38;
        FUN_0029cc70();
        _objc_retainAutoreleasedReturnValue();
        local_50 = plVar3;
        (*(code *)PTR__objc_msgSend_02578628)(plVar3,PTR_s_selectedViewController_0269d610);
        _objc_retainAutoreleasedReturnValue();
        local_69 = 0;
        puVar5 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
        local_58 = plVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(plVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
        if (((ulong)plVar3 & 1) == 0) {
          local_110 = local_58;
        }
        else {
          local_110 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_topViewController_0269e588);
          _objc_retainAutoreleasedReturnValue();
          local_69 = 1;
          local_68 = local_110;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_60 = local_110;
        if ((local_69 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_68);
        }
        plVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_hidesBottomBarWhenPushed_026a1a98);
        uVar2 = (uint)plVar3;
        if (((ulong)plVar3 & 1) == 0) {
          FUN_002bae4c();
          local_6a = (byte)uVar2;
          uVar7 = (ulong)local_6a;
          if (((uVar2 & 1) == 0) || (uVar7 = local_30 - 8, 7 < local_30)) {
            _objc_setAssociatedObject(uVar7,local_38,&DAT_028c9802,0,1);
            plVar3 = local_38;
            puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                       &cf_MiniTask_follow_clear___);
            _objc_retainAutoreleasedReturnValue();
            FUN_002b7768(plVar3,0);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            plVar3 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isHidden_026ca768);
            if ((((ulong)plVar3 & 1) == 0) &&
               ((*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_alpha_026ca4d8),
               param_1 <= DAT_02323d38)) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (0x3ff0000000000000,local_38,PTR_s_setAlpha__026ca860);
            }
            FUN_002bb194(local_38,local_50,0);
            plVar3 = local_38;
            if (local_50 != (long *)0x0) {
              plVar4 = local_50;
              (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_selectedIndex_0269e580);
              FUN_002a1a50(plVar3,plVar4,0);
            }
            local_48 = 0;
          }
          else {
            dVar6 = _dispatch_time(0,200000000);
            puVar5 = PTR___dispatch_main_q_02578680;
            _objc_retainAutoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            lVar1 = local_28;
            local_a0 = PTR___NSConcreteStackBlock_02578660;
            local_98 = 0xc2000000;
            local_94 = 0;
            local_90 = FUN_002bb158;
            local_88 = &DAT_025791c0;
            (*(code *)PTR__objc_retain_02578638)();
            local_80 = lVar1;
            local_78 = local_30;
            _dispatch_after(dVar6,puVar5,&local_a0);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            local_48 = 1;
            _objc_storeStrong(&local_80,0);
          }
        }
        else {
          _objc_setAssociatedObject(local_38,&DAT_028c9802,0,1);
          FUN_002b6bb8(local_38,&cf_MiniTask_follow_clear_hiddenPage,0);
          FUN_002b6e10(local_38,&cf_MiniTask_follow_clear_hiddenPage,0);
          FUN_002b7768(local_38,0,&cf_MiniTask_follow_clear_hiddenPage);
          plVar3 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isHidden_026ca768);
          if (((ulong)plVar3 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setHidden__026ca970,1);
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x3ff0000000000000,local_38,PTR_s_setAlpha__026ca860);
          local_48 = 1;
        }
        _objc_storeStrong(&local_60);
        _objc_storeStrong(&local_58,0);
        _objc_storeStrong(&local_50,0);
      }
    }
    else {
      local_48 = 1;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

