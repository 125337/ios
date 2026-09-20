// FUN_002c2b78 @ 002c2b78

void FUN_002c2b78(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_68 [3];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined *local_28;
  
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  uStack_48 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 8);
  local_50 = *(undefined8 *)PTR__CGRectZero_025782f0;
  uStack_38 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18);
  local_40 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,uStack_48,local_40,uStack_38);
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTag__026caa80,DAT_02323fb0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setUserInteractionEnabled__026caad8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setClipsToBounds__026ca8c8,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_28;
  FUN_002c8edc();
  _objc_unsafeClaimAutoreleasedReturnValue(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
  _objc_alloc();
  uStack_88 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 8);
  local_90 = *(undefined8 *)PTR__CGRectZero_025782f0;
  uStack_78 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18);
  local_80 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_90,uStack_88,local_80,uStack_78,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_68[0] = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTag__026caa80,DAT_02323fb8);
  (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_setUserInteractionEnabled__026caad8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_setClipsToBounds__026ca8c8,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_setContentMode__026ca8e0,2);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addSubview__026ca4c0,local_68[0]);
  puVar1 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIBlurEffect_026cdf90;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIBlurEffect_026cdf90,PTR_s_effectWithStyle__026ca628,8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithEffect__026ca6e0);
  local_98 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setTag__026caa80,DAT_02323fc0);
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setUserInteractionEnabled__026caad8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setClipsToBounds__026ca8c8,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addSubview__026ca4c0,local_98);
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
             *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
             *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18),puVar1,PTR_s_initWithFrame__026ca6e8);
  local_a0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTag__026caa80,DAT_02323fc8);
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setUserInteractionEnabled__026caad8,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addSubview__026ca4c0,local_a0);
  puVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_a0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(local_68,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

