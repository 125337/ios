// FUN_0055f0a8 @ 0055f0a8

void FUN_0055f0a8(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  ulong local_50 [3];
  undefined *local_38;
  undefined4 local_2c;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_WCRefineFindViewController_026a50b0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  if (param_1 == 0) {
    local_2c = 1;
  }
  else {
    puVar1 = PTR_WCRefineActionMenuConfigViewController_026ce608;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithListKind__026a2f00,4);
    local_38 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = &cf_PushViewController_animated_;
    local_50[0] = uVar2;
    _NSSelectorFromString();
    uVar2 = local_50[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_respondsToSelector__026ca818,pcVar3);
    if ((uVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50[0],PTR_s_pushViewController_animated__0269d590,local_38,1);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_50[0],pcVar3,local_38,1);
    }
    _objc_storeStrong(local_50);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

