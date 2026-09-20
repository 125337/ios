// FUN_007d0a9c @ 007d0a9c

byte FUN_007d0a9c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_b8;
  byte local_a9;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar2 = local_b8;
  local_50 = &cf_finder;
  local_48 = &cf_channel;
  local_40 = &cf_official;
  local_38 = &cf_brandservice;
  local_30 = &cf_works;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50,5);
  _objc_retainAutoreleasedReturnValue();
  FUN_007d1c90();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar3 = local_b8;
  if ((uVar2 & 1) == 0) {
    local_a8 = &cf_S;
    local_a0 = &cf_SNlQOS;
    local_98 = &cf_lQOS;
    local_90 = &cf__OT;
    local_88 = &cf___;
    local_80 = &cf___lQ>w_;
    local_78 = &cf_q___e_;
    local_70 = &cf_lQ>w_;
    local_68 = &cf_Channels;
    local_60 = &cf_OfficialAccounts;
    local_58 = &cf_Works;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_a8,
               0xb);
    _objc_retainAutoreleasedReturnValue();
    FUN_007c8de0();
    local_a9 = (byte)uVar3 & 1;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else {
    local_a9 = 1;
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

