// FUN_00f368cc @ 00f368cc

void FUN_00f368cc(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  pcVar1 = "MMMenuController";
  local_20 = param_1;
  local_18 = param_1;
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    local_30 = (char *)0x0;
    local_28 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_sharedMenuController_026a0478);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sharedMenuController_026a0478);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_30;
      local_30 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_setMenuVisible_animated__026a0088);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_hideMenu_026ac078);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hideMenu_026ac078);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setMenuVisible_animated__026a0088,0,1);
    }
    _objc_storeStrong(&local_30,0);
  }
  return;
}

