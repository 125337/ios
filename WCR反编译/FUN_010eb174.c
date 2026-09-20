// FUN_010eb174 @ 010eb174

double FUN_010eb174(double param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  double dVar7;
  double local_160;
  cfstringStruct *local_138;
  cfstringStruct *local_110;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  undefined4 local_54;
  double local_50;
  cfstringStruct *local_48;
  double local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_4);
  pcVar2 = local_48;
  puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  local_50 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_40 = 8.0;
    local_54 = 1;
    goto LAB_010eb668;
  }
  pcVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  local_110 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_110 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_110;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar3 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
  pcVar2 = local_60;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_40 = 8.0;
    local_54 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_newlineCharacterSet_0269ef38);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_s_rangeOfCharacterFromSet__0269db68;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_70 = pcVar2;
    local_68 = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_70 != (cfstringStruct *)0x7fffffffffffffff) {
      pcVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_substringToIndex__0269d6c0,local_70);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_60;
      local_60 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_40 = 8.0;
        local_54 = 1;
        goto LAB_010eb658;
      }
    }
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_font_0269ea00);
    _objc_retainAutoreleasedReturnValue();
    local_138 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_80 = (cfstringStruct *)PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4028000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                 PTR_s_systemFontOfSize__0269cc50);
      _objc_retainAutoreleasedReturnValue();
      local_138 = local_80;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = local_138;
    if (pcVar2 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar4 = "CControlUtil";
    _objc_getClass();
    pcVar2 = &cf_labelWidth_maxWidth_font_;
    _NSSelectorFromString();
    if (((pcVar4 == (char *)0x0) ||
        (pcVar5 = pcVar4,
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_respondsToSelector__026ca818,pcVar2),
        ((ulong)pcVar5 & 1) == 0)) ||
       (dVar7 = local_50, (*(code *)PTR__objc_msgSend_02578628)(pcVar4,pcVar2,local_60,local_78),
       dVar7 < 1.0)) {
      pcVar2 = local_60;
      FUN_010e08bc();
      local_38 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
      local_30 = local_78;
      puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_boundingRectWithSize_options_att_0269e550,3,puVar1,0);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_160 = (double)(long)param_3;
      if (local_160 < 8.0) {
        local_160 = 8.0;
      }
      local_40 = local_160;
    }
    else {
      local_40 = (double)(long)dVar7;
    }
    local_54 = 1;
    _objc_storeStrong(&local_78,0);
  }
LAB_010eb658:
  _objc_storeStrong(&local_60,0);
LAB_010eb668:
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_40;
}

