// FUN_00270854 @ 00270854

void FUN_00270854(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_e0;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_48;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar1 = local_30;
  _objc_getAssociatedObject(local_30,&DAT_028c9570);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  local_38 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_28 = local_38;
  if (((ulong)pcVar1 & 1) == 0) {
    local_e0 = &cf_AttributeLabel;
    _NSClassFromString();
    local_50 = local_e0;
    if (local_e0 == (cfstringStruct *)0x0) {
      local_e0 = (cfstringStruct *)PTR__OBJC_CLASS___UILabel_026cdfb8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60)
      ;
    }
    local_58 = local_e0;
    _objc_alloc();
    uStack_78 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 8);
    local_80 = *(undefined8 *)PTR__CGRectZero_025782f0;
    uStack_68 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18);
    local_70 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,uStack_78,local_70,uStack_68,local_e0,PTR_s_initWithFrame__026ca6e8);
    pcVar1 = local_38;
    local_38 = local_e0;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setUserInteractionEnabled__026caad8,0);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setNumberOfLines__026ca9d8,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setTextAlignment__026caa90,0);
    pcVar3 = local_30;
    FUN_0026f338(local_30,&cf_detailLabel);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    local_88 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    pcVar1 = local_88;
    if (((ulong)pcVar3 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4028000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                 PTR_s_systemFontOfSize__0269cc50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setFont__026ca958);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      pcVar1 = &cf_WCColor;
      _NSClassFromString();
      local_98 = pcVar1;
      if ((pcVar1 == (cfstringStruct *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_secondaryLabelColor_026a1020),
         ((ulong)pcVar1 & 1) == 0)) {
        puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setTextColor__026caa98);
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      else {
        pcVar1 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_secondaryLabelColor_026a1020);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setTextColor__026caa98);
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_90 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_font_0269ea00);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setFont__026ca958);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_textColor_0269f098);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setTextColor__026caa98);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      _objc_storeStrong(&local_90,0);
    }
    pcVar1 = local_30;
    FUN_0026f338(local_30,&cf_contentBkView);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_a0 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)pcVar1 & 1) == 0) {
      _objc_storeStrong(&local_a0,local_30);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_addSubview__026ca4c0,local_38);
    _objc_setAssociatedObject(local_30,&DAT_028c9570,local_38,1);
    pcVar1 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar1;
    local_48 = 1;
    _objc_storeStrong(&local_a0);
    _objc_storeStrong(&local_88,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

