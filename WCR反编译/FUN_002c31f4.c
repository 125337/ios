// FUN_002c31f4 @ 002c31f4

void FUN_002c31f4(void)

{
  undefined8 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined *local_40 [3];
  undefined *local_28;
  
  uVar1 = DAT_02323f60;
  puVar3 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTag__026caa80,DAT_02323fd8);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setClipsToBounds__026ca8c8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setAdjustsImageWhenHighlighted__026a1b00,0);
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_28;
  FUN_002c8edc();
  _objc_unsafeClaimAutoreleasedReturnValue(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
  _objc_alloc();
  uStack_58 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 8);
  local_60 = *(undefined8 *)PTR__CGRectZero_025782f0;
  uStack_48 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18);
  local_50 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_60,uStack_58,local_50,uStack_48,puVar3,PTR_s_initWithFrame__026ca6e8);
  local_40[0] = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTag__026caa80,DAT_02323fb8);
  (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_setUserInteractionEnabled__026caad8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_setClipsToBounds__026ca8c8,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_setContentMode__026ca8e0,2);
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addSubview__026ca4c0,local_40[0]);
  puVar3 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___UIBlurEffect_026cdf90;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIBlurEffect_026cdf90,PTR_s_effectWithStyle__026ca628,8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithEffect__026ca6e0);
  local_68 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setTag__026caa80,DAT_02323fc0);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setUserInteractionEnabled__026caad8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setClipsToBounds__026ca8c8,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addSubview__026ca4c0,local_68);
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  uStack_88 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 8);
  local_90 = *(undefined8 *)PTR__CGRectZero_025782f0;
  uStack_78 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18);
  local_80 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_90,uStack_88,local_80,uStack_78,puVar3,PTR_s_initWithFrame__026ca6e8);
  local_70 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTag__026caa80,DAT_02323fc8);
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setUserInteractionEnabled__026caad8,0);
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addSubview__026ca4c0,local_70);
  uVar2 = 0xd;
  FUN_002b0a2c();
  if ((uVar2 & 1) != 0) {
    puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_respondsToSelector__026ca818,
               PTR_s_systemImageNamed__026cab78);
    if (((ulong)puVar3 & 1) != 0) {
      puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,&cf_sparkles);
      _objc_retainAutoreleasedReturnValue();
      local_98 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_setTitle_forState__026caab8,&cf_format_s_,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setImage_forState__0269cc60,puVar3,0);
        puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0,uVar1,PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTintColor__026caab0);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      _objc_storeStrong(&local_98,0);
      goto LAB_002c398c;
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTitle_forState__026caab8,&cf_format_s_,0);
LAB_002c398c:
  puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4038000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_02578160,
             PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_28;
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (0,uVar1,PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTitleColor_forState__026caac0,puVar4,0);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar3 = local_28;
  puVar4 = PTR_WCRFloatingTabBarExtraButtonTarget_026ce4b8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRFloatingTabBarExtraButtonTarget_026ce4b8,PTR_s_sharedTarget_026a1ae0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_addTarget_action_forControlEvent_026ca4c8,puVar4,
             PTR_s_handleExtraButtonTap__026a1b08,0x40);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar3 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
  _objc_alloc();
  puVar4 = PTR_WCRFloatingTabBarExtraButtonTarget_026ce4b8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRFloatingTabBarExtraButtonTarget_026ce4b8,PTR_s_sharedTarget_026a1ae0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_initWithTarget_action__026ca718,puVar4,
             PTR_s_handleExtraButtonLongPress__026a1b10);
  local_a0 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323c78,local_a0,PTR_s_setMinimumPressDuration__026ca9c8);
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setCancelsTouchesInView__026ca8b8,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addGestureRecognizer__026ca4a8,local_a0);
  puVar3 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_a0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(local_40,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(puVar3);
  return;
}

