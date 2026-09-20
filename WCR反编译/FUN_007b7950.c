// FUN_007b7950 @ 007b7950

void FUN_007b7950(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_50;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  puVar1 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_50 = 0;
  }
  else {
    local_50 = local_18;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_50;
  if (local_50 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineTelegramGroupingViewController_026ce940,
               PTR_s_presentFromViewController_halfSc_026a82f8,local_50,1);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

