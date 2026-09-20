// FUN_00021e10 @ 00021e10

byte FUN_00021e10(undefined8 param_1,ulong *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_48 [3];
  undefined *local_30;
  ulong *local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = PTR_WCRefineAIStore_026ce048;
  local_28 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_0001a2e4();
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar4 = local_20;
  FUN_0001a2e4();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_30;
  local_48[0] = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (((puVar1 == (undefined *)0x0) ||
      (uVar4 = local_48[0], (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_length_0269cca0)
      , uVar4 == 0)) ||
     (uVar5 = local_48[0],
     (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_hasPrefix__0269d320,local_30),
     uVar4 = local_48[0], (uVar5 & 1) == 0)) {
    local_11 = 0;
  }
  else {
    if (local_28 != (ulong *)0x0) {
      puVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_substringFromIndex__0269d120,puVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      FUN_0001a2e4();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *local_28 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    local_11 = 1;
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

