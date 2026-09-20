// FUN_0056e868 @ 0056e868

byte FUN_0056e868(undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  ulong uVar4;
  ulong local_20;
  byte local_11;
  ulong *puVar3;
  
  puVar3 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar3,param_1);
  uVar2 = (uint)puVar3;
  FUN_0056db84();
  bVar1 = true;
  if ((uVar2 & 1) != 0) {
    uVar4 = local_20;
    FUN_0056e540();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = uVar4 == 0;
    (*(code *)PTR__objc_release_02578630)(uVar4);
  }
  if (bVar1) {
    local_11 = 0;
  }
  else {
    uVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_dataItem_026a13c8);
    local_11 = 0;
    if ((uVar4 & 1) != 0) {
      uVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_dataItem_026a13c8);
      _objc_retainAutoreleasedReturnValue();
      local_11 = uVar4 != 0;
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

