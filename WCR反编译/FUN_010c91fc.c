// FUN_010c91fc @ 010c91fc

long FUN_010c91fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  lVar3 = local_28;
  FUN_010c18d0();
  uVar1 = (uint)lVar3;
  lVar3 = local_30;
  FUN_010c18d0();
  uVar2 = (uint)lVar3;
  if (uVar2 < uVar1) {
    local_18 = -1;
  }
  else if (uVar1 < uVar2) {
    local_18 = 1;
  }
  else {
    lVar3 = local_30;
    FUN_010b66f4(uVar1 - uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = local_28;
    FUN_010b66f4();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_compare_options__026a2e98,lVar4,0x40);
    (*(code *)PTR__objc_release_02578630)(lVar4);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    local_18 = lVar5;
    if (lVar5 == 0) {
      lVar3 = local_28;
      FUN_010bf2ec();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = local_30;
      FUN_010bf2ec();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_compare__0269cd10);
      local_18 = lVar5;
      (*(code *)PTR__objc_release_02578630)(lVar4);
      (*(code *)PTR__objc_release_02578630)(lVar3);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_18;
}

