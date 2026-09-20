// FUN_00f58828 @ 00f58828

void FUN_00f58828(long param_1)

{
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) & 1) == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
    _WCRefineEnhancedAdBlockInstallRuntimeSupport();
    _WCRefineEnhancedAdBlockEnforceInternalAccess();
    FUN_00f58890();
  }
  return;
}

