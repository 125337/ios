// FUN_00886c94 @ 00886c94

byte FUN_00886c94(undefined8 param_1,undefined8 *param_2,ulong *param_3,ulong *param_4)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong local_88 [3];
  ulong local_70;
  undefined4 local_64;
  ulong *local_60;
  ulong *local_58;
  undefined8 *local_50;
  ulong local_48;
  byte local_39;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = 0;
  _objc_storeStrong(&local_48,param_1);
  local_60 = param_4;
  local_58 = param_3;
  local_50 = param_2;
  if (param_2 != (undefined8 *)0x0) {
    _objc_retainAutorelease();
    *local_50 = &cf_none;
  }
  if (local_58 != (ulong *)0x0) {
    uVar3 = *(ulong *)PTR____NSArray0___02578280;
    _objc_retainAutorelease();
    *local_58 = uVar3;
  }
  if (local_60 != (ulong *)0x0) {
    *local_60 = 0;
  }
  if (local_48 == 0) {
    local_39 = 0;
    local_64 = 1;
  }
  else {
    uVar3 = local_48;
    FUN_00873154();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_48;
    local_70 = uVar3;
    FUN_00887860();
    _objc_retainAutoreleasedReturnValue();
    local_30 = &cf_openim_group_hd_icon;
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_88[0] = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,1
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_008770ec();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    uVar3 = local_88[0];
    local_38 = &cf_openim_group_icon;
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,1
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_008770ec();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    uVar2 = local_88[0];
    if (local_58 != (ulong *)0x0) {
      _objc_retainAutorelease();
      *local_58 = uVar2;
    }
    uVar2 = local_70;
    if (local_60 != (ulong *)0x0) {
      _objc_retainAutorelease();
      *local_60 = uVar2;
    }
    if (((DAT_028cd4e8 & 1) == 0) || (((uVar4 & 1) == 0 && ((uVar3 & 1) == 0)))) {
      if (((DAT_028cd4e8 & 1) == 0) && (((uVar4 & 1) != 0 || ((uVar3 & 1) != 0)))) {
        if (local_50 != (undefined8 *)0x0) {
          pcVar1 = &cf_enterprise_openim_group_hd_icon_switch_off;
          if ((uVar4 & 1) == 0) {
            pcVar1 = &cf_enterprise_openim_group_icon_switch_off;
          }
          _objc_retainAutorelease();
          *local_50 = pcVar1;
        }
        local_39 = 0;
      }
      else {
        if (local_50 != (undefined8 *)0x0) {
          _objc_retainAutorelease();
          *local_50 = &cf_no_special_image_match;
        }
        local_39 = 0;
      }
    }
    else {
      if (local_50 != (undefined8 *)0x0) {
        pcVar1 = &cf_enterprise_openim_group_hd_icon_token_map;
        if ((uVar4 & 1) == 0) {
          pcVar1 = &cf_enterprise_openim_group_icon_token_map;
        }
        _objc_retainAutorelease();
        *local_50 = pcVar1;
      }
      local_39 = 1;
    }
    local_64 = 1;
    _objc_storeStrong(local_88);
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_39 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

