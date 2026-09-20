// contentPagesForText:maxWidth:record: @ 00ff6910

/* Function Stack Size: 0x28 bytes */

ID WCRefineKeywordAlertDanmakuPresenter::contentPagesForText_maxWidth_record_
             (ID param_1,SEL param_2,ID param_3,double param_4,ID param_5)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined *local_120;
  int local_e4;
  undefined *local_c0;
  ID local_b8;
  ID local_b0;
  undefined *local_a8;
  undefined1 local_99;
  undefined *local_98;
  ID local_90;
  int local_84;
  ID local_80;
  undefined8 local_78;
  double local_70;
  undefined8 local_68;
  SEL local_60;
  ID local_58;
  undefined *local_50;
  ID local_48;
  ID local_40;
  ID local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_68 = 0;
  local_60 = param_2;
  local_58 = param_1;
  _objc_storeStrong(&local_68,param_3);
  local_78 = 0;
  local_70 = param_4;
  _objc_storeStrong(&local_78,param_5);
  IVar1 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_trimmedString__0269ec98,local_68);
  _objc_retainAutoreleasedReturnValue();
  local_80 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    local_30 = &::cf___;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,1
              );
    _objc_retainAutoreleasedReturnValue();
    local_84 = 1;
    local_50 = puVar2;
  }
  else {
    FUN_00ff0a20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_WCRefineConfig_026cdf58;
    local_90 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_58;
    local_98 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isMessageDanmakuRecord__026ad6c8,local_78);
    if ((IVar1 & 1) == 0) {
      puVar2 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_98,PTR_s_keywordAlertDanmakuContentCarous_026ad7a8);
      local_e4 = (int)puVar2;
    }
    else {
      puVar2 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_98,PTR_s_messageDanmakuContentCarouselEna_026ad7a0);
      local_e4 = (int)puVar2;
    }
    local_99 = local_e4 != 0;
    if ((bool)local_99) {
      IVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,local_58,PTR_s_text_fitsSingleLineWithFont_maxW_026ad7b0,local_80,local_90
                );
      if ((IVar1 & 1) == 0) {
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        IVar1 = local_80;
        local_a8 = puVar2;
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = IVar1;
        do {
          IVar1 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
          if (IVar1 == 0) break;
          IVar1 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_70,local_58,PTR_s_bestSingleLinePrefixForText_font_026ad7b8,local_b0,
                     local_90);
          _objc_retainAutoreleasedReturnValue();
          local_b8 = IVar1;
          (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
          if (IVar1 == 0) {
            local_84 = 3;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_addObject__0269d180,local_b8);
            IVar3 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
            IVar4 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
            IVar5 = local_58;
            IVar1 = local_b0;
            if (IVar3 < IVar4) {
              IVar3 = local_b8;
              (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
              (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_substringFromIndex__0269d120,IVar3);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_trimmedString__0269ec98);
              _objc_retainAutoreleasedReturnValue();
              IVar3 = local_b0;
              local_b0 = IVar5;
              (*(code *)PTR__objc_release_02578630)(IVar3);
              (*(code *)PTR__objc_release_02578630)(IVar1);
              local_84 = 0;
            }
            else {
              local_84 = 3;
            }
          }
          _objc_storeStrong(&local_b8,0);
        } while (local_84 == 0);
        puVar2 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_count_0269cfe0);
        if (puVar2 == (undefined *)0x0) {
          local_48 = local_80;
          local_120 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_48,1);
          _objc_retainAutoreleasedReturnValue();
          local_c0 = local_120;
        }
        else {
          local_120 = local_a8;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_50 = local_120;
        if (puVar2 == (undefined *)0x0) {
          (*(code *)PTR__objc_release_02578630)(local_c0);
        }
        local_84 = 1;
        _objc_storeStrong(&local_b0);
        _objc_storeStrong(&local_a8,0);
      }
      else {
        local_40 = local_80;
        puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_40,1);
        _objc_retainAutoreleasedReturnValue();
        local_84 = 1;
        local_50 = puVar2;
      }
    }
    else {
      local_38 = local_80;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      local_84 = 1;
      local_50 = puVar2;
    }
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_90,0);
  }
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_68,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_50;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

