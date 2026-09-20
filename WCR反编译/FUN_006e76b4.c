// FUN_006e76b4 @ 006e76b4

void FUN_006e76b4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  puVar1 = PTR___NSConcreteStackBlock_02578660;
  local_48 = PTR___NSConcreteStackBlock_02578660;
  local_40 = 0xc2000000;
  local_3c = 0;
  local_38 = FUN_006e7830;
  local_30 = &DAT_02578c20;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = puVar1;
  local_68 = 0xc2000000;
  local_64 = 0;
  local_60 = FUN_006e790c;
  local_58 = &DAT_025790c0;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  local_28 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323e88,0,puVar2,PTR_s_animateWithDuration_delay_option_026ca4f0,0x10000,&local_48
             ,&local_70);
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_28,0);
  return;
}

