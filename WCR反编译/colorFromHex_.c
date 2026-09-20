// colorFromHex: @ 01e394d0

/* Function Stack Size: 0x18 bytes */

ID WCRefineSvgColorSchemeHistoryCell::colorFromHex_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  cfstringStruct *local_50;
  undefined *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineColorPickerController_026ceed8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_28 == (cfstringStruct *)0x0) {
    local_50 = &cf__000000;
  }
  else {
    local_50 = local_28;
  }
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_colorFromHexString__026b30d8,local_50);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

