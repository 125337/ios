// FUN_008786a8 @ 008786a8

byte FUN_008786a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_d8 [3];
  undefined4 local_bc;
  ulong local_b8;
  ulong local_b0;
  long local_a8;
  ulong local_a0;
  byte local_91;
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
  local_a0 = 0;
  _objc_storeStrong(&local_a0,param_1);
  local_a8 = 0;
  _objc_storeStrong(&local_a8,param_2);
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_3);
  local_b8 = param_4;
  if (((local_a0 == 0) || (local_b0 == 0)) || (local_b0 == local_a0)) {
    local_91 = 0;
    local_bc = 1;
  }
  else if (local_a8 == 0) {
    if (param_4 < 2 || param_4 - 2 == 0) {
      local_91 = 1;
      local_bc = 1;
    }
    else {
      uVar1 = local_b0;
      FUN_00873ab4(param_4 - 2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      local_d8[0] = uVar1;
      FUN_00876f7c();
      _objc_retainAutoreleasedReturnValue();
      FUN_008770ec();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_d8[0];
      if ((uVar1 & 1) == 0) {
        local_90 = &cf_d__;
        local_88 = &cf_search;
        local_80 = &cf_fY;
        local_78 = &cf_more;
        local_70 = &cf_V;
        local_68 = &cf_back;
        local_60 = &cf_RS;
        local_58 = &cf_add;
        local_50 = &cf_fh;
        local_48 = &cf_star;
        local_40 = &cf___;
        local_38 = &cf___;
        local_30 = &cf_xiaowei;
        puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_90,0xd);
        _objc_retainAutoreleasedReturnValue();
        FUN_008775a4();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if ((uVar2 & 1) == 0) {
          local_91 = 0;
        }
        else {
          local_91 = 1;
        }
      }
      else {
        local_91 = 1;
      }
      local_bc = 1;
      _objc_storeStrong(local_d8,0);
    }
  }
  else {
    uVar2 = local_b0;
    FUN_00878aa4(local_b0,local_a8);
    local_91 = (byte)uVar2 & 1;
    local_bc = 1;
  }
  _objc_storeStrong(&local_b0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_a0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_91 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

