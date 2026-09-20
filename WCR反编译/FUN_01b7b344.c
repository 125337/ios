// FUN_01b7b344 @ 01b7b344

void FUN_01b7b344(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  _WCRLongPressMenuItemIsCustom();
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePluginIconCatalog_026ce4e0,PTR_s_setCustomTitle_forItemID__026bfbe8,
               *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePluginIconCatalog_026ce4e0,PTR_s_notifyLongPressMenuChanged_026aedf0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePluginIconCatalog_026ce4e0,
               PTR_s_customizeLongPressCustomItem_tit_026bfbe0,*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x28),0);
  }
  return;
}

