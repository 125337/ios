// FUN_004e9080 @ 004e9080

byte FUN_004e9080(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_40;
  ulong local_38;
  byte local_29;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = 0;
  _objc_storeStrong(&local_38,param_1);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_2);
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_delete);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_favorite);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_search);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_revoke);
        if ((uVar1 & 1) == 0) {
          uVar3 = local_38;
          FUN_004e9800(local_38,local_40);
          uVar1 = local_38;
          if ((uVar3 & 1) == 0) {
            uVar3 = local_40;
            FUN_004e9ed8();
            FUN_004e20d0(uVar1,uVar3);
            local_29 = (byte)uVar1 & 1;
          }
          else {
            local_29 = 1;
          }
        }
        else {
          uVar1 = local_38;
          FUN_004e9630();
          local_29 = (byte)uVar1 & 1;
        }
      }
      else {
        uVar1 = local_38;
        FUN_004e36cc(local_38,PTR_s_onShowFTSIndexMenuItem__026a43c0);
        if ((uVar1 & 1) == 0) {
          uVar3 = local_38;
          FUN_004e36cc(local_38,PTR_s_onFingertipSearch_026a43c8);
          uVar1 = local_38;
          if ((uVar3 & 1) == 0) {
            local_28 = &cf_d;
            local_20 = &cf_Search;
            puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_28,2);
            _objc_retainAutoreleasedReturnValue();
            FUN_004e59cc();
            local_29 = (byte)uVar1 & 1;
            (*(code *)PTR__objc_release_02578630)(puVar2);
          }
          else {
            local_29 = 1;
          }
        }
        else {
          local_29 = 1;
        }
      }
    }
    else {
      uVar1 = local_38;
      FUN_004e36cc(local_38,PTR_s_onFavorite__026a43b8);
      local_29 = (byte)uVar1 & 1;
    }
  }
  else {
    uVar1 = local_38;
    FUN_004e9460();
    local_29 = (byte)uVar1 & 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return local_29 & 1;
}

