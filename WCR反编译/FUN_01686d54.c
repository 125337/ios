// FUN_01686d54 @ 01686d54

void FUN_01686d54(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined8 local_18;
  
  DAT_028e3d28 = 1;
  FUN_01686e24();
  uVar2 = 0;
  _dispatch_block_create(0,&PTR___NSConcreteGlobalBlock_02587da0);
  local_18 = uVar2;
  _objc_retainBlock();
  uVar1 = DAT_028e3ce0;
  DAT_028e3ce0 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  dVar3 = _dispatch_time(0,2000000000);
  puVar4 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_after(dVar3,puVar4,local_18);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  FUN_01685990();
  _objc_storeStrong(&local_18,0);
  return;
}

