// FUN_0056c6b0 @ 0056c6b0

void FUN_0056c6b0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  long local_58;
  int local_50;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  lVar4 = param_1 + 0x28;
  local_38 = param_1;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  puVar1 = PTR___NSConcreteStackBlock_02578660;
  local_40 = lVar4;
  if (lVar4 == 0) {
    lVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if ((lVar4 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),local_30);
    }
    local_50 = 1;
  }
  else {
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_0056c99c;
    local_60 = &DAT_02578c20;
    (*(code *)PTR__objc_retain_02578638)();
    lVar3 = local_40;
    local_b0 = puVar1;
    local_a8 = 0xc2000000;
    local_a4 = 0;
    local_a0 = FUN_0056c9e0;
    local_98 = &DAT_0257ddf8;
    local_58 = lVar4;
    (*(code *)PTR__objc_retain_02578638)();
    lVar4 = local_30;
    local_90 = lVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = lVar4;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323c70,puVar2,PTR_s_animateWithDuration_animations_c_026ca4e8,&local_78,
               &local_b0);
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_58,0);
    local_50 = 0;
  }
  _objc_storeStrong(&local_40,0);
  if (local_50 == 0) {
    local_50 = 0;
  }
  _objc_storeStrong(&local_30,0);
  return;
}

