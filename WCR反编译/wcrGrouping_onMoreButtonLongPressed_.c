// wcrGrouping_onMoreButtonLongPressed: @ 0035cac8

/* Function Stack Size: 0x18 bytes */

void WCRGroupingSessionListViewController::wcrGrouping_onMoreButtonLongPressed_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 local_50;
  undefined8 uStack_48;
  ID local_38;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar1;
  if (IVar1 == 0) {
    IVar2 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028ca0e7);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_30;
    local_30 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  IVar1 = local_30;
  FUN_0035cd34();
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar1;
  if (IVar1 == 0) {
    uStack_48 = *(undefined8 *)(PTR__CGPointZero_025782e0 + 8);
    local_50 = *(undefined8 *)PTR__CGPointZero_025782e0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_locationInView__026ca798,IVar1);
    local_50 = in_d0;
    uStack_48 = in_d1;
  }
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
  if (IVar1 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
    IVar2 = local_18;
    IVar1 = local_30;
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrGrouping_moreMenuEntries_026a26c0);
    _objc_retainAutoreleasedReturnValue();
    FUN_0035d594(IVar2,IVar1);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    FUN_0035f02c(local_50,uStack_48,local_18,0);
  }
  else if (IVar1 == 2) {
    FUN_0035f02c(local_50,uStack_48,local_18,1);
  }
  else if (IVar1 == 3) {
    FUN_0035f02c(local_50,uStack_48,local_18,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrGrouping_commitMoreMenuSelect_026a26c8);
  }
  else if (IVar1 - 4 < 2) {
    FUN_0035f0b0(local_18,1);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

