// FUN_002aef14 @ 002aef14

void FUN_002aef14(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_60;
  undefined *local_58 [3];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined *local_18;
  
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  uStack_38 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 8);
  local_40 = *(undefined8 *)PTR__CGRectZero_025782f0;
  uStack_28 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18);
  local_30 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,uStack_38,local_30,uStack_28);
  local_18 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTag__026caa80,DAT_02323f98);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setUserInteractionEnabled__026caad8,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setClipsToBounds__026ca8c8,0);
  puVar1 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIBlurEffect_026cdf90;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIBlurEffect_026cdf90,PTR_s_effectWithStyle__026ca628,7);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithEffect__026ca6e0);
  local_58[0] = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setTag__026caa80,DAT_02323fa0);
  (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setUserInteractionEnabled__026caad8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setClipsToBounds__026ca8c8,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_addSubview__026ca4c0,local_58[0]);
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
             *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18),puVar1,PTR_s_initWithFrame__026ca6e8);
  local_60 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTag__026caa80,DAT_02323fa8);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setUserInteractionEnabled__026caad8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setClipsToBounds__026ca8c8,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_addSubview__026ca4c0,local_60);
  puVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  FUN_002b0928();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_60);
  _objc_storeStrong(local_58,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

