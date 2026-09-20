// FUN_0064b4c0 @ 0064b4c0

void FUN_0064b4c0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_38 [3];
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  FUN_006620a0();
  if ((param_1 & 1) == 0) {
    (*DAT_028cbb88)(local_18,local_20);
  }
  else {
    uVar1 = local_18;
    FUN_0066e298();
    _objc_retainAutoreleasedReturnValue();
    FUN_0066b2cc();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*DAT_028cbb88)(local_18,local_20);
    FUN_00657450(&cf_H);
    uVar1 = local_18;
    FUN_0066e298();
    _objc_retainAutoreleasedReturnValue();
    local_38[0] = uVar1;
    FUN_0066c6c4();
    if ((uVar1 & 1) != 0) {
      FUN_0066d09c(local_18,local_38[0]);
    }
    FUN_0066dcbc(local_18,0,&cf_updateMessageForChatRoom);
    _objc_storeStrong(local_38,0);
  }
  return;
}

