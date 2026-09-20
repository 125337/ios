// FUN_003788e8 @ 003788e8

byte FUN_003788e8(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong local_40;
  ulong local_38;
  uint local_2c;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (local_20 == 0) {
    local_11 = 0;
    local_2c = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (puVar4 + -2 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_20;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar5);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_11 = 1;
      local_2c = 1;
    }
    else {
      FUN_0037fc28(puVar4 + -2);
      uVar5 = local_20;
      if (((ulong)puVar4 & 1) == 0) {
        puVar3 = PTR__OBJC_CLASS___UIViewController_026cdf80;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
        uVar6 = local_20;
        if ((uVar5 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_38 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_navigationController_0269d458);
          _objc_retainAutoreleasedReturnValue();
          bVar2 = false;
          local_40 = uVar6;
          if (uVar6 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_topViewController_0269e588);
            _objc_retainAutoreleasedReturnValue();
            bVar2 = uVar6 != local_38;
            (*(code *)PTR__objc_release_02578630)(uVar6);
          }
          if (bVar2) {
            local_11 = 1;
          }
          local_2c = (uint)bVar2;
          _objc_storeStrong(&local_40);
          _objc_storeStrong(&local_38,0);
          if (local_2c != 0) goto LAB_00378c84;
        }
        bVar1 = 0;
        if (local_28 != 0) {
          lVar7 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_window_026cabf0);
          _objc_retainAutoreleasedReturnValue();
          local_11 = lVar7 == 0;
          (*(code *)PTR__objc_release_02578630)(lVar7);
          bVar1 = local_11;
        }
        local_11 = bVar1;
        local_2c = 1;
      }
      else {
        local_11 = 1;
        local_2c = 1;
      }
    }
  }
LAB_00378c84:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

