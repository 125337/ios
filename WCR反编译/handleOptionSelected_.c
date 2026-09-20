// handleOptionSelected: @ 0186ae04

/* Function Stack Size: 0x18 bytes */

void WCRefineBottomBarLongPressActionSelectorViewController::handleOptionSelected_
               (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  ID IVar3;
  ID IVar4;
  dispatch_time_t dVar5;
  undefined *puVar6;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  ID local_88;
  undefined4 local_80;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined1 auStack_50 [8];
  undefined **local_48;
  undefined1 auStack_40 [8];
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf__IN);
  if ((uVar1 & 1) == 0) {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_onOptionSelected_026b6bf8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar3 != 0) {
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_onOptionSelected_026b6bf8);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_38;
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_buttonIndex_0269e388);
      (**(code **)(IVar3 + 0x10))(IVar3,uVar1,IVar4);
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    dVar5 = _dispatch_time(0,100000000);
    puVar6 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_28;
    local_a8 = PTR___NSConcreteStackBlock_02578660;
    local_a0 = 0xc2000000;
    local_9c = 0;
    local_98 = FUN_0186b300;
    local_90 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = IVar3;
    _dispatch_after(dVar5,puVar6,&local_a8);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    _objc_storeStrong(&local_88,0);
    local_80 = 0;
  }
  else {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_onCustomSelected_026b6bf0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar3 != 0) {
      _objc_initWeak(auStack_40,local_28);
      ppuVar2 = &local_70;
      local_70 = PTR___NSConcreteStackBlock_02578660;
      local_68 = 0xc2000000;
      local_64 = 0;
      local_60 = FUN_0186b16c;
      local_58 = &DAT_0257be28;
      _objc_copyWeak(auStack_50,auStack_40);
      _objc_retainBlock();
      IVar3 = local_28;
      local_48 = ppuVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_onCustomSelected_026b6bf0);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_buttonIndex_0269e388);
      (**(code **)(IVar3 + 0x10))(IVar3,IVar4,local_48);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      _objc_storeStrong(&local_48,0);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_40);
    }
    local_80 = 1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

