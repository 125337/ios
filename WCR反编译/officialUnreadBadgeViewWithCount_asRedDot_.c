// officialUnreadBadgeViewWithCount:asRedDot: @ 00f9f5c0

/* Function Stack Size: 0x20 bytes */

ID WCRefineHelper::officialUnreadBadgeViewWithCount_asRedDot_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ulong uVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double local_218;
  cfstringStruct *local_200;
  int local_174;
  ulong local_170;
  cfstringStruct *local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  char *local_a0;
  char *local_98 [2];
  cfstringStruct *local_88;
  cfstringStruct *local_70;
  char *local_68;
  char *local_60;
  undefined4 local_58;
  byte local_51;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  SEL local_38;
  ID local_30;
  char *local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  uVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_unsignedLongLongValue_0269d6b8);
  if ((uVar2 & 1) == 0) {
    local_170 = 0;
  }
  else {
    local_170 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_unsignedLongLongValue_0269d6b8);
  }
  local_50 = local_170;
  uVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540);
  if ((uVar2 & 1) == 0) {
    local_174 = 0;
  }
  else {
    uVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_boolValue_026ca540);
    local_174 = (int)uVar2;
  }
  local_51 = local_174 != 0;
  if (local_50 == 0) {
    local_28 = (char *)0x0;
    local_58 = 1;
  }
  else {
    pcVar3 = "MMBadgeView";
    _objc_getClass();
    local_68 = (char *)0x0;
    pcVar4 = &cf_redDotWithNumber_;
    local_60 = pcVar3;
    _NSSelectorFromString();
    pcVar3 = local_60;
    local_70 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_respondsToSelector__026ca818,pcVar4);
    if (((ulong)pcVar3 & 1) != 0) {
      pcVar5 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,local_70,local_50);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_68;
      local_68 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    if ((local_51 & 1) != 0) {
      pcVar4 = &cf_setAsSmallDotForChatSession;
      _NSSelectorFromString();
      pcVar3 = local_68;
      local_88 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_respondsToSelector__026ca818,pcVar4);
      if (((ulong)pcVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_68,local_88);
      }
    }
    pcVar3 = local_68;
    puVar6 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar6);
    if (((ulong)pcVar3 & 1) == 0) {
      FUN_00f9fe6c();
      _objc_retainAutoreleasedReturnValue();
      local_98[0] = pcVar3;
      if ((local_51 & 1) == 0) {
        pcVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
        _objc_alloc();
        local_218 = *(double *)(PTR__CGRectZero_025782f0 + 0x10);
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)PTR__CGRectZero_025782f0,
                   *(undefined8 *)(PTR__CGRectZero_025782f0 + 8));
        bVar1 = local_50 < 100;
        local_c8 = pcVar3;
        if (bVar1) {
          local_200 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__llu);
          _objc_retainAutoreleasedReturnValue();
          local_d0 = local_200;
        }
        else {
          local_200 = &cf_99_;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setText__026caa88,local_200);
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_d0);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setTextAlignment__026caa90,1);
        puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setTextColor__026caa98);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        puVar6 = PTR__OBJC_CLASS___UIFont_026cdfc0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x4024000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                   PTR_s_systemFontOfSize_weight__026cab60);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setFont__026ca958);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_setBackgroundColor__026ca888,local_98[0]);
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setClipsToBounds__026ca8c8,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_sizeToFit_0269ec08);
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_bounds_026ca548);
        local_218 = local_218 + 6.0;
        if (local_218 <= 14.0) {
          local_218 = 14.0;
        }
        uVar9 = 0x402c000000000000;
        uVar8 = 0;
        uVar7 = 0;
        FUN_00f9ba24();
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar7,uVar8,local_218,uVar9,local_c8,PTR_s_setFrame__026ca960);
        pcVar3 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(0x401c000000000000);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setUserInteractionEnabled__026caad8,0);
        pcVar3 = local_c8;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar3;
        local_58 = 1;
        _objc_storeStrong(&local_c8,0);
      }
      else {
        pcVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
        _objc_alloc();
        uVar8 = 0;
        uVar7 = 0;
        uVar10 = 0x4024000000000000;
        uVar9 = 0x4024000000000000;
        FUN_00f9ba24();
        local_c0 = uVar7;
        local_b8 = uVar8;
        local_b0 = uVar9;
        local_a8 = uVar10;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar7,uVar8,uVar9,uVar10,pcVar3,PTR_s_initWithFrame__026ca6e8);
        local_a0 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_setBackgroundColor__026ca888,local_98[0])
        ;
        pcVar3 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(0x4014000000000000);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setUserInteractionEnabled__026caad8,0);
        pcVar3 = local_a0;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar3;
        local_58 = 1;
        _objc_storeStrong(&local_a0,0);
      }
      _objc_storeStrong(local_98,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setUserInteractionEnabled__026caad8,0);
      pcVar3 = local_68;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar3;
      local_58 = 1;
    }
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

