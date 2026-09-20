// initWithFrame:textAreaWidth: @ 00fefdd0

/* Function Stack Size: 0x38 bytes */

ID WCRKeywordAlertDanmakuBubbleView::initWithFrame_textAreaWidth_
             (ID param_1,SEL param_2,CGRect param_3,double param_4)

{
  ID *pIVar1;
  undefined *puVar2;
  ID *pIVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 in_d1;
  undefined8 uVar7;
  undefined8 in_d2;
  undefined8 uVar8;
  undefined8 in_d3;
  undefined8 uVar9;
  undefined8 in_d4;
  undefined *local_78;
  byte local_69;
  ID local_68;
  undefined *local_60;
  undefined8 local_58;
  SEL local_50;
  ID *local_48;
  double local_40;
  
  local_48 = (ID *)0x0;
  pIVar1 = &local_68;
  local_60 = PTR_WCRKeywordAlertDanmakuBubbleView_026cf9a8;
  local_68 = param_1;
  local_58 = in_d4;
  local_50 = param_2;
  local_40 = param_4;
  _objc_msgSendSuper2(param_4,in_d1,in_d2,in_d3,pIVar1,PTR_s_initWithFrame__026ca6e8,
                      param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
                      param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  local_48 = pIVar1;
  _objc_storeStrong(&local_48);
  if (local_48 != (ID *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setUserInteractionEnabled__026caad8,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,local_48,PTR_s_setTextAreaWidth__026ad608);
    pIVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_traitCollection_026caba8);
    _objc_retainAutoreleasedReturnValue();
    pIVar3 = pIVar1;
    FUN_00ff06d4();
    (*(code *)PTR__objc_release_02578630)(pIVar1);
    puVar2 = PTR__OBJC_CLASS___UIBlurEffect_026cdf90;
    local_69 = (byte)pIVar3;
    uVar4 = (ulong)((uint)pIVar3 & 1);
    FUN_00ff076c(uVar4);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_effectWithStyle__026ca628,uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
    local_78 = puVar2;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    uVar6 = *(undefined8 *)((long)local_48 + (long)_blurView);
    *(undefined8 *)((long)local_48 + (long)_blurView) = puVar5;
    (*(code *)PTR__objc_release_02578630)(uVar6);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)((long)local_48 + (long)_blurView),
               PTR_s_setUserInteractionEnabled__026caad8,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)((long)local_48 + (long)_blurView),PTR_s_setClipsToBounds__026ca8c8,1)
    ;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_addSubview__026ca4c0,*(undefined8 *)((long)local_48 + (long)_blurView)
              );
    puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    puVar2 = PTR__CGRectZero_025782f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8)
               ,*(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
               *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
    uVar6 = *(undefined8 *)((long)local_48 + (long)_tintView);
    *(undefined8 *)((long)local_48 + (long)_tintView) = puVar5;
    (*(code *)PTR__objc_release_02578630)(uVar6);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)((long)local_48 + (long)_tintView),
               PTR_s_setUserInteractionEnabled__026caad8,0);
    uVar4 = (ulong)(local_69 & 1);
    FUN_00ff07cc();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)((long)local_48 + (long)_tintView),PTR_s_setBackgroundColor__026ca888)
    ;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar6 = *(undefined8 *)((long)local_48 + (long)_blurView);
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar6);
    puVar5 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    _objc_alloc();
    uVar7 = 0;
    uVar6 = 0;
    uVar9 = 0x403a000000000000;
    uVar8 = 0x403a000000000000;
    FUN_00ff086c();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar6,uVar7,uVar8,uVar9,puVar5,PTR_s_initWithFrame__026ca6e8);
    uVar6 = *(undefined8 *)((long)local_48 + (long)_avatarView);
    *(undefined8 *)((long)local_48 + (long)_avatarView) = puVar5;
    (*(code *)PTR__objc_release_02578630)(uVar6);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)((long)local_48 + (long)_avatarView),PTR_s_setContentMode__026ca8e0,2)
    ;
    uVar4 = (ulong)(local_69 & 1);
    FUN_00ff08b8();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)((long)local_48 + (long)_avatarView),
               PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar6 = *(undefined8 *)((long)local_48 + (long)_blurView);
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar6);
    puVar5 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)puVar2,*(undefined8 *)(puVar2 + 8),*(undefined8 *)(puVar2 + 0x10),
               *(undefined8 *)(puVar2 + 0x18));
    uVar6 = *(undefined8 *)((long)local_48 + (long)_sessionLabel);
    *(undefined8 *)((long)local_48 + (long)_sessionLabel) = puVar5;
    (*(code *)PTR__objc_release_02578630)();
    FUN_00ff0954();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)((long)local_48 + (long)_sessionLabel),PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(uVar6);
    uVar4 = (ulong)(local_69 & 1);
    FUN_00ff0984();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)((long)local_48 + (long)_sessionLabel),PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)((long)local_48 + (long)_sessionLabel),
               PTR_s_setLineBreakMode__026ca988);
    uVar6 = *(undefined8 *)((long)local_48 + (long)_blurView);
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar6);
    puVar5 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)puVar2,*(undefined8 *)(puVar2 + 8),*(undefined8 *)(puVar2 + 0x10),
               *(undefined8 *)(puVar2 + 0x18));
    uVar6 = *(undefined8 *)((long)local_48 + (long)_contentLabel);
    *(undefined8 *)((long)local_48 + (long)_contentLabel) = puVar5;
    (*(code *)PTR__objc_release_02578630)();
    FUN_00ff0a20();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)((long)local_48 + (long)_contentLabel),PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(uVar6);
    uVar4 = (ulong)(local_69 & 1);
    FUN_00ff0a50();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)((long)local_48 + (long)_contentLabel),PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)((long)local_48 + (long)_contentLabel),
               PTR_s_setNumberOfLines__026ca9d8,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)((long)local_48 + (long)_contentLabel),
               PTR_s_setLineBreakMode__026ca988,4);
    uVar6 = *(undefined8 *)((long)local_48 + (long)_blurView);
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar6);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_applyThemeColors_026ad610);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_layoutDanmakuSubviews_026ad618);
    _objc_storeStrong(&local_78,0);
  }
  pIVar1 = local_48;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_48,0);
  return (ID)pIVar1;
}

