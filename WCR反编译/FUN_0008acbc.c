// FUN_0008acbc @ 0008acbc

void FUN_0008acbc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  uint local_64;
  long local_48;
  long local_40 [3];
  long local_28;
  undefined4 local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    lVar1 = local_18;
    FUN_0007f148(local_18,&cf_TextStateProfileTableView,0xc);
    _objc_retainAutoreleasedReturnValue();
    local_28 = lVar1;
    if (lVar1 == 0) {
      lVar2 = local_18;
      FUN_0007f980(local_18,&cf_TextStateProfile,0xc);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_28;
      local_28 = lVar2;
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
    lVar1 = local_18;
    (*(code *)PTR__objc_retain_02578638)();
    local_40[0] = lVar1;
    local_48 = 0;
    while( true ) {
      local_64 = 0;
      if (local_40[0] != 0) {
        local_64 = (uint)(local_48 < 10);
      }
      uVar3 = (ulong)local_64;
      if (local_64 == 0) goto LAB_0008aea8;
      FUN_0008baac(local_40[0]);
      if ((local_28 != 0) && (local_40[0] == local_28)) break;
      if ((local_28 == 0) && (uVar3 = local_48 - 4, 3 < local_48)) goto LAB_0008aea8;
      lVar2 = local_40[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_40[0];
      local_40[0] = lVar2;
      (*(code *)PTR__objc_release_02578630)(lVar1);
      local_48 = local_48 + 1;
    }
    uVar3 = 0;
LAB_0008aea8:
    _objc_storeStrong(uVar3,local_40);
    _objc_storeStrong(&local_28,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

