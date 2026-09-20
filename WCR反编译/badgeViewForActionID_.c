// badgeViewForActionID: @ 01cec850

/* Function Stack Size: 0x18 bytes */

ID WCRefineProfileCardFunctionPageViewController::badgeViewForActionID_
             (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double local_1c8;
  double local_1c0;
  cfstringStruct *local_160;
  cfstringStruct *local_148;
  cfstringStruct *local_130;
  undefined *local_98;
  byte local_89;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  byte local_71;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined8 local_50;
  SEL local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  local_48 = param_2;
  local_40 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_50,param_3);
  pcVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_badgeInfoForActionID__026c3a60,local_50);
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
  _objc_retainAutoreleasedReturnValue();
  local_130 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_130 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_130;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_textColor);
  _objc_retainAutoreleasedReturnValue();
  local_71 = 0;
  local_148 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    FUN_01cec7d0();
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_148;
  }
  local_71 = pcVar1 == (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_148;
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_backgroundColor);
  _objc_retainAutoreleasedReturnValue();
  local_89 = 0;
  local_160 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_160 = (cfstringStruct *)PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323d48,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_88 = local_160;
  }
  local_89 = pcVar1 == (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = local_160;
  if ((local_89 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  _objc_alloc_init();
  local_98 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setText__026caa88,local_60);
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setTextAlignment__026caa90);
  puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4028000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
             PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setFont__026ca958);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setTextColor__026caa98,local_68);
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setBackgroundColor__026ca888,local_80);
  puVar2 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4026000000000000);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar1 = local_60;
  dVar4 = 88.0;
  local_38 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
  puVar2 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_font_0269ea00);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_30,&local_38,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_sizeWithAttributes__026cab08);
  local_1c0 = (double)(long)dVar4 + 20.0;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (88.0 < local_1c0) {
    local_1c0 = 88.0;
  }
  if (local_1c0 <= 58.0) {
    local_1c8 = 58.0;
  }
  else {
    local_1c8 = local_1c0;
  }
  uVar6 = 0;
  uVar5 = 0;
  uVar7 = 0x4036000000000000;
  FUN_01cea980();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,uVar6,local_1c8,uVar7,local_98,PTR_s_setFrame__026ca960);
  puVar2 = local_98;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_98);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar2;
}

