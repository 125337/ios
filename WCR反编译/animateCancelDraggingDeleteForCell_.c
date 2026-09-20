// animateCancelDraggingDeleteForCell: @ 01b13934

/* Function Stack Size: 0x18 bytes */

void WCRefineKeywordAlertHistoryCardViewController::animateCancelDraggingDeleteForCell_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ID IVar5;
  ID IVar6;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  ID local_68;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  long local_40;
  ID local_38;
  uint local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar4 = local_28;
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  puVar2 = PTR___NSConcreteStackBlock_02578660;
  bVar1 = local_28 != 0;
  if (bVar1) {
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_01b13b08;
    local_48 = &DAT_0257a7a0;
    (*(code *)PTR__objc_retain_02578638)();
    IVar5 = local_18;
    local_40 = lVar4;
    (*(code *)PTR__objc_retain_02578638)();
    IVar6 = local_18;
    local_38 = IVar5;
    local_88 = puVar2;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_01b13bf8;
    local_70 = &DAT_02579d00;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323f18,0,DAT_02323f60,DAT_02323c98,puVar3,
               PTR_s_animateWithDuration_delay_usingS_026ca4f8,&DAT_00020002,&local_60,&local_88);
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_38,0);
    _objc_storeStrong(&local_40,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_resetDraggingDeleteState_026bebe0);
  }
  local_2c = (uint)!bVar1;
  _objc_storeStrong(&local_28,0);
  return;
}

