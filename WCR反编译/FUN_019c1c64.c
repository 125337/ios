// FUN_019c1c64 @ 019c1c64

void FUN_019c1c64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long local_38;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = param_1 + 0x20;
  local_30 = param_1;
  _objc_loadWeakRetained();
  local_38 = lVar1;
  if (lVar1 == 0) {
    if (local_28 != 0) {
      (**(code **)(local_28 + 0x10))();
    }
  }
  else {
    lVar2 = local_28;
    _objc_retainBlock();
    _objc_setAssociatedObject(lVar1,&DAT_028e4441,lVar2,3);
    (*(code *)PTR__objc_release_02578630)(lVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_showFloatingExtraLongPressCustom_026bac60);
  }
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

