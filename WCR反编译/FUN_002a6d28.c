// FUN_002a6d28 @ 002a6d28

void FUN_002a6d28(double param_1,ulong param_2,undefined8 param_3,byte param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong local_50 [3];
  byte local_31;
  undefined8 local_30;
  ulong local_28;
  
  local_31 = param_4;
  local_30 = param_3;
  local_28 = param_2;
  (*DAT_028c96b8)(param_2,param_3,param_4 & 1);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tabBarController_026a1c08);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  FUN_002bad18();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (((uVar4 & 1) == 0) &&
     (uVar2 = local_28, FUN_002d9d18(local_28,&cf_MMTabBarBase_viewDidAppear), (uVar2 & 1) == 0)) {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tabBarController_026a1c08);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_stringWithFormat__0269cca8,
               &cf_MMTabBarBaseViewController_viewDidAppear___);
    _objc_retainAutoreleasedReturnValue();
    FUN_002b7184(uVar3);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tabBarController_026a1c08);
    _objc_retainAutoreleasedReturnValue();
    FUN_002d77c4();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tabBarController_026a1c08);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_50[0] = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_28;
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    uVar3 = local_50[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_isHidden_026ca768);
    bVar1 = true;
    if ((uVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_alpha_026ca4d8);
      bVar1 = param_1 <= DAT_02323d38;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberWithBool__0269ce60,bVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar2,&DAT_028c983b,puVar5,1);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(local_50,0);
  }
  return;
}

