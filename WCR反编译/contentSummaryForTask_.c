// contentSummaryForTask: @ 014b6568

/* Function Stack Size: 0x18 bytes */

ID WCRefineScheduledTask::contentSummaryForTask_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_80;
  cfstringStruct *local_60;
  bool local_51;
  cfstringStruct *local_50;
  ID local_48;
  undefined4 local_3c;
  ID local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_integerInTask_forKey__026a6cc8,local_30,&cf_contentMode);
  local_38 = IVar1;
  if (IVar1 == 2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_ndJ_YU_;
    local_3c = 1;
  }
  else if (IVar1 == 1) {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_stringArrayInTask_forKey__026a6cf0,local_30,&cf_repositoryCodes);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    local_51 = false;
    local_48 = IVar2;
    if (IVar2 == 0) {
      local_80 = &cf__gN_;
    }
    else {
      local_80 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_N_);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_80;
    }
    local_51 = IVar2 != 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_80;
    if ((local_51 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    local_3c = 1;
  }
  else {
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_textContent);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    FUN_014b5580();
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf__gkXQ;
    }
    else {
      pcVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      local_18 = local_60;
      if (pcVar3 < (cfstringStruct *)((long)&MACH_HEADER.filetype + 1)) {
        (*(code *)PTR__objc_retain_02578638)();
      }
      else {
        pcVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_substringToIndex__0269d6c0,0xc);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
    }
    local_3c = 1;
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

