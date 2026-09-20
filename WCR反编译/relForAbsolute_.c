// relForAbsolute: @ 01dfe204

/* Function Stack Size: 0x18 bytes */

ID WCRefineSuperFloatBallWarehouseViewController::relForAbsolute_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
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
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
    local_34 = 1;
  }
  else {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_docsDir_026c5bd8);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_30;
    local_40 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,IVar2);
    pcVar1 = local_30;
    if (((ulong)pcVar3 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
    }
    else {
      IVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_substringFromIndex__0269d120,IVar2 + 1);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar1;
    }
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

