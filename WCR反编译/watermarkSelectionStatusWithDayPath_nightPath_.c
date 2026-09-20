// watermarkSelectionStatusWithDayPath:nightPath: @ 017ef270

/* Function Stack Size: 0x20 bytes */

ID WCRefineAssistFunctionViewController::watermarkSelectionStatusWithDayPath_nightPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  uVar4 = local_30;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  bVar1 = false;
  if ((uVar4 & 1) != 0) {
    uVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    bVar1 = uVar4 != 0;
  }
  uVar4 = local_38;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  bVar2 = false;
  if ((uVar4 & 1) != 0) {
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    bVar2 = uVar4 != 0;
  }
  if ((bVar1) && (bVar2)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__eY;
  }
  else if (bVar1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__e;
  }
  else if (bVar2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__Y;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__gb;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

