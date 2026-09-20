// resolvedImageRelativePath:nightPath: @ 010dc6a8

/* Function Stack Size: 0x20 bytes */

ID WCRefineNameplateHelper::resolvedImageRelativePath_nightPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_68;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_4);
  IVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isDarkMode_0269f410);
  if ((IVar2 & 1) != 0) {
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    pcVar1 = local_38;
    if (pcVar3 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
      goto LAB_010dc7f8;
    }
  }
  pcVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  pcVar1 = local_30;
  if (pcVar3 == (cfstringStruct *)0x0) {
    if (local_38 == (cfstringStruct *)0x0) {
      local_68 = &::cf___;
    }
    else {
      local_68 = local_38;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_68;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
  }
LAB_010dc7f8:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

