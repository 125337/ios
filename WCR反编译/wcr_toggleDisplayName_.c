// wcr_toggleDisplayName: @ 01555954

/* Function Stack Size: 0x18 bytes */

void WCRefineTopBarProfileCardPresenter::wcr_toggleDisplayName_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong local_a8;
  ulong local_78;
  ulong local_68;
  ulong local_60;
  byte local_52;
  byte local_51;
  ulong local_50;
  ulong local_48;
  undefined4 local_40;
  bool local_39;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
  uVar5 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  local_39 = false;
  bVar1 = (uVar5 & 1) == 0;
  if (bVar1) {
    local_78 = 0;
  }
  else {
    local_78 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_78;
  }
  local_39 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_78;
  if ((local_39 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if (local_30 == 0) {
    local_40 = 1;
  }
  else {
    uVar3 = local_30;
    _objc_getAssociatedObject(local_30,DAT_028c5e28);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    FUN_01528c84();
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_30;
    _objc_getAssociatedObject(local_30,DAT_028c5e30);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    FUN_01528c84();
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if ((uVar3 == 0) ||
       (uVar3 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
       uVar3 == 0)) {
      local_40 = 1;
    }
    else {
      uVar3 = local_30;
      _objc_getAssociatedObject(local_30,DAT_028c5e40);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      local_51 = (byte)uVar5;
      local_52 = (local_51 ^ 1) & 1;
      uVar3 = local_30;
      _objc_getAssociatedObject(local_30,DAT_028c5e38);
      _objc_retainAutoreleasedReturnValue();
      if ((local_52 & 1) == 0) {
        local_a8 = local_48;
      }
      else {
        local_a8 = local_50;
      }
      local_60 = uVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = local_a8;
      FUN_0154bed8(local_30,local_60,local_a8);
      uVar3 = local_30;
      uVar2 = DAT_028c5e40;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_52 & 1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar3,uVar2,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      FUN_01555510();
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_60,0);
      local_40 = 0;
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

