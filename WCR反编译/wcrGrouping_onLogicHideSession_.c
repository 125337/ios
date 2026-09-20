// wcrGrouping_onLogicHideSession: @ 003a69a8

/* Function Stack Size: 0x18 bytes */

void WCRefineHomeSessionGroupingHook::wcrGrouping_onLogicHideSession_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  ID IVar3;
  ID local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  FUN_00366324();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_30 = uVar1;
  FUN_003a6b28(local_18,uVar1);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_18;
  local_38 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrGrouping_active_026a2a40);
  IVar2 = local_18;
  if (((IVar3 & 1) == 0) || (local_38 == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_wcrGrouping_onLogicHideSession__026a2990,local_28);
    FUN_003a6ea0(local_30);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrGrouping_active_026a2a40);
    if ((IVar2 & 1) != 0) {
      FUN_003736ec(local_18);
      FUN_00368c14(local_18,&cf_hideInlineSession);
    }
  }
  else {
    IVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    FUN_00369a04(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    FUN_00368c14(local_18,&cf_hideGroupSessions);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

