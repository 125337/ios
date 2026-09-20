// FUN_021c4cb0 @ 021c4cb0

/* WARNING: Removing unreachable block (ram,0x021c4e2c) */

undefined8 FUN_021c4cb0(undefined8 param_1)

{
  char *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 local_e0;
  long local_d0;
  undefined8 local_c8;
  long local_90;
  long local_88;
  long local_70 [4];
  char *local_50;
  undefined8 local_48;
  undefined1 auStack_40 [24];
  long local_28;
  
  local_70[1] = 0;
  pcVar1 = "fanBlurStyle";
  uVar3 = 0xc;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("fanBlurStyle",0xc,1);
  local_50 = pcVar1;
  local_48 = uVar3;
  __sSDyq_Sgxcig(auStack_40,&local_50,param_1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                 PTR___sSSSHsWP_02578940);
  FUN_021c7f98(&local_50);
  if (local_28 == 0) {
    FUN_021c7fc0(auStack_40);
    local_90 = 0;
  }
  else {
    uVar3 = 0;
    FUN_021c80bc(0);
    plVar2 = local_70;
    _swift_dynamicCast(plVar2,auStack_40,PTR___sypN_02578b08 + 8,uVar3,6);
    if (((ulong)plVar2 & 1) == 0) {
      local_88 = 0;
    }
    else {
      local_88 = local_70[0];
    }
    local_90 = local_88;
  }
  if (local_90 == 0) {
    local_d0 = 0;
  }
  else {
    local_d0 = local_90;
    FUN_02222880(local_90,local_c8);
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  if (local_d0 == 1) {
    local_e0 = 7;
  }
  else if (local_d0 == 2) {
    local_e0 = 9;
  }
  else if (local_d0 == 3) {
    local_e0 = 10;
  }
  else if (local_d0 == 4) {
    local_e0 = 6;
  }
  else if (local_d0 == 5) {
    local_e0 = 0x12;
  }
  else if (local_d0 == 6) {
    local_e0 = 0xd;
  }
  else {
    local_e0 = 8;
  }
  return local_e0;
}

