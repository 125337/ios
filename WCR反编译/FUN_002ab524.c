// FUN_002ab524 @ 002ab524

void FUN_002ab524(ulong param_1,undefined8 param_2,byte param_3)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1;
  FUN_002bad18();
  if ((uVar2 & 1) == 0) {
    if (((param_3 & 1) == 0) || (FUN_002d50e0(), (uVar2 & 1) == 0)) {
      uVar2 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isHidden_026ca768);
      if ((param_3 & 1) == 0) {
        FUN_002d4e8c(param_1);
        FUN_002b7184(param_1,&cf_MMTabBar_setHidden_beforeShow);
        uVar3 = param_1;
        FUN_002c73bc();
        if ((uVar3 & 1) == 0) {
          uVar3 = param_1;
          FUN_002b83f8();
          if ((uVar3 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (0x3ff0000000000000,param_1,PTR_s_setAlpha__026ca860);
            uVar3 = param_1;
            FUN_0029cc70();
            _objc_retainAutoreleasedReturnValue();
            FUN_002bb194(param_1,uVar3,0);
            (*(code *)PTR__objc_release_02578630)(uVar3);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(0,param_1,PTR_s_setAlpha__026ca860);
          }
        }
        else {
          FUN_002dc340(param_1,&cf_MMTabBar_setHidden_beforeShow);
        }
      }
      else {
        FUN_002daee4(param_1);
        FUN_002bf5c8(param_1,&cf_MMTabBar_setHidden_beforeHide);
      }
      (*DAT_028c97a8)(param_1,param_2,param_3 & 1);
      if ((param_3 & 1) == 0) {
        uVar3 = param_1;
        FUN_002c007c();
        FUN_002b7184(param_1,&cf_MMTabBar_setHidden_afterShow);
        if ((uVar3 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,param_1,PTR_s_setAlpha__026ca860)
          ;
          uVar3 = param_1;
          FUN_0029cc70();
          _objc_retainAutoreleasedReturnValue();
          FUN_002bb194(param_1,uVar3,0);
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
      }
      if ((((byte)uVar2 & 1) != (param_3 & 1)) || ((param_3 & 1) != 0)) {
        pcVar1 = &cf_MMTabBar_setHidden_hide;
        if ((param_3 & 1) == 0) {
          pcVar1 = &cf_MMTabBar_setHidden_show;
        }
        FUN_002c3da8(param_1,pcVar1);
      }
    }
    else {
      FUN_002d4e8c(param_1);
      FUN_002b7184(param_1,&cf_MMTabBar_setHidden_momentsKeep);
      uVar2 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isHidden_026ca768);
      if ((uVar2 & 1) != 0) {
        (*DAT_028c97a8)(param_1,param_2,0);
      }
      (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,param_1,PTR_s_setAlpha__026ca860);
      uVar2 = param_1;
      FUN_0029cc70();
      _objc_retainAutoreleasedReturnValue();
      FUN_002bb194(param_1,uVar2,0);
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
  }
  else {
    (*DAT_028c97a8)(param_1,param_2,param_3 & 1);
  }
  return;
}

