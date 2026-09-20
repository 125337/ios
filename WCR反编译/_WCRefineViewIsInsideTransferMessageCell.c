// _WCRefineViewIsInsideTransferMessageCell @ 00f1b6b8

ulong _WCRefineViewIsInsideTransferMessageCell(undefined8 param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong local_18;
  
  local_18 = 0;
  puVar1 = &local_18;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  FUN_00f1b870();
  FUN_00f1b71c(uVar2,puVar1);
  _objc_storeStrong(&local_18,0);
  return uVar2 & 0xffffffff;
}

