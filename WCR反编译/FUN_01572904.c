// FUN_01572904 @ 01572904

void FUN_01572904(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_68;
  ulong local_38;
  ulong local_30;
  undefined4 local_24;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if ((local_18 == 0) || (local_20 == 0)) {
    local_24 = 1;
  }
  else {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_68 = uVar2;
    if (uVar2 == 0) {
      local_38 = uVar2;
      FUN_015611fc();
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_38;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = local_68;
    if (uVar2 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar1 = PTR_s_PushViewController_animated__0269cd40;
    if (local_30 == 0) {
      local_24 = 1;
    }
    else {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_respondsToSelector__026ca818,
                 PTR_s_PushViewController_animated__0269cd40);
      if ((uVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_pushViewController_animated__0269d590,local_20,1);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,puVar1,local_20,1);
      }
      local_24 = 0;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

