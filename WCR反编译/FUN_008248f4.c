// FUN_008248f4 @ 008248f4

byte FUN_008248f4(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (((local_20 == 0) || (local_28 == 0)) || (uVar2 = local_28, FUN_00814d40(), (uVar2 & 1) == 0))
  {
    local_11 = 0;
  }
  else {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_20;
    (*(code *)PTR__objc_release_02578630)();
    uVar5 = local_20;
    if (uVar3 == uVar2) {
      local_11 = 1;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___UITableView_026ce1a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
      bVar1 = false;
      if ((uVar5 & 1) != 0) {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_backgroundView_026a0320);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = uVar2 == local_28;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      if (bVar1) {
        local_11 = 1;
      }
      else {
        local_11 = 0;
      }
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

