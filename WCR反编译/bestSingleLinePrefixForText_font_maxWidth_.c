// bestSingleLinePrefixForText:font:maxWidth: @ 00ff70e8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x28 bytes */

ID WCRefineKeywordAlertDanmakuPresenter::bestSingleLinePrefixForText_font_maxWidth_
             (ID param_1,SEL param_2,ID param_3,ID param_4,double param_5)

{
  bool bVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  ulong local_130;
  ID local_120;
  ID local_c8;
  ID local_a0;
  ID local_88;
  ID local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  int local_54;
  double local_50;
  undefined8 local_48;
  ID local_40;
  SEL local_38;
  ID local_30;
  ID local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  IVar3 = local_30;
  local_50 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_5,local_30,PTR_s_text_fitsSingleLineWithFont_maxW_026ad7b0,local_40,local_48);
  IVar4 = local_40;
  if ((IVar3 & 1) == 0) {
    local_60 = 1;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    local_70 = 1;
    local_68 = IVar4;
    do {
      if (local_68 < local_60) break;
      local_78 = (local_60 + local_68) / 2;
      IVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_substringToIndex__0269d6c0,local_78);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_30;
      local_80 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,local_30,PTR_s_text_fitsSingleLineWithFont_maxW_026ad7b0,IVar4,local_48);
      if ((IVar3 & 1) == 0) {
        if (local_78 != 0) {
          local_68 = local_78 - 1;
          goto LAB_00ff72a0;
        }
        local_54 = 3;
      }
      else {
        local_70 = local_78;
        local_60 = local_78 + 1;
LAB_00ff72a0:
        local_54 = 0;
      }
      _objc_storeStrong(&local_80,0);
    } while (local_54 == 0);
    IVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_substringToIndex__0269d6c0,local_70);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    local_88 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    if ((IVar4 != 0x7fffffffffffffff) &&
       (IVar3 = local_88, (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0),
       IVar3 / 3 < IVar4)) {
      IVar3 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_substringToIndex__0269d6c0,IVar4);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = local_88;
      local_88 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar4);
    }
    IVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_trimmedString__0269ec98,local_88);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_120 = local_40;
    bVar2 = false;
    bVar1 = false;
    if (IVar3 == 0) {
      local_130 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      if (1 < local_130) {
        local_130 = 1;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_substringToIndex__0269d6c0,local_130);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_c8 = local_120;
    }
    else {
      local_120 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_trimmedString__0269ec98,local_88);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      local_a0 = local_120;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_120;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_c8);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_a0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar4);
    local_54 = 1;
    _objc_storeStrong(&local_88,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = IVar4;
    local_54 = 1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return local_28;
}

