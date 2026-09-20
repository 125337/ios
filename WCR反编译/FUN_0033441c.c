// FUN_0033441c @ 0033441c

uint FUN_0033441c(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  uint local_50;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  pcVar1 = "MMMsgTipsMixedListExpandView";
  _objc_getClass();
  pcVar2 = "MMMsgTipsExpandView";
  _objc_getClass();
  uVar3 = local_18;
  FUN_00334934(local_18,pcVar1);
  local_50 = 1;
  if ((uVar3 & 1) == 0) {
    uVar3 = local_18;
    FUN_00334934(local_18,pcVar2);
    local_50 = (uint)uVar3;
  }
  _objc_storeStrong(&local_18,0);
  return local_50 & 1;
}

