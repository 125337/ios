// restoreNicknamePushIfNeeded: @ 010e2a18

/* Function Stack Size: 0x18 bytes */

void WCRefineNameplateHelper::restoreNicknamePushIfNeeded_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  ulong local_38;
  uint local_2c;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_2c = 1;
  }
  else {
    uVar3 = local_28;
    _objc_getAssociatedObject(local_28,DAT_0280e1c0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_38 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    bVar1 = (uVar3 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_frame_026ca640);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_doubleValue_026ca608);
      (*(code *)PTR__objc_msgSend_02578628)
                (in_d0,in_d1,in_d2,in_d3,local_28,PTR_s_setFrame__026ca960);
      _objc_setAssociatedObject(local_28,DAT_0280e1c0,0,1);
    }
    local_2c = (uint)!bVar1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

