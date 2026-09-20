// FUN_0026b798 @ 0026b798

byte FUN_0026b798(undefined8 param_1,long param_2,byte param_3)

{
  ulong uVar1;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (((local_20 != 0) && (param_2 != 0)) &&
     (uVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,param_2),
     (uVar1 & 1) != 0)) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,param_2);
    param_3 = (byte)uVar1;
  }
  local_11 = param_3 & 1;
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

