// FUN_00689ab4 @ 00689ab4

void FUN_00689ab4(byte param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 local_40;
  undefined8 local_38;
  byte local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  local_11 = param_1;
  _objc_storeStrong();
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  puVar3 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = local_20;
  local_38 = uVar1;
  local_30 = local_11 & 1;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = uVar2;
  _dispatch_async(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

