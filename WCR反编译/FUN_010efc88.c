// FUN_010efc88 @ 010efc88

void FUN_010efc88(undefined8 param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 **local_18;
  
  pppuVar1 = &local_18;
  local_18 = (undefined8 ***)0x0;
  _objc_storeStrong(pppuVar1,param_1);
  if (DAT_028e3450 != (code *)0x0) {
    pppuVar1 = (undefined8 ***)local_18;
    (*DAT_028e3450)(local_18,param_2);
  }
  FUN_010ee7b0();
  if (((ulong)pppuVar1 & 1) != 0) {
    DAT_028e3440 = 1;
    FUN_010eea6c(local_18);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

