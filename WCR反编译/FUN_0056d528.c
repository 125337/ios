// FUN_0056d528 @ 0056d528

void FUN_0056d528(long param_1,undefined1 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined1 auStack_58 [8];
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_28;
  undefined1 local_19;
  long local_18;
  
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  puVar1 = PTR___NSConcreteStackBlock_02578660;
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_0056d68c;
  local_38 = &DAT_02578c20;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  local_28 = param_1;
  local_19 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = puVar1;
  local_70 = 0xc2000000;
  local_6c = 0;
  local_68 = FUN_0056d7cc;
  local_60 = &DAT_0257c158;
  local_30 = uVar3;
  _objc_copyWeak(auStack_58,param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323d00,DAT_02323c68,puVar2,PTR_s_animateWithDuration_delay_option_026ca4f0,0,
             &local_50,&local_78);
  _objc_destroyWeak(auStack_58);
  _objc_storeStrong(&local_30,0);
  return;
}

