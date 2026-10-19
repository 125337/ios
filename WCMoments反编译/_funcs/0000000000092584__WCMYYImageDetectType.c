// _WCMYYImageDetectType @0x92584

undefined8 _WCMYYImageDetectType(long param_1)

{
  short sVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 local_18;
  
  if (param_1 == 0) {
    local_18 = 0;
  }
  else {
    uVar3 = _CFDataGetLength(param_1);
    if (uVar3 < 0x10) {
      local_18 = 0;
    }
    else {
      piVar4 = (int *)_CFDataGetBytePtr(uVar3 - 0x10,param_1);
      iVar2 = *piVar4;
      if (iVar2 == 0x10000) {
        local_18 = 5;
      }
      else if (iVar2 == 0x20000) {
        local_18 = 5;
      }
      else if (iVar2 == 0x2a4949) {
        local_18 = 3;
      }
      else if (iVar2 == 0x2a004d4d) {
        local_18 = 3;
      }
      else if (iVar2 == 0x38464947) {
        local_18 = 7;
      }
      else {
        if (iVar2 == 0x46464952) {
          if (piVar4[2] == 0x50424557) {
            return 9;
          }
        }
        else if (iVar2 == 0x474e5089) {
          if (piVar4[1] == 0xa1a0a0d) {
            return 8;
          }
        }
        else if (iVar2 == 0x736e6369) {
          return 6;
        }
        sVar1 = (short)*piVar4;
        if ((((sVar1 != 0x4142) && (sVar1 != 0x4349)) && (sVar1 != 0x4943)) &&
           ((sVar1 != 0x4950 && (sVar1 != 0x4d42)))) {
          if (sVar1 == 0x4fff) {
            return 2;
          }
          if (sVar1 != 0x5043) {
            iVar2 = _memcmp(piVar4,s__000ee1fe,3);
            if (iVar2 == 0) {
              return 1;
            }
            iVar2 = _memcmp(piVar4 + 1,"jP  \r",5);
            if (iVar2 == 0) {
              return 2;
            }
            return 0;
          }
        }
        local_18 = 4;
      }
    }
  }
  return local_18;
}

