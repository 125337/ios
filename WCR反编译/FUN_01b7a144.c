// FUN_01b7a144 @ 01b7a144

void FUN_01b7a144(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  _WCRLongPressMenuItemIsCustom();
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePluginIconCatalog_026ce4e0,
               PTR_s_setLongPressItemEnabled_enabled__026bfbb0,*(undefined8 *)(param_1 + 0x20),0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePluginIconCatalog_026ce4e0,PTR_s_removeLongPressCustomItem__026bfba8,
               *(undefined8 *)(param_1 + 0x20));
  }
  return;
}

