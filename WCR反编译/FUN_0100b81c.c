// FUN_0100b81c @ 0100b81c

void FUN_0100b81c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  lVar2 = *(long *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_dataSize_026adaa8);
  (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
  _objc_storeStrong(&local_20,0);
  return;
}

