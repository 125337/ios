// FUN_002fb088 @ 002fb088

/* WARNING: Removing unreachable block (ram,0x002fb1f8) */

void FUN_002fb088(double param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  if (local_18 != 0) {
    if (DAT_02323d38 < param_1) {
      lVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_effect_026a1fb0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (lVar1 == 0) {
        puVar2 = PTR__OBJC_CLASS___UIBlurEffect_026cdf90;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIBlurEffect_026cdf90,PTR_s_effectWithStyle__026ca628,8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setEffect__026ca930);
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
    }
    else {
      lVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_effect_026a1fb0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (lVar1 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setEffect__026ca930,0);
      }
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

