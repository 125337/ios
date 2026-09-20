// FUN_0198bb84 @ 0198bb84

void FUN_0198bb84(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong local_68;
  byte local_59;
  ulong local_58;
  ulong local_50;
  long local_48;
  ulong local_40;
  uint local_34;
  long local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = param_1;
  if (local_20 == 0) {
    local_34 = 1;
  }
  else {
    uVar2 = param_1 + 0x20;
    _objc_loadWeakRetained();
    param_1 = param_1 + 0x28;
    local_40 = uVar2;
    _objc_loadWeakRetained();
    local_48 = param_1;
    if ((local_40 == 0) || (param_1 == 0)) {
      local_34 = 1;
    }
    else {
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_tableView_0269e378);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_59 = 0;
      bVar1 = true;
      if (local_50 != 0) {
        uVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_row_0269e210);
        bVar1 = true;
        if (-1 < (long)uVar2) {
          uVar2 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_row_0269e210);
          uVar3 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_displayEntries_026ba498);
          _objc_retainAutoreleasedReturnValue();
          local_59 = 1;
          local_58 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar1 = (long)uVar3 <= (long)uVar2;
        }
      }
      if ((local_59 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_58);
      }
      if (bVar1) {
        local_34 = 1;
      }
      else {
        uVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_displayEntries_026ba498);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_row_0269e210);
        uVar4 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_objectAtIndexedSubscript__0269cc78,uVar3);
        _objc_retainAutoreleasedReturnValue();
        local_68 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        uVar2 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_path);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar2);
        bVar1 = (uVar3 & 1) != 0;
        if (bVar1) {
          uVar2 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x4041800000000000,local_40,PTR_s_squareThumbnail_side__026ba4e0,local_20);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_iconView_026a61b0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(lVar5);
          (*(code *)PTR__objc_release_02578630)(uVar2);
          lVar5 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_iconView_026a61b0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(lVar5);
        }
        local_34 = (uint)!bVar1;
        _objc_storeStrong(&local_68,0);
      }
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    if (local_34 == 0) {
      local_34 = 0;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

