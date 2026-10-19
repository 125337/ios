// _WCMYYCGColorSpaceIsDeviceGray @0x91068

bool _WCMYYCGColorSpaceIsDeviceGray(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  
  bVar1 = false;
  if (param_1 != 0) {
    uVar3 = _WCMYYCGColorSpaceGetDeviceGray();
    iVar2 = _CFEqual(param_1,uVar3);
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}

