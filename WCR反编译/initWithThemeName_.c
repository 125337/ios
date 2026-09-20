// initWithThemeName: @ 0171eb54

/* Function Stack Size: 0x18 bytes */

ID ThemeBoxAirDropConsumedCodesDetailViewController::initWithThemeName_
             (ID param_1,SEL param_2,ID param_3)

{
  ID *pIVar1;
  undefined8 **ppuVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_50;
  undefined8 *local_38;
  undefined *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID *local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = (ID *)param_1;
  _objc_storeStrong(&local_28,param_3);
  local_38 = local_18;
  local_18 = (ID *)0x0;
  ppuVar2 = &local_38;
  local_30 = PTR_ThemeBoxAirDropConsumedCodesDetailViewController_026cfae0;
  _objc_msgSendSuper2(ppuVar2,PTR_s_init_026ca6a8);
  local_18 = (ID *)ppuVar2;
  _objc_storeStrong(&local_18);
  if ((undefined8 **)local_18 != (undefined8 **)0x0) {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_copy_0269d150);
    local_50 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_50 = &::cf___;
    }
    _objc_storeStrong((long)local_18 + (long)_themeName,local_50);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  pIVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return (ID)(undefined8 **)pIVar1;
}

