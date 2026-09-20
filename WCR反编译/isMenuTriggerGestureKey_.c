// isMenuTriggerGestureKey: @ 01e2863c

/* Function Stack Size: 0x18 bytes */

bool WCRefineSuperFloatSettingsViewController::isMenuTriggerGestureKey_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  byte local_40;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  puVar1 = PTR_WCRSuperFloatProfileStore_026cee48;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_menuOpenTrigger_026b1960);
  if (puVar1 == (undefined1 *)0x0) {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_tap);
    local_11 = (byte)uVar2 & 1;
  }
  else if (puVar1 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_longPress);
    local_11 = (byte)uVar2 & 1;
  }
  else {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_swipeLeft);
    local_40 = 1;
    if ((uVar2 & 1) == 0) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_swipeRight)
      ;
      local_40 = (byte)uVar2;
    }
    local_11 = local_40 & 1;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

