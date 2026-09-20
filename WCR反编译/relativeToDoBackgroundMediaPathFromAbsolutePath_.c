// relativeToDoBackgroundMediaPathFromAbsolutePath: @ 01ec9898

/* Function Stack Size: 0x18 bytes */

ID WCRefineToDoListSettingsViewController::relativeToDoBackgroundMediaPathFromAbsolutePath_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  cfstringStruct *local_80;
  ID local_48;
  ID local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((ulong)pcVar2 & 1) == 0) ||
     (pcVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     pcVar2 == (cfstringStruct *)0x0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
    local_34 = 1;
  }
  else {
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isAbsolutePath_026a3188);
    pcVar2 = local_30;
    if (((ulong)pcVar3 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
      local_34 = 1;
    }
    else {
      IVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_toDoBackgroundBasePath_026c7b80);
      _objc_retainAutoreleasedReturnValue();
      local_40 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_stringByAppendingString__0269d398,&cf__);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_30;
      local_48 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,local_40);
      if (((ulong)pcVar2 & 1) == 0) {
        pcVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,local_48);
        pcVar2 = local_30;
        if (((ulong)pcVar3 & 1) == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = pcVar2;
        }
        else {
          IVar4 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_substringFromIndex__0269d120,IVar4);
          _objc_retainAutoreleasedReturnValue();
          local_80 = pcVar2;
          if (pcVar2 == (cfstringStruct *)0x0) {
            local_80 = &::cf___;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = local_80;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &::cf___;
      }
      local_34 = 1;
      _objc_storeStrong(&local_48);
      _objc_storeStrong(&local_40,0);
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

