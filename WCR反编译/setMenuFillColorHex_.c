// setMenuFillColorHex: @ 0160f198

/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatProfileStore::setMenuFillColorHex_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) != 0) {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if (uVar2 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setCurrentValue_forKey__026b18a8,local_28,&cf_menuFillColorHex);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

