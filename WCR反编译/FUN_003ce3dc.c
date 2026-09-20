// FUN_003ce3dc @ 003ce3dc

byte FUN_003ce3dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long local_38;
  ulong local_30;
  ulong local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  bVar1 = false;
  bVar2 = true;
  if ((local_20 != 0) && (bVar2 = true, local_28 != 0)) {
    local_38 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_username_026a2238);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    lVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar2 = lVar3 == 0;
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if (bVar2) {
    local_11 = 0;
  }
  else {
    uVar4 = local_28;
    FUN_00396ad8();
    if ((uVar4 & 1) == 0) {
      uVar7 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_kind_026a27e8);
      uVar4 = local_30;
      if (uVar7 == 0) {
        uVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_members_0269ea98);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_username_026a2238);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_containsObject__0269cbb8);
        local_11 = (byte)uVar7 & 1;
        (*(code *)PTR__objc_release_02578630)(lVar3);
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      else {
        lVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_session_0269d000);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_groupScopeForNativeSession__026a2c60);
        (*(code *)PTR__objc_release_02578630)(lVar3);
        uVar7 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_scope_0269ea90);
        local_11 = (uVar7 & uVar4) != 0;
      }
    }
    else {
      lVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_session_0269d000);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_username_026a2238);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3;
      FUN_003963a8();
      local_11 = (byte)lVar6 & 1;
      (*(code *)PTR__objc_release_02578630)(lVar5);
      (*(code *)PTR__objc_release_02578630)(lVar3);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

