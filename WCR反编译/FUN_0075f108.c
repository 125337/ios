// FUN_0075f108 @ 0075f108

byte FUN_0075f108(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte local_64;
  undefined *local_58;
  ulong local_50;
  byte local_41;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  _objc_storeStrong(&local_50,param_1);
  uVar2 = local_50;
  FUN_0075f444(local_50,&cf_MMTransparentButton);
  if (((uVar2 & 1) == 0) &&
     (uVar2 = local_50, FUN_0075f444(local_50,&cf_MMRecordButton), (uVar2 & 1) == 0)) {
    uVar2 = local_50;
    FUN_0075f444(local_50,&cf_MFWebMMBtn);
    if ((uVar2 & 1) == 0) {
      uVar2 = local_50;
      FUN_0075f444(local_50,&cf_MFBannerBtn);
      if ((uVar2 & 1) == 0) {
        local_41 = 0;
      }
      else {
        uVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_accessibilityIdentifier_0269ec20);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar2);
        if ((uVar3 & 1) == 0) {
          local_40 = _WCRefineTextStyleHomeFold;
          local_38 = _WCRefineTextStyleHomeCount;
          local_30 = _WCRefineTextStyleHomeNoteLine1;
          puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_40,3);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          FUN_00761060();
          local_41 = (byte)puVar5 & 1;
          (*(code *)PTR__objc_release_02578630)(puVar4);
        }
        else {
          local_41 = 0;
        }
      }
    }
    else {
      local_28 = _WCRefineTextStyleHomeLogin;
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      FUN_00761060();
      local_41 = (byte)puVar5 & 1;
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
  }
  else {
    uVar2 = local_50;
    FUN_00760f58();
    local_64 = 0;
    bVar1 = (uVar2 & 1) != 0;
    if (bVar1) {
      local_20 = _WCRefineTextStyleVoicePlaceholder;
      local_58 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_58;
      FUN_00761060();
      local_64 = (byte)puVar4;
    }
    local_41 = local_64 & 1;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
  }
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return local_41 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

