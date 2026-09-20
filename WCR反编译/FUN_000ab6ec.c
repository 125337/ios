// FUN_000ab6ec @ 000ab6ec

void FUN_000ab6ec(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  uint local_11c;
  ulong local_70;
  ulong local_68;
  ulong local_60 [3];
  ulong local_48;
  byte local_39;
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_39 = 0;
  if (local_38 != 0) {
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_containsString__0269d0b0,&cf_FindFriend);
    if ((((uVar2 & 1) != 0) ||
        (uVar2 = local_48,
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf_Discover),
        (uVar2 & 1) != 0)) ||
       (uVar2 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_48,PTR_s_isEqualToString__0269ccc8,&cf_FindFriendEntryViewController),
       (uVar2 & 1) != 0)) {
      local_39 = 1;
    }
    uVar2 = local_38;
    puVar3 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    uVar4 = local_38;
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_60[0] = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_viewControllers_0269e348);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      if (local_68 != 0) {
        uVar2 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_class_0269cd60);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        local_70 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_containsString__0269d0b0,&cf_FindFriend);
        if ((((uVar2 & 1) != 0) ||
            (uVar2 = local_70,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_70,PTR_s_containsString__0269d0b0,&cf_Discover), (uVar2 & 1) != 0)) ||
           (uVar2 = local_70,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_70,PTR_s_isEqualToString__0269ccc8,&cf_FindFriendEntryViewController),
           (uVar2 & 1) != 0)) {
          local_39 = 1;
        }
        _objc_storeStrong(&local_70,0);
      }
      _objc_storeStrong(&local_68);
      _objc_storeStrong(local_60,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  if ((local_39 & 1) != 0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11c = 0;
    if (((ulong)puVar5 & 1) != 0) {
      local_11c = 0;
      FUN_000b42c8();
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if ((local_11c & 1) != 0) {
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if (puVar5 == (undefined *)0x0) {
        uVar2 = local_28;
        FUN_000b4350(local_28,0,&cf_s);
        if ((uVar2 & 1) == 0) {
          FUN_000b4a94(&cf_s);
        }
        FUN_000b4d78();
        goto LAB_000abd38;
      }
      uVar2 = local_28;
      FUN_000b4350(local_28,1,&cf_s);
      if ((uVar2 & 1) != 0) {
        FUN_000b4d78();
        goto LAB_000abd38;
      }
      uVar1 = 0;
      FUN_000b4a94();
      if ((uVar1 & 1) != 0) {
        FUN_000b4d78();
        goto LAB_000abd38;
      }
    }
  }
  (*DAT_028c80a8)(local_28,local_30,local_38);
LAB_000abd38:
  _objc_storeStrong(&local_38,0);
  return;
}

