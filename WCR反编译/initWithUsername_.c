// initWithUsername: @ 01c473bc

/* Function Stack Size: 0x18 bytes */

ID WCRefineNameplateSpecialUserDetailViewController::initWithUsername_
             (ID param_1,SEL param_2,ID param_3)

{
  ID *pIVar1;
  undefined8 **ppuVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_60;
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
  local_30 = PTR_WCRefineNameplateSpecialUserDetailViewController_026cffa0;
  _objc_msgSendSuper2(ppuVar2,PTR_s_initWithNibName_bundle__026a2600,0);
  local_18 = (ID *)ppuVar2;
  _objc_storeStrong(&local_18);
  if (ppuVar2 != (undefined8 **)0x0) {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_copy_0269d150);
    local_60 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_60 = &::cf___;
    }
    _objc_storeStrong((long)local_18 + (long)_username,local_60);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  pIVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return (ID)(undefined8 **)pIVar1;
}

