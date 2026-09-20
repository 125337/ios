// applyEntry: @ 01eafc50

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoCell::applyEntry_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  undefined *puVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *local_170;
  undefined *local_100;
  undefined *local_f0;
  undefined *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  byte local_a1;
  cfstringStruct *local_a0;
  SEL local_98;
  ID local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined *local_68;
  ID local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined *local_38;
  ID local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_a0 = (cfstringStruct *)0x0;
  local_98 = param_2;
  local_90 = param_1;
  _objc_storeStrong(&local_a0,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setEntry__026c76d0,local_a0);
  pcVar2 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_isOverdue_026c7128);
  local_a1 = (byte)pcVar2;
  local_b0 = (undefined *)0x0;
  pcVar2 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_done_026a1598);
  if (((ulong)pcVar2 & 1) == 0) {
    if ((local_a1 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGray2Color_026c4488);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_b0;
      local_b0 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemRedColor_0269ee10);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_b0;
      local_b0 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGrayColor_026a9fa8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_b0;
    local_b0 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  puVar4 = local_b0;
  pcVar2 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_done_026a1598);
  FUN_01eb0990(0x4036000000000000,puVar4,pcVar2);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = local_90;
  local_b8 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_checkButton_026c76d8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_a0;
  local_c0 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_done_026a1598);
  if (((ulong)pcVar2 & 1) == 0) {
    IVar5 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_titleLabel__026c76e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    IVar5 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_titleLabel__026c76e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    pcVar2 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_titleLabel__026c76e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  else {
    local_58 = *(undefined8 *)PTR__NSStrikethroughStyleAttributeName_02578098;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,1);
    _objc_retainAutoreleasedReturnValue();
    local_50 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_40 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_tertiaryLabelColor_026aa850);
    _objc_retainAutoreleasedReturnValue();
    local_48 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
    IVar5 = local_90;
    local_38 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_titleLabel__026c76e0);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_58,3);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar7;
    (*(code *)PTR__objc_release_02578630)(IVar6);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
    _objc_alloc();
    pcVar2 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_170 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_170 = &::cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_initWithString_attributes__026a02b0,local_170,local_c8);
    IVar5 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_titleLabel__026c76e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    _objc_storeStrong(&local_c8,0);
  }
  pcVar2 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_badgeText_026c76e8);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    IVar5 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_badgeLabel_026aa858);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    IVar5 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_badgeLabel_026aa858);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    IVar5 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_badgeLabel_026aa858);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
  }
  else {
    IVar5 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_badgeLabel_026aa858);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    pcVar2 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_startTime_026c74b8);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = &::cf_space_s_;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_d8 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_stringByAppendingString__0269d398,local_d8)
    ;
    _objc_retainAutoreleasedReturnValue();
    pcVar8 = local_a0;
    local_e0 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_done_026a1598);
    if (((ulong)pcVar8 & 1) == 0) {
      IVar5 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_badgeLabel_026aa858);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar5);
      IVar5 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_badgeLabel_026aa858);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar5);
      bVar1 = (local_a1 & 1) == 0;
      if (bVar1) {
        local_100 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        local_f0 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemRedColor_0269ee10);
        _objc_retainAutoreleasedReturnValue();
      }
      IVar5 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_badgeLabel_026aa858);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar5);
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_100);
      }
      else {
        (*(code *)PTR__objc_release_02578630)(local_f0);
      }
    }
    else {
      local_88 = *(undefined8 *)PTR__NSStrikethroughStyleAttributeName_02578098;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,1);
      _objc_retainAutoreleasedReturnValue();
      local_80 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
      puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
      local_70 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_tertiaryLabelColor_026aa850);
      _objc_retainAutoreleasedReturnValue();
      local_78 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
      IVar5 = local_90;
      local_68 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_badgeLabel_026aa858);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_60 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_70,&local_88,3);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = puVar7;
      (*(code *)PTR__objc_release_02578630)(IVar6);
      (*(code *)PTR__objc_release_02578630)(IVar5);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      IVar5 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_badgeLabel_026aa858);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_e8,0);
    }
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_d8,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_daily_026c7138);
  IVar5 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_dailyView_026c76f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_a0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

