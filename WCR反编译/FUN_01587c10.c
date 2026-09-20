// FUN_01587c10 @ 01587c10

void FUN_01587c10(undefined8 param_1,byte param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined **local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined **local_48;
  undefined8 local_40;
  long local_38;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_38 = 0;
  local_29 = param_2;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  uVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar4);
  uVar4 = local_40;
  ppuVar5 = &local_78;
  local_78 = PTR___NSConcreteStackBlock_02578660;
  local_70 = 0xc2000000;
  local_6c = 0;
  local_68 = FUN_01587e8c;
  local_60 = &DAT_0257ca68;
  (*(code *)PTR__objc_retain_02578638)();
  uVar3 = local_28;
  local_50 = uVar4;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = uVar3;
  _objc_retainBlock();
  lVar2 = local_38;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_48 = ppuVar5;
  if ((local_29 & 1) == 0) {
    (**(code **)(local_38 + 0x10))();
    (*(code *)local_48[2])();
  }
  else {
    local_a0 = PTR___NSConcreteStackBlock_02578660;
    local_98 = 0xc2000000;
    local_94 = 0;
    local_90 = FUN_0158809c;
    local_88 = &DAT_0257ca98;
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = ppuVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323c70,0,puVar1,PTR_s_animateWithDuration_delay_option_026ca4f0,&DAT_00020004,
               lVar2,&local_a0);
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

