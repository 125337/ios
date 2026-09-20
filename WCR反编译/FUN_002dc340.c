// FUN_002dc340 @ 002dc340

void FUN_002dc340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  uint local_84;
  uint local_54;
  long local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  local_54 = 1;
  if (local_28 != 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_54 = (uint)puVar2 ^ 1;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  if ((local_54 & 1) == 0) {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    local_84 = 1;
    if (uVar3 != 0) {
      uVar4 = local_28;
      FUN_002c73bc();
      local_84 = (uint)uVar4 ^ 1;
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (((local_84 & 1) == 0) && (uVar3 = local_28, FUN_002b517c(), (uVar3 & 1) == 0)) {
      uVar4 = local_28;
      FUN_002b83f8();
      uVar3 = local_28;
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      if ((uVar4 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_alpha_026ca4d8);
        (*(code *)PTR__objc_msgSend_02578628)(param_1,puVar1,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar3,&DAT_028c9808,puVar1,1);
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      uVar3 = local_28;
      _objc_getAssociatedObject(local_28,&DAT_028c9807);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if ((uVar4 & 1) == 0) {
        uVar3 = local_28;
        _objc_getAssociatedObject(local_28,&DAT_028c9805);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (uVar3 == 0) {
          FUN_002d63bc(local_28,local_30);
        }
      }
      uVar3 = local_28;
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar3,&DAT_028c9804,puVar1,1);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      FUN_002b7768(local_28,1,local_30);
      uVar3 = local_28;
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_defer___);
      _objc_retainAutoreleasedReturnValue();
      FUN_002c3da8(uVar3);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)(0,local_28,PTR_s_setAlpha__026ca860);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

