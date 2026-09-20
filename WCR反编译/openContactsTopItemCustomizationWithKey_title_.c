// openContactsTopItemCustomizationWithKey:title: @ 01e641c0

/* Function Stack Size: 0x20 bytes */

void WCRefineTextReplaceViewController::openContactsTopItemCustomizationWithKey_title_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  ID IVar6;
  cfstringStruct *local_c0;
  cfstringStruct *local_a8;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  ID local_70;
  cfstringStruct *local_68;
  undefined *local_60;
  undefined4 local_54;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  pcVar4 = local_38;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((ulong)pcVar4 & 1) == 0) {
    local_a8 = &::cf___;
  }
  else {
    local_a8 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  pcVar4 = local_40;
  local_48 = local_a8;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((ulong)pcVar4 & 1) == 0) {
    local_c0 = &::cf___;
  }
  else {
    local_c0 = local_40;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_c0;
  pcVar4 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if ((pcVar4 == (cfstringStruct *)0x0) ||
     (pcVar4 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
     pcVar4 == (cfstringStruct *)0x0)) {
    local_54 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_28;
    IVar5 = local_28;
    local_60 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_customContactsTopNames_0269fcd0);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_28;
    local_90 = PTR___NSConcreteStackBlock_02578660;
    local_88 = 0xc2000000;
    local_84 = 0;
    local_80 = FUN_01e6452c;
    local_78 = &DAT_0257cbd8;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar4 = local_48;
    local_70 = IVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_showInputAlertWithTitle_placehol_026b9588,puVar3,&cf__INTy,IVar6,
               &local_90);
    (*(code *)PTR__objc_release_02578630)(IVar6);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_60,0);
    local_54 = 0;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

