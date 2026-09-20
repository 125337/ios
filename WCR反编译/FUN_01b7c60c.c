// FUN_01b7c60c @ 01b7c60c

void FUN_01b7c60c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  _WCRLongPressMenuItemIsCustom();
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePluginIconCatalog_026ce4e0,PTR_s_setCustomIcon_forItemID__026bfbf0,
               *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePluginIconCatalog_026ce4e0,PTR_s_notifyLongPressMenuChanged_026aedf0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePluginIconCatalog_026ce4e0,
               PTR_s_customizeLongPressCustomItem_tit_026bfbe0,*(undefined8 *)(param_1 + 0x20),0,
               *(undefined8 *)(param_1 + 0x28));
  }
  return;
}

