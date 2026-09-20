// replaceAuthNameTokenInText:userName: @ 00ead0ec

/* Function Stack Size: 0x20 bytes */

ID WCRefineAuthNameHelper::replaceAuthNameTokenInText_userName_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  cfstringStruct *local_70;
  undefined8 local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  pcVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((ulong)pcVar2 & 1) == 0) ||
     (pcVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     pcVar2 == (cfstringStruct *)0x0)) {
    if (local_30 == (cfstringStruct *)0x0) {
      local_70 = &::cf___;
    }
    else {
      local_70 = local_30;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_70;
  }
  else {
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_rangeOfString__0269d838,&::cf__);
    pcVar2 = local_30;
    if (pcVar3 == (cfstringStruct *)0x7fffffffffffffff) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
    }
    else {
      IVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_maskedAuthNameForUser__0269ef78,local_38)
      ;
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(IVar4);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

