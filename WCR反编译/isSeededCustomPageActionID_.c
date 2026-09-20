// isSeededCustomPageActionID: @ 01cc47cc

/* Function Stack Size: 0x18 bytes */

bool WCRefineProfileCardActionCatalog::isSeededCustomPageActionID_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  byte local_40;
  ulong local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_40 = 0;
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    FUN_01cc4734();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = (byte)uVar4;
    local_38 = uVar3;
  }
  local_11 = local_40 & 1;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

