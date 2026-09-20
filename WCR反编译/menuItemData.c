// menuItemData @ 0023cab0

/* Function Stack Size: 0x10 bytes */

ID WCRefineDoNotDisturbHook::menuItemData(ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_WCRefineDoNotDisturbSupport_026ce118;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineDoNotDisturbSupport_026ce118,PTR_s_mainFrameMenuItemData_026a0c40);
  return (ID)puVar1;
}

