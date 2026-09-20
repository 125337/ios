// displayNameForTarget: @ 014bc080

/* Function Stack Size: 0x18 bytes */

ID WCRefineScheduledTask::displayNameForTarget_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  long local_38;
  long local_30;
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  FUN_014b5580();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
    local_3c = 1;
  }
  else {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isGroupTarget__026af4a8,local_38);
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_displayNameForSession__026a4518,local_38)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_3c = 1;
      local_18 = pcVar2;
    }
    else {
      pcVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_homeGroupIDFromTarget__026af4c8,local_38)
      ;
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_20;
      local_48 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_displayNameForHomeGroupID__026af4d0,pcVar2);
      _objc_retainAutoreleasedReturnValue();
      local_50 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
      if ((pcVar3 == (cfstringStruct *)0x0) ||
         (pcVar2 = local_50,
         (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,local_48),
         ((ulong)pcVar2 & 1) != 0)) {
        pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_R_);
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar2;
      }
      else {
        pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_R_);
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar2;
      }
      local_3c = 1;
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

