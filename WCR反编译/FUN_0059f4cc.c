// FUN_0059f4cc @ 0059f4cc

byte FUN_0059f4cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  char *local_a0;
  char *local_48;
  char *local_40;
  undefined4 local_38;
  ulong local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar2 = local_28;
  if (local_20 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (lVar3 == 0) {
        local_a0 = "MMUINavigationController";
        _objc_getClass();
        if (local_a0 == (char *)0x0) {
          local_a0 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
        }
        local_40 = local_a0;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a0,PTR_s_initWithRootViewController__0269d2a0,local_28);
        local_48 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setModalPresentationStyle__0269d2a8,0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_presentViewController_animated_c_0269d2b0,local_48,1,0);
        local_11 = 1;
        local_38 = 1;
        _objc_storeStrong(&local_48,0);
      }
      else {
        lVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar3);
        local_11 = 1;
        local_38 = 1;
      }
      goto LAB_0059f7ac;
    }
  }
  local_11 = 0;
  local_38 = 1;
LAB_0059f7ac:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

