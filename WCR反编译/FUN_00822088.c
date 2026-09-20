// FUN_00822088 @ 00822088

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00822088(undefined8 param_1,undefined8 param_2,long param_3,undefined1 *param_4,
                 undefined8 *param_5)

{
  uint uVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  char *pcVar6;
  ulong local_2d0;
  ulong local_1f8;
  ulong local_1d0;
  bool local_b9;
  ulong local_b8;
  bool local_a9;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  byte local_89;
  ulong local_88;
  char *local_80;
  int local_74;
  ulong local_70;
  cfstringStruct *local_68;
  undefined8 *local_50;
  undefined1 *local_48;
  long local_40;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  uVar2 = local_38;
  local_50 = param_5;
  local_48 = param_4;
  local_40 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_isEqualToString__0269ccc8,_WCRPageBackgroundSceneChat);
  if ((uVar2 & 1) != 0) {
    pcVar3 = &cf_getBackgroundView;
    _NSSelectorFromString();
    uVar2 = local_30;
    local_68 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar3);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,local_68);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_70 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((uVar2 & 1) == 0) {
        local_74 = 0;
      }
      else {
        if (local_48 != (undefined1 *)0x0) {
          *local_48 = 0;
        }
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        if (local_50 != (undefined8 *)0x0) {
          uVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_stringWithFormat__0269cca8,&cf_child____index0);
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *local_50 = puVar4;
          (*(code *)PTR__objc_release_02578630)(uVar5);
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
        uVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        local_74 = 1;
        local_28 = uVar2;
      }
      _objc_storeStrong(&local_70,0);
      if (local_74 != 0) goto LAB_00822d0c;
    }
  }
  pcVar6 = "MainTabBarViewController";
  _objc_getClass();
  local_80 = pcVar6;
  if ((local_40 != 1) &&
     ((pcVar6 == (char *)0x0 ||
      (uVar2 = local_30,
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isKindOfClass__0269cd68,pcVar6),
      (uVar2 & 1) == 0)))) {
    uVar1 = (uint)local_30;
    FUN_00810910();
    if ((uVar1 & 1) == 0) {
      uVar2 = local_30;
      FUN_00826364();
      _objc_retainAutoreleasedReturnValue();
      local_98 = uVar2;
      if (uVar2 == 0) {
        if (local_48 != (undefined1 *)0x0) {
          *local_48 = 0;
        }
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        if (local_50 != (undefined8 *)0x0) {
          uVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_stringWithFormat__0269cca8,&cf_child____index0);
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *local_50 = puVar4;
          (*(code *)PTR__objc_release_02578630)(uVar5);
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
        uVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isViewLoaded_0269cde0);
        local_b9 = (uVar2 & 1) == 0;
        if (local_b9) {
          local_2d0 = 0;
        }
        else {
          local_2d0 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          local_b8 = local_2d0;
        }
        local_b9 = !local_b9;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = local_2d0;
        if (local_b9) {
          (*(code *)PTR__objc_release_02578630)(local_b8);
        }
        local_74 = 1;
      }
      else {
        uVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isViewLoaded_0269cde0);
        local_a9 = (uVar2 & 1) == 0;
        if (local_a9) {
          local_1f8 = 0;
        }
        else {
          local_1f8 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          local_a8 = local_1f8;
        }
        local_a9 = !local_a9;
        (*(code *)PTR__objc_retain_02578638)();
        local_a0 = local_1f8;
        if (local_a9) {
          (*(code *)PTR__objc_release_02578630)(local_a8);
        }
        if ((local_a0 == 0) || (uVar2 = local_98, FUN_00827aa4(local_98,local_a0), (uVar2 & 1) != 0)
           ) {
          if (local_48 != (undefined1 *)0x0) {
            *local_48 = 1;
          }
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          if (local_50 != (undefined8 *)0x0) {
            uVar2 = local_98;
            (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_class_0269cd60);
            _NSStringFromClass();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_stringWithFormat__0269cca8,&cf____backgroundView);
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            *local_50 = puVar4;
            (*(code *)PTR__objc_release_02578630)(uVar2);
          }
          uVar2 = local_98;
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = uVar2;
        }
        else {
          if (local_48 != (undefined1 *)0x0) {
            *local_48 = 0;
          }
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          if (local_50 != (undefined8 *)0x0) {
            uVar2 = local_a0;
            (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_class_0269cd60);
            _NSStringFromClass();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_stringWithFormat__0269cca8,&cf_child____index0);
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            *local_50 = puVar4;
            (*(code *)PTR__objc_release_02578630)(uVar2);
          }
          uVar2 = local_a0;
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = uVar2;
        }
        local_74 = 1;
        _objc_storeStrong(&local_a0,0);
      }
      _objc_storeStrong(&local_98,0);
      goto LAB_00822d0c;
    }
  }
  if (local_48 != (undefined1 *)0x0) {
    *local_48 = 0;
  }
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (local_50 != (undefined8 *)0x0) {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_stringWithFormat__0269cca8,&cf_child____index0);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *local_50 = puVar4;
    (*(code *)PTR__objc_release_02578630)(uVar5);
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  local_89 = 0;
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isViewLoaded_0269cde0);
  if ((uVar2 & 1) == 0) {
    local_1d0 = 0;
  }
  else {
    local_1d0 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    local_89 = 1;
    local_88 = local_1d0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_1d0;
  if ((local_89 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  local_74 = 1;
LAB_00822d0c:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

