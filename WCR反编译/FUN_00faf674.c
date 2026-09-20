// FUN_00faf674 @ 00faf674

void FUN_00faf674(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSData_026ce1d0;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,
             *(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___dispatch_main_q_02578680;
  local_28 = puVar1;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_retain_02578638)();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  local_48 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  puVar1 = local_28;
  local_40 = uVar4;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = puVar1;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = uVar3;
  _dispatch_async(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_28,0);
  return;
}

