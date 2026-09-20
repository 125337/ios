// FUN_00157448 @ 00157448

void FUN_00157448(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 *puVar2;
  
  puVar2 = &local_28;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(puVar2,param_3);
  uVar1 = (uint)puVar2;
  FUN_0015aa74();
  if ((uVar1 & 1) != 0) {
    DAT_028c8858 = 1;
  }
  (*DAT_028c87f0)(local_18,local_20,local_28);
  if ((uVar1 & 1) != 0) {
    dVar3 = _dispatch_time(0,1500000000);
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_after(dVar3,puVar4,&PTR___NSConcreteGlobalBlock_0257a610);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

