// storedAvatarPathForPath: @ 01caf560

/* Function Stack Size: 0x18 bytes */

ID WCRefinePluginTopViewController::storedAvatarPathForPath_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  ID local_50;
  ID local_48;
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if ((local_30 == (cfstringStruct *)0x0) ||
     (pcVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     pcVar3 = local_30, pcVar1 == (cfstringStruct *)0x0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
    local_34 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &::cf___;
      local_34 = 1;
    }
    else {
      IVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_documentsPath_026ab1d0);
      _objc_retainAutoreleasedReturnValue();
      local_48 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_stringByAppendingString__0269d398,&cf__);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_40;
      local_50 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,IVar4);
      pcVar3 = local_40;
      if (((ulong)pcVar1 & 1) == 0) {
        puVar2 = PTR_s_rangeOfString__0269d838;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_rangeOfString__0269d838,&cf__Documents_);
        local_18 = local_40;
        if (pcVar3 == (cfstringStruct *)0x7fffffffffffffff) {
          (*(code *)PTR__objc_retain_02578638)();
        }
        else {
          pcVar1 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
          if ((cfstringStruct *)(puVar2 + (long)&pcVar3->field0_0x0) < pcVar1) {
            pcVar1 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_substringFromIndex__0269d120,
                       (cfstringStruct *)(puVar2 + (long)&pcVar3->field0_0x0));
            _objc_retainAutoreleasedReturnValue();
            local_18 = pcVar1;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = &::cf___;
          }
        }
      }
      else {
        IVar4 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_substringFromIndex__0269d120,IVar4);
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar3;
      }
      local_34 = 1;
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

