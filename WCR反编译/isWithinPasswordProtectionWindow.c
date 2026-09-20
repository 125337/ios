// isWithinPasswordProtectionWindow @ 0111401c

/* Function Stack Size: 0x10 bytes */

bool WCRefinePrivateFriendManager::isWithinPasswordProtectionWindow(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_titleLongPressPasswordProtection_026aef60);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_isWithinProtectionWindowForSecon_026aef68,IVar1);
  return (bool)param_1;
}

