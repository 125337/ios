// _WCRSideloadShareFixIsGroupRemapExtensionProcess @ 0150a684

uint _WCRSideloadShareFixIsGroupRemapExtensionProcess(ulong param_1)

{
  uint uVar1;
  undefined4 local_14;
  
  _WCRSideloadShareFixIsShareExtensionProcess();
  local_14 = 1;
  uVar1 = (uint)param_1;
  if ((param_1 & 1) == 0) {
    _WCRSideloadShareFixIsNotificationServiceProcess();
    local_14 = uVar1;
  }
  return local_14 & 1;
}

