// wcrMakeGlassBarWithHeight: @ 0166163c

/* Function Stack Size: 0x18 bytes */

ID WCRSuperFloatCropViewController::wcrMakeGlassBarWithHeight_
             (ID param_1,SEL param_2,double param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double in_d2;
  double dVar5;
  double local_110;
  undefined *local_a8;
  double local_a0;
  double local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double local_70;
  undefined *local_68;
  double local_60;
  double local_40;
  double local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_60 = param_3;
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_40 = in_d2 - 24.0;
  _objc_alloc();
  local_8c = 200;
  local_98 = local_40;
  if (local_40 <= 200.0) {
    local_110 = 200.0;
  }
  else {
    local_110 = local_40;
  }
  local_a0 = local_110;
  uVar3 = 0x4028000000000000;
  uVar4 = 0;
  dVar5 = local_38;
  FUN_0163f5dc();
  local_88 = uVar3;
  local_80 = uVar4;
  local_78 = local_110;
  local_70 = dVar5;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_68 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x4030000000000000;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setClipsToBounds__026ca8c8,1);
  puVar1 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
  _objc_alloc();
  puVar2 = puVar1;
  FUN_0163f654();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithEffect__026ca6e0);
  local_a8 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_bounds_026ca548);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,uVar4,local_110,dVar5,local_a8,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setAutoresizingMask__026ca878,0x12);
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setTag__026caa80,0x7c4);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_addSubview__026ca4c0,local_a8);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setHidden__026ca970,1);
  puVar1 = local_68;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_a8);
  _objc_storeStrong(&local_68,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

