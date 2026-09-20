// FUN_002d9d18 @ 002d9d18

byte FUN_002d9d18(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  bool bVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  uint local_104;
  uint local_88;
  ulong local_78;
  undefined1 local_6a;
  undefined1 local_69;
  ulong local_68;
  ulong local_60;
  undefined4 local_58;
  byte local_51;
  undefined *local_50;
  undefined8 local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_51 = 0;
  local_88 = 1;
  if (local_30 != 0) {
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_88 = (uint)puVar4 ^ 1;
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if ((local_88 & 1) != 0) {
    local_21 = 0;
    local_58 = 1;
    goto LAB_002da33c;
  }
  uVar5 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  local_69 = 0;
  bVar2 = false;
  uVar1 = uVar5 != 0;
  local_60 = uVar5;
  if ((bool)uVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_topViewController_0269e588);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = uVar5 != local_30;
    local_69 = uVar1;
    local_68 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar5);
    uVar1 = local_69;
  }
  local_69 = uVar1;
  if (bVar2) {
    local_21 = 0;
    local_58 = 1;
  }
  else {
    uVar5 = local_30;
    _objc_getAssociatedObject(local_30,&DAT_028c983b);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar5);
    local_6a = (undefined1)uVar6;
    if ((uVar6 & 1) == 0) {
      uVar5 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hidesBottomBarWhenPushed_026a1a98);
      uVar3 = (uint)uVar5;
      if (((uVar5 & 1) == 0) && (FUN_002d524c(), (uVar3 & 1) == 0)) {
        local_21 = 0;
        local_58 = 1;
        goto LAB_002da31c;
      }
    }
    uVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_tabBarController_026a1c08);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_78 = uVar6;
    (*(code *)PTR__objc_release_02578630)(uVar5);
    local_104 = 1;
    if (local_78 != 0) {
      uVar5 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_104 = (uint)uVar6 ^ 1;
      (*(code *)PTR__objc_release_02578630)(uVar5);
    }
    bVar2 = (local_104 & 1) == 0;
    if (bVar2) {
      FUN_002dab68(local_78,local_38);
      uVar5 = local_30;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar5,&DAT_028c983b,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    local_58 = 1;
    local_21 = bVar2;
    _objc_storeStrong(&local_78,0);
  }
LAB_002da31c:
  _objc_storeStrong(&local_60,0);
LAB_002da33c:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

