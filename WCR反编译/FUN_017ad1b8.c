// FUN_017ad1b8 @ 017ad1b8

byte FUN_017ad1b8(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_48;
  byte local_3d;
  cfstringStruct *local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
    goto LAB_017ad5a4;
  }
  pcVar1 = &cf___wcr_beta_subpage_probe__;
  FUN_00982d48();
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_isEqualToString__0269ccc8,&cf___wcr_beta_subpage_probe__);
  uVar3 = local_20;
  local_3d = ((byte)pcVar1 ^ 1) & 1;
  if (local_3d == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar4 = local_20;
    if ((uVar3 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___UITabBarController_026ce108;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
      uVar3 = local_20;
      if ((uVar4 & 1) == 0) {
        puVar2 = PTR__OBJC_CLASS___UIAlertController_026ce178;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIAlertController_026ce178,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
        if ((uVar3 & 1) == 0) {
          uVar3 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          local_48 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
          if (((uVar3 == 0) ||
              (uVar3 = local_48,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_48,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineRootViewController),
              (uVar3 & 1) != 0)) ||
             (uVar3 = local_48,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_48,PTR_s_isEqualToString__0269ccc8,&cf_WebViewController),
             (uVar3 & 1) != 0)) {
            local_11 = 0;
          }
          else {
            FUN_017ade24();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_11 = (byte)uVar4 & 1;
            (*(code *)PTR__objc_release_02578630)(uVar3);
          }
          local_24 = 1;
          _objc_storeStrong(&local_48,0);
          goto LAB_017ad584;
        }
      }
    }
    local_11 = 0;
    local_24 = 1;
  }
LAB_017ad584:
  _objc_storeStrong(&local_30,0);
LAB_017ad5a4:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

