// FUN_007cff60 @ 007cff60

byte FUN_007cff60(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_50;
  long local_48;
  ulong local_40;
  byte local_31;
  uint local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar3 & 1) == 0) ||
     (uVar3 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tag_026cab98),
     uVar3 != 0x68)) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    local_31 = 0;
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_48 = 0;
    local_40 = uVar3;
    do {
      if (local_40 == 0 || 7 < local_48) {
        local_11 = 0;
        local_30 = 1;
        break;
      }
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isEqualToString__0269ccc8,&cf_MFTitleView);
      if ((uVar3 & 1) != 0) {
        local_31 = 1;
      }
      uVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_containsString__0269d0b0,&cf_NavigationBar);
      bVar1 = (uVar3 & 1) == 0;
      if (bVar1) {
        uVar4 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_40;
        local_40 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        local_48 = local_48 + 1;
      }
      else {
        local_11 = local_31 & 1;
      }
      local_30 = (uint)!bVar1;
      _objc_storeStrong(&local_50,0);
    } while (local_30 == 0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

