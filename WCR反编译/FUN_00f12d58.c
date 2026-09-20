// FUN_00f12d58 @ 00f12d58

byte FUN_00f12d58(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_48;
  long local_40;
  ulong local_38;
  byte local_29;
  undefined8 *local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_38 = local_20;
  local_29 = 0;
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  local_28 = param_2;
  (*(code *)PTR__objc_retain_02578638)();
  for (local_40 = 0; uVar3 = local_38, local_40 < 0x50 && local_38 != 0; local_40 = local_40 + 1) {
    puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) == 0) {
      uVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_nextResponder_0269d0d8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_38;
      local_38 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    else {
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_containsString__0269d0b0,&cf_WCPayBalanceDetailViewController);
      if ((uVar3 & 1) == 0) {
        uVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_containsString__0269d0b0,&cf_WCPayLQTDetailViewController);
        if ((uVar3 & 1) == 0) {
          uVar3 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_containsString__0269d0b0,&cf_KindaViewController);
          if (((uVar3 & 1) != 0) ||
             (uVar3 = local_48,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_48,PTR_s_containsString__0269d0b0,&cf_WCPayWalletViewController),
             (uVar3 & 1) != 0)) {
            local_29 = 1;
          }
          uVar4 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_nextResponder_0269d0d8);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_38;
          local_38 = uVar4;
          (*(code *)PTR__objc_release_02578630)(uVar3);
          bVar1 = false;
        }
        else {
          if (local_28 != (undefined8 *)0x0) {
            *local_28 = 2;
          }
          local_11 = 1;
          bVar1 = true;
        }
      }
      else {
        if (local_28 != (undefined8 *)0x0) {
          *local_28 = 1;
        }
        local_11 = 1;
        bVar1 = true;
      }
      _objc_storeStrong(&local_48,0);
      if (bVar1) goto LAB_00f13048;
    }
  }
  local_11 = local_29 & 1;
LAB_00f13048:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

