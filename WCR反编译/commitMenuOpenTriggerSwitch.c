// commitMenuOpenTriggerSwitch @ 01e28acc

/* Function Stack Size: 0x10 bytes */

void WCRefineSuperFloatSettingsViewController::commitMenuOpenTriggerSwitch(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  
  puVar1 = PTR_WCRSuperFloatProfileStore_026cee48;
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingMenuOpenTrigger_026c6238);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setMenuOpenTrigger__026c6230,IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_notifyChanged_026b43a0);
  return;
}

