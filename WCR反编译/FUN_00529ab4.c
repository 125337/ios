// FUN_00529ab4 @ 00529ab4

byte FUN_00529ab4(undefined8 param_1)

{
  uint uVar1;
  long lVar3;
  long lVar4;
  long local_38;
  undefined4 local_30;
  long local_20;
  byte local_11;
  long *plVar2;
  
  plVar2 = &local_20;
  local_20 = 0;
  _objc_storeStrong(plVar2,param_1);
  uVar1 = (uint)plVar2;
  FUN_00529c74();
  if ((uVar1 & 1) == 0) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    lVar3 = local_20;
    FUN_00529d10();
    _objc_retainAutoreleasedReturnValue();
    local_38 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
    if (lVar3 == 0) {
      local_11 = 0;
    }
    else {
      FUN_00529eb4();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_11 = (byte)lVar4 & 1;
      (*(code *)PTR__objc_release_02578630)(lVar3);
    }
    local_30 = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

