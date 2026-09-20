// FUN_0075a080 @ 0075a080

void FUN_0075a080(undefined8 param_1,undefined8 param_2)

{
  undefined8 **ppuVar1;
  undefined8 **ppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 **local_50;
  undefined8 **local_48;
  undefined8 **local_40 [3];
  undefined8 **local_28;
  undefined8 **local_20;
  undefined8 **local_18;
  
  local_18 = (undefined8 ***)0x0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = (undefined8 ***)0x0;
  _objc_storeStrong(&local_20,param_2);
  pppuVar3 = (undefined8 ***)local_18;
  FUN_00743f78();
  _objc_retainAutoreleasedReturnValue();
  pppuVar4 = (undefined8 ***)local_20;
  local_28 = pppuVar3;
  FUN_00743f78();
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = pppuVar4;
  (*(code *)PTR__objc_msgSend_02578628)(pppuVar4,PTR_s_length_0269cca0);
  if (pppuVar4 == (undefined8 ***)0x0) {
    pppuVar4 = (undefined8 ***)local_28;
    FUN_00744988();
    if (((ulong)pppuVar4 & 1) == 0) {
      pppuVar4 = local_40;
      _objc_storeStrong(pppuVar4,local_28);
    }
  }
  FUN_0074998c();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = local_28;
  local_70 = PTR___NSConcreteGlobalBlock_02578658;
  local_68 = 0xd0800000;
  local_64 = 0;
  local_60 = FUN_0075a98c;
  local_58 = &DAT_0257ab20;
  (*(code *)PTR__objc_retain_02578638)();
  ppuVar1 = local_40[0];
  local_50 = ppuVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = ppuVar1;
  _dispatch_sync(pppuVar4,&local_70);
  (*(code *)PTR__objc_release_02578630)(pppuVar4);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(local_40,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

