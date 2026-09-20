// frostedBubbleVisibleForCurrentUser @ 00faad24

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x10 bytes */

bool __thiscall
WCRefineHelper::frostedBubbleVisibleForCurrentUser(WCRefineHelper *this,ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 *puVar4;
  double in_d0;
  ID local_60;
  byte local_52;
  byte local_51;
  double local_50;
  SEL local_48;
  ID local_40;
  byte local_31;
  undefined8 local_30;
  undefined7 uStack_28;
  undefined4 uStack_21;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = param_2;
  local_40 = param_1;
  _CFAbsoluteTimeGetCurrent();
  local_50 = in_d0;
  _os_unfair_lock_lock(&DAT_028e2f64);
  local_51 = (DAT_028e2f70 & 1) != 0 && local_50 - DAT_028e2f68 < 1.0;
  local_52 = DAT_028e2f71 & 1;
  _os_unfair_lock_unlock(&DAT_028e2f64);
  if ((local_51 & 1) == 0) {
    IVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getCurrentUserWxid_0269e148);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_60 = IVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_60;
    puVar4 = &local_30;
    uStack_28 = _UNK_0232c5b0;
    local_30 = _DAT_0232c5a8;
    uStack_21 = DAT_0232c5b7;
    FUN_00faa9c4(puVar4,0x13);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isEqualToString__0269ccc8);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _os_unfair_lock_lock();
    DAT_028e2f71 = (byte)IVar1 & 1;
    DAT_028e2f68 = local_50;
    DAT_028e2f70 = 1;
    _os_unfair_lock_unlock(&DAT_028e2f64);
    local_31 = (byte)IVar1 & 1;
    _objc_storeStrong(&local_60,0);
  }
  else {
    local_31 = local_52 & 1;
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return local_31 & 1;
}

