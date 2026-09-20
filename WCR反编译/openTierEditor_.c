// openTierEditor: @ 01809b18

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineAutoAcceptTransferTierListViewController::openTierEditor_
          (WCRefineAutoAcceptTransferTierListViewController *this,ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ID IVar5;
  ID IVar6;
  undefined8 in_d0;
  ulong local_80;
  ulong local_70;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_userInfo_0269f138);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  uVar4 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    local_70 = 0;
  }
  else {
    local_70 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_userInfo_0269f138);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_70;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_70;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (local_30 == 0) {
    local_80 = 0x7fffffffffffffff;
  }
  else {
    local_80 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_unsignedIntegerValue_026cabb8);
  }
  bVar1 = true;
  if (local_80 != 0x7fffffffffffffff) {
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_rules_026a44d8);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = IVar6 <= local_80;
    (*(code *)PTR__objc_release_02578630)(IVar5);
  }
  if (!bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_rules_026a44d8);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    FUN_01804e40();
    (*(code *)PTR__objc_release_02578630)(IVar6);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_msgSend_02578628)
              (in_d0,local_18,PTR_s_pushEditorWithAmount_ruleIndex__026b5c58,local_80);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

