// FUN_002a57d4 @ 002a57d4

void FUN_002a57d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 local_30;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  (*DAT_028c9690)(local_18,local_20,local_28,local_30);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tabBar_0269e518);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_002bad18();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tabBar_0269e518);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedIndex_0269e580);
    uVar3 = uVar1;
    FUN_002d629c(uVar1,uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tabBar_0269e518);
    _objc_retainAutoreleasedReturnValue();
    FUN_002bb194();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tabBar_0269e518);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedIndex_0269e580);
    FUN_002d5fe4(uVar1,uVar2,0,(uint)uVar3 & 1);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

