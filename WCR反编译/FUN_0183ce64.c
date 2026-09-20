// FUN_0183ce64 @ 0183ce64

/* WARNING: Type propagation algorithm not settling */

void FUN_0183ce64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *local_c8;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  long local_88;
  undefined8 local_80;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  undefined *local_60;
  int local_54;
  long local_50;
  long local_48;
  long local_40 [4];
  
  local_40[2] = 0;
  local_40[3] = param_1;
  _objc_storeStrong(local_40 + 2);
  local_40[1] = 0;
  _objc_storeStrong(local_40 + 1,param_3);
  local_40[0] = 0;
  _objc_storeStrong(local_40,param_4);
  lVar2 = param_1 + 0x28;
  local_48 = param_1;
  _objc_loadWeakRetained();
  local_50 = lVar2;
  if (lVar2 == 0) {
    local_54 = 1;
    goto LAB_0183d0e0;
  }
  local_69 = 0;
  if (local_40[0] == 0) {
    lVar2 = local_40[2];
    (*(code *)PTR__objc_msgSend_02578628)(local_40[2],PTR_s_length_0269cca0);
    if (lVar2 == 0) goto LAB_0183cf68;
    local_c8 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,local_40[2]);
    _objc_retainAutoreleasedReturnValue();
    local_69 = 1;
    local_68 = local_c8;
  }
  else {
LAB_0183cf68:
    local_c8 = (undefined *)0x0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_c8;
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  puVar3 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_50;
  local_a8 = PTR___NSConcreteStackBlock_02578660;
  local_a0 = 0xc2000000;
  local_9c = 0;
  local_98 = FUN_0183d138;
  local_90 = &DAT_025839b0;
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = lVar2;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  puVar1 = local_60;
  local_80 = uVar4;
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = puVar1;
  _dispatch_async(puVar3,&local_a8);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_60,0);
  local_54 = 0;
LAB_0183d0e0:
  _objc_storeStrong(&local_50,0);
  if (local_54 == 0) {
    local_54 = 0;
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(local_40 + 1,0);
  _objc_storeStrong(local_40 + 2,0);
  return;
}

