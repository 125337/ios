// FUN_00ef8900 @ 00ef8900

byte FUN_00ef8900(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_68;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    local_68 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_68;
  }
  else {
    local_68 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_68;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if ((local_20 == 0) || (local_30 == 0)) {
    local_11 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
    puVar2 = PTR_s_PushViewController_animated__0269cd40;
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,
               PTR_s_PushViewController_animated__0269cd40);
    if ((uVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_pushViewController_animated__0269d590,local_20,1);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,puVar2,local_20,1);
    }
    local_11 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

