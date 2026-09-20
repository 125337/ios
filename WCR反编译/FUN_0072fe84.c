// FUN_0072fe84 @ 0072fe84

void FUN_0072fe84(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_18;
  FUN_0073649c();
  if ((uVar1 & 1) != 0) {
    lVar2 = local_28;
    FUN_007312a4();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar2);
    if (lVar3 != 0) goto LAB_0072ff8c;
  }
  (*DAT_028cc4e0)(local_18,local_20,local_28);
LAB_0072ff8c:
  _objc_storeStrong(&local_28,0);
  return;
}

