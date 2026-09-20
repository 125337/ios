// FUN_0036b608 @ 0036b608

byte FUN_0036b608(undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  bool local_49;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_11 = false;
  }
  else {
    pcVar3 = &cf_setKeepSwipeStateOnResue_;
    _NSSelectorFromString();
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar3);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,pcVar3,0);
    }
    pcVar3 = &cf_forceHideMenuOptionsAnimated_;
    _NSSelectorFromString();
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar3);
    local_49 = (uVar2 & 1) != 0;
    if (local_49) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,pcVar3,param_2 & 1);
    }
    pcVar3 = &cf_hideMenuOptionsAnimated_;
    _NSSelectorFromString();
    if (!local_49) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar3);
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_20,pcVar3,param_2 & 1);
        local_49 = true;
      }
    }
    local_11 = local_49;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

