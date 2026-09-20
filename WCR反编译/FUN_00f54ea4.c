// FUN_00f54ea4 @ 00f54ea4

byte FUN_00f54ea4(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_48;
  byte local_39;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = 0;
  _objc_storeStrong(&local_48,param_1);
  uVar1 = local_48;
  FUN_00f54a68();
  uVar3 = local_48;
  if ((uVar1 & 1) == 0) {
    local_38 = &cf_wxsnsdy_wxs_qq_com;
    local_30 = &cf_wxsnsdy_tc_qq_com;
    local_28 = &cf_wxsnsdy_video_qq_com;
    local_20 = &cf_ad_data;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,4
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_00f53074();
    local_39 = (byte)uVar3 & 1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  else {
    local_39 = 0;
  }
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return local_39 & 1;
}

