// FUN_01bf509c @ 01bf509c

/* WARNING: Type propagation algorithm not settling */

void FUN_01bf509c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long local_30 [4];
  
  local_30[2] = 0;
  local_30[3] = param_1;
  _objc_storeStrong(local_30 + 2);
  local_30[1] = 0;
  _objc_storeStrong(local_30 + 1,param_3);
  local_30[0] = 0;
  _objc_storeStrong(local_30,param_4);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_row_0269e210);
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_wcr_scheduleDraftAtIndex__026c0b30,uVar2);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  if (local_30[0] != 0) {
    (**(code **)(local_30[0] + 0x10))(local_30[0],1);
  }
  _objc_storeStrong(local_30);
  _objc_storeStrong(local_30 + 1,0);
  _objc_storeStrong(local_30 + 2,0);
  return;
}

