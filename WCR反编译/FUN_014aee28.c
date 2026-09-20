// FUN_014aee28 @ 014aee28

void FUN_014aee28(long param_1,undefined1 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_28;
  undefined1 local_19;
  long local_18;
  
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_014aef74;
  local_38 = &DAT_0257a800;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_28 = param_1;
  local_19 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  local_30 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = *(undefined8 *)(param_1 + 0x30);
  local_60 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fe0000000000000,puVar1,PTR_s_animateWithDuration_animations_c_026ca4e8,&local_50);
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_30,0);
  return;
}

