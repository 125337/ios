// FUN_00904ecc @ 00904ecc

void FUN_00904ecc(long param_1)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined8 local_38 [3];
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_minimize_026a9f98);
  dVar1 = _dispatch_time(0,200000000);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = FUN_00905034;
  local_40 = &DAT_0257a800;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_38[0] = uVar3;
  _dispatch_after(dVar1,puVar2,&local_58);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(local_38,0);
  return;
}

