// eventAutoReplyContentSummaryWithText:repositoryCode:countMode:multiContent:randomOne: @ 01a1b384

/* Function Stack Size: 0x34 bytes */

ID WCRefineGeneralFunctionViewController::
   eventAutoReplyContentSummaryWithText_repositoryCode_countMode_multiContent_randomOne_
             (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5,ID param_6,bool param_7
             )

{
  long lVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_c0;
  cfstringStruct *local_88;
  byte local_79;
  undefined4 local_78;
  bool local_71;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined1 local_59;
  undefined8 local_58;
  long_long local_50;
  undefined8 local_48;
  long local_40;
  SEL local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  local_58 = 0;
  local_50 = param_5;
  _objc_storeStrong(&local_58,param_6);
  local_59 = (undefined1)param_7;
  if (local_50 - 1 == 0) {
    pcVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_eventAutoReplyMultiContentLines__026bb998,local_58);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    local_71 = false;
    local_68 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_c0 = &cf__gn_;
    }
    else {
      local_c0 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___);
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_c0;
    }
    local_71 = pcVar3 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_c0;
    if ((local_71 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    local_78 = 1;
  }
  else {
    lVar1 = local_40;
    FUN_01a08fe8(local_50 - 1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    pcVar3 = local_30;
    local_79 = lVar2 != 0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_eventAutoReplyRepositorySummaryL_026bb9a0,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_88 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
    pcVar4 = local_88;
    if (((local_79 & 1) == 0) || (pcVar3 == (cfstringStruct *)0x0)) {
      if ((local_79 & 1) == 0) {
        if (pcVar3 == (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cf__gn_;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = pcVar4;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf_e_g;
      }
    }
    else {
      pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_e_g_);
      _objc_retainAutoreleasedReturnValue();
      local_28 = pcVar4;
    }
    local_78 = 1;
    _objc_storeStrong(&local_88,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

