// FUN_00791044 @ 00791044

void FUN_00791044(double param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  
  (*DAT_028cca78)(param_4,param_5);
  if ((DAT_028cca88 & 1) == 0) {
    lVar3 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)(param_4,PTR_s_st_switchThemes_026a80b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (lVar3 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(param_4,PTR_s_st_removeThemeSwitch_026a80b8);
    }
  }
  else {
    lVar3 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)(param_4,PTR_s_bounds_026ca548);
    uVar2 = (uint)lVar3;
    _CGRectIsEmpty();
    bVar1 = false;
    if ((uVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(param_4,PTR_s_bounds_026ca548);
      bVar1 = false;
      if (0.0 < param_3) {
        (*(code *)PTR__objc_msgSend_02578628)(param_4,PTR_s_bounds_026ca548);
        bVar1 = 0.0 < param_1;
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(param_4,PTR_s_st_setup_026a80a8);
    }
  }
  return;
}

