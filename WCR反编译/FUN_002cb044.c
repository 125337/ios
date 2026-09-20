// FUN_002cb044 @ 002cb044

void FUN_002cb044(void)

{
  undefined *puVar1;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
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
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTag__026caa80,DAT_02323fe0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setUserInteractionEnabled__026caad8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setClipsToBounds__026ca8c8,1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
  _objc_alloc();
  uStack_78 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 8);
  local_80 = *(undefined8 *)PTR__CGRectZero_025782f0;
  uStack_68 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18);
  local_70 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_80,uStack_78,local_70,uStack_68,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_58[0] = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTag__026caa80,DAT_02323fb8);
  (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setUserInteractionEnabled__026caad8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setContentMode__026ca8e0,2);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_addSubview__026ca4c0,local_58[0]);
  puVar1 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithEffect__026ca6e0,0);
  local_88 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTag__026caa80,DAT_02323fc0);
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setUserInteractionEnabled__026caad8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_addSubview__026ca4c0,local_88);
  puVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_88);
  _objc_storeStrong(local_58,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

