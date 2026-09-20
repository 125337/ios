// setToDoCardBackgroundMediaPath: @ 021785c8

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setToDoCardBackgroundMediaPath_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  SEL SVar5;
  ID local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_30 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) != 0) {
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    uVar3 = local_28;
    IVar1 = local_30;
    if (uVar4 != 0) {
      SVar5 = local_20;
      FUN_0216dcbc();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setObject_forKey__026ca9e8,uVar3);
      (*(code *)PTR__objc_release_02578630)(SVar5);
      goto LAB_0217873c;
    }
  }
  IVar1 = local_30;
  SVar5 = local_20;
  FUN_0216dcbc();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_removeObjectForKey__0269d700);
  (*(code *)PTR__objc_release_02578630)(SVar5);
LAB_0217873c:
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

