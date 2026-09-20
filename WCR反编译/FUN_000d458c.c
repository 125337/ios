// FUN_000d458c @ 000d458c

byte FUN_000d458c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_20;
  _objc_getAssociatedObject(local_20,&DAT_028c8370);
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    lVar1 = local_20;
    (*DAT_028c82d8)(local_20,local_28,local_30);
    local_11 = (byte)lVar1;
  }
  else {
    uVar2 = local_30;
    FUN_000db4b0(lVar1,local_30,local_38);
    local_11 = (byte)uVar2;
  }
  local_11 = local_11 & 1;
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

