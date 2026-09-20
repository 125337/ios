// FUN_01827ef8 @ 01827ef8

/* WARNING: Type propagation algorithm not settling */

void FUN_01827ef8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  long local_78;
  undefined8 local_70;
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
  lVar1 = param_1 + 0x28;
  local_48 = param_1;
  _objc_loadWeakRetained();
  local_50 = lVar1;
  if (lVar1 == 0) {
    local_54 = 1;
  }
  else {
    local_60 = (undefined *)0x0;
    if (local_40[0] == 0) {
      lVar1 = local_40[2];
      (*(code *)PTR__objc_msgSend_02578628)(local_40[2],PTR_s_length_0269cca0);
      if (lVar1 != 0) {
        puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,local_40[2]);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_60;
        local_60 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
    }
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_50;
    local_98 = PTR___NSConcreteStackBlock_02578660;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_01828174;
    local_80 = &DAT_025839b0;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = lVar1;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    puVar2 = local_60;
    local_70 = uVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = puVar2;
    _dispatch_async(puVar3,&local_98);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_60,0);
    local_54 = 0;
  }
  _objc_storeStrong(&local_50,0);
  if (local_54 == 0) {
    local_54 = 0;
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(local_40 + 1,0);
  _objc_storeStrong(local_40 + 2,0);
  return;
}

