// FUN_0112a980 @ 0112a980

void FUN_0112a980(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  byte local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = FUN_0112ab88;
  local_40 = &DAT_0257a800;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_30 = param_1;
  local_28 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  local_38 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  local_80 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = *(byte *)(param_1 + 0x40) & 1;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  local_78 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  local_70 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fd3333333333333,0,puVar1,PTR_s_animateWithDuration_delay_option_026ca4f0,0x10000,
             &local_58);
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_38,0);
  return;
}

