// FUN_006a5e3c @ 006a5e3c

void FUN_006a5e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  plVar5 = &local_30;
  local_30 = 0;
  _objc_storeStrong(plVar5,param_4);
  if ((local_30 == 0) ||
     (FUN_006a6764(), uVar4 = local_18, uVar3 = local_20, uVar2 = local_28, pcVar1 = DAT_028cbe68,
     ((ulong)plVar5 & 1) == 0)) {
    (*DAT_028cbe68)(local_18,local_20,local_28,local_30);
  }
  else {
    lVar6 = local_30;
    _objc_retainBlock();
    uVar7 = uVar2;
    FUN_006a67d4(uVar2,0);
    _objc_retainAutoreleasedReturnValue();
    (*pcVar1)(uVar4,uVar3,uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar7);
    (*(code *)PTR__objc_release_02578630)(lVar6);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

