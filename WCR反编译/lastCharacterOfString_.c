// lastCharacterOfString: @ 010dda18

/* Function Stack Size: 0x18 bytes */

ID WCRefineNameplateHelper::lastCharacterOfString_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  pcVar2 = local_30;
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
  }
  else {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    puVar3 = PTR_s_rangeOfComposedCharacterSequence_026aadc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_rangeOfComposedCharacterSequence_026aadc0,
               (undefined1 *)((long)&pcVar1[-1].field3_0x18 + 7));
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_substringWithRange__0269d138,pcVar2,puVar3)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar1;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

