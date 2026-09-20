// FUN_007838c0 @ 007838c0

byte FUN_007838c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint local_64;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  long local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  lVar1 = local_30;
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcrefine_swipeGesture_026a7fb8);
  _objc_retainAutoreleasedReturnValue();
  local_64 = 0;
  if (lVar1 == lVar2) {
    uVar3 = local_38;
    FUN_00790408(0);
    local_64 = (uint)uVar3;
  }
  (*(code *)PTR__objc_release_02578630)(lVar2);
  local_11 = (local_64 & 1) == 0;
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

