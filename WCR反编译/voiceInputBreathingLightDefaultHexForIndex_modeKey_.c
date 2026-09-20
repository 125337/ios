// voiceInputBreathingLightDefaultHexForIndex:modeKey: @ 01a3aad0

/* Function Stack Size: 0x20 bytes */

ID WCRefineGeneralFunctionViewController::voiceInputBreathingLightDefaultHexForIndex_modeKey_
             (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  qword qVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_70;
  cfstringStruct *local_40;
  cfstringStruct local_38;
  cfstringStruct *local_18;
  
  pcVar2 = &local_38;
  local_38.field0_0x0 = 0;
  local_38.field1_0x8 = param_3;
  local_38.field2_0x10 = (undefined *)param_2;
  local_38.field3_0x18 = param_1;
  _objc_storeStrong(pcVar2,param_4);
  FUN_01a3ac58();
  _objc_retainAutoreleasedReturnValue();
  qVar1 = local_38.field1_0x8;
  local_40 = pcVar2;
  if (((long)local_38.field1_0x8 < 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_count_0269cfe0),
     (long)pcVar2 <= (long)qVar1)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
  }
  else {
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectAtIndexedSubscript__0269cc78,local_38.field1_0x8);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_70 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_70;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

