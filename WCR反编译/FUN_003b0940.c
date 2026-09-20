// FUN_003b0940 @ 003b0940

byte FUN_003b0940(double param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  byte local_54;
  ulong local_40;
  ulong local_38;
  undefined4 local_30;
  byte local_29;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_29 = 0;
  bVar1 = true;
  if (local_20 != 0) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isHidden_026ca768);
    bVar1 = true;
    if ((uVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_alpha_026ca4d8);
      bVar1 = true;
      if (DAT_02323c88 <= param_1) {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_window_026cabf0);
        _objc_retainAutoreleasedReturnValue();
        local_29 = 1;
        bVar1 = uVar2 == 0;
        local_28 = uVar2;
      }
    }
  }
  if ((local_29 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  if (bVar1) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tag_026cab98);
    uVar2 = local_20;
    local_38 = uVar3;
    if (((uVar3 == 0x24f749) || (uVar3 == 0x24f74b)) || (uVar3 == 0x24f754)) {
      local_11 = 1;
      local_30 = 1;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___UITabBar_026ce260;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITabBar_026ce260,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((uVar2 & 1) == 0) {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        local_40 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_containsString__0269d0b0,&cf_FloatingTabBar);
        local_54 = 1;
        if ((uVar2 & 1) == 0) {
          uVar2 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_containsString__0269d0b0,&cf_FloatingCapsule);
          local_54 = 1;
          if ((uVar2 & 1) == 0) {
            uVar2 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_containsString__0269d0b0,&cf_TabBar);
            local_54 = (byte)uVar2;
          }
        }
        local_11 = local_54 & 1;
        local_30 = 1;
        _objc_storeStrong(&local_40,0);
      }
      else {
        local_11 = 1;
        local_30 = 1;
      }
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

