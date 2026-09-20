// FUN_00228dfc @ 00228dfc

void FUN_00228dfc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_58;
  ulong local_50 [3];
  ulong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = uVar1;
  uVar2 = local_18;
  FUN_00232700();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar2;
  if (uVar2 == 0) goto LAB_00228fec;
  FUN_0023001c();
  _objc_retainAutoreleasedReturnValue();
  local_50[0] = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
LAB_00228fac:
    _objc_setAssociatedObject(local_38,DAT_026dfb40,0,1);
  }
  else {
    uVar3 = local_50[0];
    FUN_00230c84(uVar2);
    if ((uVar3 & 1) == 0) goto LAB_00228fac;
    uVar2 = local_50[0];
    FUN_0022bbc4();
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar2;
    if (uVar2 == 0) {
      _objc_setAssociatedObject(local_38,DAT_026dfb40,0,1);
    }
    else {
      _objc_storeStrong(&local_30,uVar2);
      _objc_setAssociatedObject(local_38,DAT_026dfb40,local_50[0],3);
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(local_50,0);
LAB_00228fec:
  (*DAT_028c9208)(local_18,local_20,local_30);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

