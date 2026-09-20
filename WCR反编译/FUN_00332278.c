// FUN_00332278 @ 00332278

void FUN_00332278(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  code *pcVar2;
  code *local_18;
  
  local_18 = (code *)0x0;
  _objc_storeStrong(&local_18,param_1);
  pcVar1 = local_18;
  FUN_00332558(local_18,param_2);
  pcVar2 = (code *)0x0;
  if (pcVar1 != (code *)0x0) {
    pcVar2 = local_18;
    (*pcVar1)(local_18,param_2);
  }
  FUN_00331804();
  if (((ulong)pcVar2 & 1) != 0) {
    FUN_00331b94(local_18);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

