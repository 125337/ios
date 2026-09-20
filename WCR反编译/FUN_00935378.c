// FUN_00935378 @ 00935378

void FUN_00935378(int param_1)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined *local_28;
  size_t local_20;
  
  iVar1 = DAT_028d23d0;
  if (((-1 < param_1) && (0 < DAT_028d23d0)) && (DAT_028d23d0 < 0x3000)) {
    FUN_00935218(DAT_028d23d0 + -0x3000,param_1,"LastObjCException:\n");
    local_20 = (size_t)iVar1;
    local_28 = &DAT_028cf3c4;
    do {
      while( true ) {
        if (local_20 == 0) goto LAB_0093546c;
        sVar2 = _write(param_1,local_28,local_20);
        if (sVar2 < 0) break;
        if (sVar2 == 0) goto LAB_0093546c;
        local_28 = local_28 + sVar2;
        local_20 = local_20 - sVar2;
      }
      piVar3 = ___error();
    } while (*piVar3 == 4);
LAB_0093546c:
    if ((char)(&DAT_028cf3c4)[iVar1 + -1] + -10 != 0) {
      FUN_00935218((char)(&DAT_028cf3c4)[iVar1 + -1] + -10,param_1,"\n");
    }
  }
  return;
}

