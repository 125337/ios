// FUN_006a5f9c @ 006a5f9c

void FUN_006a5f9c(ulong param_1)

{
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  
  if (param_1 != 0) {
    uVar1 = param_1;
    _object_getClass();
    pcVar2 = "handleContent:withUserInfo:identifier:trigger:completion:";
    _sel_registerName();
    pcVar3 = "handleContent:withUserInfo:identifier:soundName:trigger:completion:";
    _sel_registerName();
    pcVar4 = "handleContent:fromNotFrient:withUserInfo:identifier:soundName:trigger:completion:";
    _sel_registerName();
    uVar5 = param_1;
    FUN_006a60d0(param_1,pcVar2,FUN_006a6f7c,&DAT_028cbe80);
    if ((uVar5 & 1) == 0) {
      FUN_006a60d0(uVar1,pcVar2,FUN_006a6f7c,&DAT_028cbe80);
    }
    uVar5 = param_1;
    FUN_006a60d0(param_1,pcVar3,FUN_006a714c,&DAT_028cbe88);
    if ((uVar5 & 1) == 0) {
      FUN_006a60d0(uVar1,pcVar3,FUN_006a714c,&DAT_028cbe88);
    }
    FUN_006a60d0(param_1,pcVar4,FUN_006a7350,&DAT_028cbe90);
    if ((param_1 & 1) == 0) {
      FUN_006a60d0(uVar1,pcVar4,FUN_006a7350,&DAT_028cbe90);
    }
  }
  return;
}

