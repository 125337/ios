// unreadDotColorPreview @ 01cb58bc

/* Function Stack Size: 0x10 bytes */

ID WCRefinePrivateFriendViewController::unreadDotColorPreview(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_130;
  undefined *local_108;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  undefined *local_60;
  byte local_51;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  puVar1 = PTR_WCRefineColorPickerController_026ceed8;
  local_30 = param_2;
  local_28 = param_1;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_38;
  local_40 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_unreadDotColorLight_026af0e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_colorFromHexString__026b30d8);
  _objc_retainAutoreleasedReturnValue();
  local_51 = 0;
  local_108 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_108 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_108;
  }
  local_51 = puVar1 == (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_108;
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = local_38;
  puVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_unreadDotColorDark_026af0d8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_colorFromHexString__026b30d8);
  _objc_retainAutoreleasedReturnValue();
  local_69 = 0;
  local_130 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_130 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_130;
  }
  local_69 = puVar1 == (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_130;
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  uVar4 = 0;
  uVar3 = 0;
  uVar5 = 0x4046000000000000;
  uVar6 = 0x4034000000000000;
  FUN_01cb6050();
  local_98 = uVar3;
  local_90 = uVar4;
  local_88 = uVar5;
  local_80 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,uVar4,uVar5,uVar6,puVar1,PTR_s_initWithFrame__026ca6e8);
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_78 = puVar1;
  _objc_alloc();
  uVar5 = 0;
  uVar6 = 0x4034000000000000;
  uVar3 = uVar5;
  uVar4 = uVar6;
  FUN_01cb6050();
  local_c0 = uVar5;
  local_b8 = uVar3;
  local_b0 = uVar6;
  local_a8 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar3,uVar6,uVar4,puVar2,PTR_s_initWithFrame__026ca6e8);
  local_a0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_CGColor_026ca470);
  puVar2 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setBackgroundColor__026ca888,local_48);
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  uVar5 = 0;
  uVar6 = 0x4034000000000000;
  uVar4 = 0x4038000000000000;
  uVar3 = uVar6;
  FUN_01cb6050();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,uVar5,uVar6,uVar3,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_c8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4024000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_CGColor_026ca470);
  puVar2 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setBackgroundColor__026ca888,local_60);
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_addSubview__026ca4c0,local_a0);
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_addSubview__026ca4c0,local_c8);
  puVar1 = local_78;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

