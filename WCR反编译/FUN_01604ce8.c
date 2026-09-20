// FUN_01604ce8 @ 01604ce8

void FUN_01604ce8(void)

{
  undefined1 uVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  bool bVar4;
  char *pcVar5;
  undefined8 ****ppppuVar6;
  undefined *puVar7;
  undefined8 ***local_b0;
  undefined8 ***local_a0 [2];
  undefined8 ***local_90 [4];
  undefined8 ***local_70;
  undefined8 ***local_68;
  undefined8 ***local_60;
  uint local_58;
  undefined1 local_51;
  undefined8 ***local_50;
  undefined8 ***local_48;
  undefined8 ***local_40;
  undefined8 ***local_38;
  undefined8 ***local_30;
  undefined8 ***local_28;
  
  pcVar5 = "CAppViewControllerManager";
  _objc_getClass();
  local_30 = (undefined8 ***)pcVar5;
  if (((undefined8 ****)pcVar5 != (undefined8 ****)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar5,PTR_s_respondsToSelector__026ca818,
                 PTR_s_getCurrentNavigationController_0269d620), ((ulong)pcVar5 & 1) != 0)) {
    ppppuVar6 = (undefined8 ****)local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getCurrentNavigationController_0269d620);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    local_38 = ppppuVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(ppppuVar6,PTR_s_isKindOfClass__0269cd68,puVar7);
    if (((ulong)ppppuVar6 & 1) == 0) {
      local_b0 = (undefined8 ****)0x0;
    }
    else {
      local_b0 = local_38;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_visibleViewController_0269d460);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 0;
    bVar4 = false;
    uVar1 = (undefined8 ****)local_b0 != (undefined8 ****)0x0;
    local_48 = local_b0;
    if ((bool)uVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      bVar4 = (undefined8 ****)local_b0 != (undefined8 ****)0x0;
      local_51 = uVar1;
      local_50 = local_b0;
      (*(code *)PTR__objc_release_02578630)(local_b0);
      uVar1 = local_51;
    }
    local_51 = uVar1;
    pppuVar3 = local_40;
    pppuVar2 = local_48;
    if (bVar4) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pppuVar2;
      local_58 = 1;
    }
    else if ((undefined8 ****)local_40 == (undefined8 ****)0x0) {
      local_58 = 0;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pppuVar3;
      local_58 = 1;
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    pcVar5 = (char *)&local_38;
    _objc_storeStrong(pcVar5,0);
    if (local_58 != 0) goto LAB_016052f8;
  }
  FUN_01604cbc();
  _objc_retainAutoreleasedReturnValue();
  local_60 = (undefined8 ***)pcVar5;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  ppppuVar6 = (undefined8 ****)local_60;
  if ((undefined8 ****)pcVar5 == (undefined8 ****)0x0) {
    puVar7 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(ppppuVar6,PTR_s_isKindOfClass__0269cd68,puVar7);
    pppuVar2 = local_60;
    if (((ulong)ppppuVar6 & 1) == 0) {
      local_68 = (undefined8 ****)0x0;
      pcVar5 = "MicroMessengerAppDelegate";
      _objc_getClass();
      local_70 = (undefined8 ***)pcVar5;
      if (((undefined8 ****)pcVar5 != (undefined8 ****)0x0) &&
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar5,PTR_s_respondsToSelector__026ca818,PTR_s_GlobalInstance_0269d648),
         ((ulong)pcVar5 & 1) != 0)) {
        ppppuVar6 = (undefined8 ****)local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_GlobalInstance_0269d648);
        _objc_retainAutoreleasedReturnValue();
        pppuVar2 = local_68;
        local_68 = ppppuVar6;
        (*(code *)PTR__objc_release_02578630)(pppuVar2);
      }
      local_90[0] = (undefined8 ***)0x0;
      ppppuVar6 = (undefined8 ****)local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_valueForKey__0269d128,&cf_m_appViewControllerMgr);
      _objc_retainAutoreleasedReturnValue();
      pppuVar2 = local_90[0];
      local_90[0] = ppppuVar6;
      (*(code *)PTR__objc_release_02578630)(pppuVar2);
      if (((undefined8 ****)local_90[0] == (undefined8 ****)0x0) ||
         (ppppuVar6 = (undefined8 ****)local_90[0],
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_90[0],PTR_s_respondsToSelector__026ca818,
                    PTR_s_getNewMainFrameViewController_0269d650), ((ulong)ppppuVar6 & 1) == 0)) {
LAB_016052a0:
        pppuVar2 = local_60;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pppuVar2;
        local_58 = 1;
      }
      else {
        ppppuVar6 = (undefined8 ****)local_90[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_90[0],PTR_s_getNewMainFrameViewController_0269d650);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___UIViewController_026cdf80;
        local_a0[0] = ppppuVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(ppppuVar6,PTR_s_isKindOfClass__0269cd68,puVar7);
        pppuVar2 = local_a0[0];
        bVar4 = ((ulong)ppppuVar6 & 1) != 0;
        if (bVar4) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = pppuVar2;
        }
        local_58 = (uint)bVar4;
        _objc_storeStrong(local_a0,0);
        if (local_58 == 0) goto LAB_016052a0;
      }
      _objc_storeStrong(local_90);
      _objc_storeStrong(&local_68,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pppuVar2;
      local_58 = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = ppppuVar6;
    local_58 = 1;
  }
  _objc_storeStrong(&local_60,0);
LAB_016052f8:
  _objc_autoreleaseReturnValue(local_28);
  return;
}

