// FUN_000699e4 @ 000699e4

void FUN_000699e4(undefined8 param_1,undefined8 param_2,code *param_3)

{
  ulong uVar1;
  ulong local_30;
  code *local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  local_28 = param_3;
  local_20 = param_2;
  _objc_getAssociatedObject(local_18,&DAT_028c7cb0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_handleWillBeginDragging_0269de00);
  if (local_28 != (code *)0x0) {
    uVar1 = local_18;
    (*local_28)(local_18,local_20);
  }
  FUN_00068df4();
  FUN_00067398();
  if ((uVar1 & 1) != 0) {
    FUN_00069244(local_18);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_18,0);
  return;
}

