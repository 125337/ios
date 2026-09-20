// forwardingTargetForSelector: @ 01c5384c

/* Function Stack Size: 0x18 bytes */

ID WCRefineNameplateSpecialUsersViewController::forwardingTargetForSelector_
             (ID param_1,SEL param_2,SEL param_3)

{
  ID IVar1;
  undefined8 ***pppuVar2;
  undefined8 **local_40;
  undefined *local_38;
  SEL local_30;
  SEL local_28;
  undefined8 **local_20;
  undefined8 **local_18;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = (undefined8 **)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_forwardingDelegate_026c1d00);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if ((IVar1 & 1) == 0) {
    pppuVar2 = &local_40;
    local_40 = local_20;
    local_38 = PTR_WCRefineNameplateSpecialUsersViewController_026cffa8;
    _objc_msgSendSuper2(pppuVar2,PTR_s_forwardingTargetForSelector__026a4ff0,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pppuVar2;
  }
  else {
    pppuVar2 = (undefined8 ***)local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_forwardingDelegate_026c1d00);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pppuVar2;
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

