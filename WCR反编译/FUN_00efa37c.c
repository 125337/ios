// FUN_00efa37c @ 00efa37c

byte FUN_00efa37c(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  byte local_64;
  byte local_58;
  undefined *local_50;
  undefined *local_40;
  ulong local_38;
  byte local_29;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = 0;
  _objc_storeStrong(&local_38,param_1);
  uVar2 = local_38;
  FUN_00ef51a0();
  if ((uVar2 & 1) == 0) {
    uVar2 = local_38;
    FUN_00ef9544(local_38,&cf_onVideoVoipButtonClicked_,0);
    bVar1 = false;
    local_64 = 1;
    if ((uVar2 & 1) == 0) {
      uVar3 = local_38;
      FUN_00ef8b3c(local_38,&cf_videoVoipBtnRealClicked);
      uVar2 = local_38;
      local_64 = 1;
      if ((uVar3 & 1) == 0) {
        local_28 = &cf_format_s_;
        local_50 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_28,1);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        FUN_00ef96a0();
        local_64 = (byte)uVar2;
      }
    }
    local_29 = local_64 & 1;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
  }
  else {
    uVar2 = local_38;
    FUN_00ef9544(local_38,&cf_onMultiTalkButtonClicked_,0);
    bVar1 = false;
    local_58 = 1;
    if ((uVar2 & 1) == 0) {
      uVar3 = local_38;
      FUN_00ef8b3c(local_38,&cf_realStartMultiTalk);
      uVar2 = local_38;
      local_58 = 1;
      if ((uVar3 & 1) == 0) {
        local_20 = &cf_format_s_;
        local_40 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_20,1);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        FUN_00ef96a0();
        local_58 = (byte)uVar2;
      }
    }
    local_29 = local_58 & 1;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
  }
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return local_29 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

