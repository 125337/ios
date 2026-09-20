// textFromSender: @ 01e32d00

/* Function Stack Size: 0x18 bytes */

ID WCRefineSuperFloatURLSchemeViewController::textFromSender_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined **ppuVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_58;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  ppuVar2 = &PTR___NSConcreteGlobalBlock_0258c7a0;
  _objc_retainBlock();
  local_30 = (cfstringStruct *)ppuVar2;
  (*(code *)((cfstringStruct *)ppuVar2)->field2_0x10)(ppuVar2,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_38 = (cfstringStruct *)ppuVar2;
  (*(code *)PTR__objc_msgSend_02578628)(ppuVar2,PTR_s_length_0269cca0);
  pcVar4 = local_30;
  if ((cfstringStruct *)ppuVar2 == (cfstringStruct *)0x0) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_activeAlert_026b1ae8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)pcVar4->field2_0x10)();
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_38;
    local_38 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  if (local_38 == (cfstringStruct *)0x0) {
    local_58 = &::cf___;
  }
  else {
    local_58 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_58;
}

