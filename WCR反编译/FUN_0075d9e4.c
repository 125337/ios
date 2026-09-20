// FUN_0075d9e4 @ 0075d9e4

void FUN_0075d9e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_40;
  ulong local_38;
  cfstringStruct *local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_20;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = &cf_wcr_special_original_;
  (*(code *)PTR__objc_msgSend_02578628)
            (&cf_wcr_special_original_,PTR_s_stringByAppendingString__0269d398);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  _NSSelectorFromString();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  local_30 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,pcVar3,local_28);
  uVar5 = local_18;
  if ((DAT_028cc880 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((uVar5 & 1) != 0) && (uVar6 = local_18, FUN_007612d8(), uVar5 = local_18, (uVar6 & 1) != 0)
       ) {
      (*(code *)PTR__objc_retain_02578638)();
      local_38 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar5);
      if ((uVar6 & 1) == 0) {
        uVar5 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        local_40 = uVar5;
        while (local_40 != 0) {
          uVar5 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_class_0269cd60);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar5);
          if ((uVar6 & 1) != 0) {
            _objc_storeStrong(&local_38,local_40);
            break;
          }
          uVar6 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = local_40;
          local_40 = uVar6;
          (*(code *)PTR__objc_release_02578630)(uVar5);
        }
        _objc_storeStrong(&local_40,0);
      }
      DAT_028cc880 = 1;
      FUN_00765798(local_38);
      DAT_028cc880 = 0;
      _objc_storeStrong(&local_38,0);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

