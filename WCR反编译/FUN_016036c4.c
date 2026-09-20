// FUN_016036c4 @ 016036c4

void FUN_016036c4(void)

{
  bool bVar1;
  undefined8 ***pppuVar2;
  char *pcVar3;
  undefined8 ****ppppuVar4;
  undefined *puVar5;
  undefined8 ***local_48 [2];
  uint local_38;
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  
  pcVar3 = "CAppViewControllerManager";
  _objc_getClass();
  local_20 = (undefined8 ***)pcVar3;
  if (((undefined8 ****)pcVar3 != (undefined8 ****)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_respondsToSelector__026ca818,
                 PTR_s_getCurrentNavigationController_0269d620), ((ulong)pcVar3 & 1) != 0)) {
    ppppuVar4 = (undefined8 ****)local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getCurrentNavigationController_0269d620);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    local_28 = ppppuVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(ppppuVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    pppuVar2 = local_28;
    bVar1 = ((ulong)ppppuVar4 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pppuVar2;
    }
    local_38 = (uint)bVar1;
    pcVar3 = (char *)&local_28;
    _objc_storeStrong(pcVar3,0);
    if (local_38 != 0) goto LAB_01603908;
  }
  FUN_01604cbc();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  local_48[0] = (undefined8 ***)pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
  pppuVar2 = local_48[0];
  if (((ulong)pcVar3 & 1) == 0) {
    ppppuVar4 = (undefined8 ****)local_48[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_18 = ppppuVar4;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pppuVar2;
  }
  local_38 = 1;
  _objc_storeStrong(local_48,0);
LAB_01603908:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

