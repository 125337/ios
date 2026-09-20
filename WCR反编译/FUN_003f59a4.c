// FUN_003f59a4 @ 003f59a4

byte FUN_003f59a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *local_28;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_5);
  puVar3 = PTR_WCRefineInputBoxGestureSupport_026ce678;
  uVar2 = local_20;
  FUN_003f1f7c();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_innerTextViewFromGrowTextView__026a3440);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  puVar3 = local_28;
  FUN_003f51d0();
  if (((ulong)puVar3 & 1) == 0) {
    local_11 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
    uVar2 = local_20;
    uVar4 = param_4;
    uVar5 = param_3;
    FUN_003f8e9c(local_20,local_28);
    bVar1 = (byte)uVar2;
    _CGRectContainsPoint(param_1,param_2,param_3,param_4,uVar4,uVar5);
    local_11 = bVar1 & 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

