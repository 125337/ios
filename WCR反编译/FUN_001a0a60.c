// FUN_001a0a60 @ 001a0a60

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001a0a60(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  undefined *local_140;
  undefined *local_120;
  long local_f0;
  undefined *local_b8;
  undefined *local_a8;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  byte local_79;
  long local_78;
  byte local_69;
  long local_68;
  byte local_59;
  long local_58;
  long local_40;
  byte local_31;
  long local_30;
  undefined *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_31 = 0;
  local_59 = 0;
  local_69 = 0;
  local_79 = 0;
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = local_30;
  if (lVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_traitCollection_026caba8);
    _objc_retainAutoreleasedReturnValue();
    local_79 = 1;
    local_78 = local_f0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_69 = 1;
    local_68 = local_f0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_f0;
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  (*(code *)PTR__objc_release_02578630)(lVar2);
  lVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_userInterfaceStyle_026cabc8);
  local_31 = lVar2 == 2;
  _objc_storeStrong(&local_40,0);
  local_120 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = (local_31 & 1) == 0;
  local_88 = local_120;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_avatarCornerBorderColorLight_0269dfd8);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = local_120;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_avatarCornerBorderColorDark_0269dfe8);
    _objc_retainAutoreleasedReturnValue();
    local_98 = local_120;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_90 = local_120;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_a8);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_98);
  }
  bVar1 = local_90 == (undefined *)0x0;
  if (bVar1) {
    local_140 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
    _objc_retainAutoreleasedReturnValue();
    local_b8 = local_140;
  }
  else {
    local_140 = local_90;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_140;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_b8);
  }
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

