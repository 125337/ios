// FUN_00eb34a4 @ 00eb34a4

/* WARNING: Type propagation algorithm not settling */

void FUN_00eb34a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *local_a0;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined8 local_58;
  byte local_49;
  undefined *local_48;
  undefined *local_40;
  long local_38;
  long local_30 [4];
  
  local_30[2] = 0;
  local_30[3] = param_1;
  _objc_storeStrong(local_30 + 2);
  local_30[1] = 0;
  _objc_storeStrong(local_30 + 1,param_3);
  local_30[0] = 0;
  _objc_storeStrong(local_30,param_4);
  local_49 = 0;
  local_38 = param_1;
  if (local_30[0] == 0) {
    lVar2 = local_30[2];
    (*(code *)PTR__objc_msgSend_02578628)(local_30[2],PTR_s_length_0269cca0);
    if (lVar2 != 0) {
      local_a0 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,local_30[2]);
      _objc_retainAutoreleasedReturnValue();
      local_49 = 1;
      local_48 = local_a0;
      goto LAB_00eb3588;
    }
  }
  local_a0 = (undefined *)0x0;
LAB_00eb3588:
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_a0;
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  puVar3 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_80 = PTR___NSConcreteStackBlock_02578660;
  local_78 = 0xc2000000;
  local_74 = 0;
  local_70 = FUN_00eb36e8;
  local_68 = &DAT_0257ca68;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  puVar1 = local_40;
  local_58 = uVar4;
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = puVar1;
  _dispatch_async(puVar3,&local_80);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(local_30,0);
  _objc_storeStrong(local_30 + 1,0);
  _objc_storeStrong(local_30 + 2,0);
  return;
}

