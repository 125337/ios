// FUN_0019d024 @ 0019d024

void FUN_0019d024(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *local_78 [3];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_30 = param_1;
  uStack_28 = param_2;
  local_20 = param_3;
  uStack_18 = param_4;
  _objc_alloc();
  uStack_58 = uStack_28;
  local_60 = local_30;
  uStack_48 = uStack_18;
  local_50 = local_20;
  uVar2 = local_30;
  uVar3 = uStack_28;
  uVar4 = local_20;
  uVar5 = uStack_18;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTag__026caa80,DAT_02323dd8);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setUserInteractionEnabled__026caad8,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setClipsToBounds__026ca8c8,0);
  puVar1 = PTR_WCRefineContactsPackAvatarImageView_026ce3a0;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,uVar3,uVar4,uVar5,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_78[0] = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTag__026caa80,DAT_02323de0);
  (*(code *)PTR__objc_msgSend_02578628)(local_78[0],PTR_s_setAutoresizingMask__026ca878,0x12);
  (*(code *)PTR__objc_msgSend_02578628)(local_78[0],PTR_s_setContentMode__026ca8e0,2);
  (*(code *)PTR__objc_msgSend_02578628)(local_78[0],PTR_s_setClipsToBounds__026ca8c8,1);
  FUN_0019d350(local_78[0]);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addSubview__026ca4c0,local_78[0]);
  puVar1 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(local_78);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

