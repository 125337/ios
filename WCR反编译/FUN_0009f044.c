// FUN_0009f044 @ 0009f044

void FUN_0009f044(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_1e0 [48];
  undefined1 auStack_1b0 [48];
  undefined1 auStack_180 [48];
  undefined1 auStack_150 [48];
  long local_120;
  undefined1 auStack_118 [48];
  undefined1 auStack_e8 [48];
  undefined1 auStack_b8 [48];
  undefined1 auStack_88 [48];
  long local_58 [3];
  long local_40;
  long local_38;
  undefined4 local_2c;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  lVar1 = local_28;
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = lVar1;
    lVar1 = local_28;
    FUN_0009f3b8();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_38;
    local_40 = lVar1;
    FUN_0009da20();
    _objc_retainAutoreleasedReturnValue();
    local_58[0] = lVar2;
    if (local_38 == 0) {
      _memset(auStack_88,0,0x30);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(auStack_88,local_38,PTR_s_transform_0269e178);
    }
    _memcpy(auStack_b8,PTR__CGAffineTransformIdentity_025782d8,0x30);
    puVar3 = auStack_88;
    _CGAffineTransformEqualToTransform(puVar3,auStack_b8);
    if (((ulong)puVar3 & 1) == 0) {
      _memcpy(auStack_e8,PTR__CGAffineTransformIdentity_025782d8,0x30);
      lVar1 = local_38;
      _memcpy(auStack_118,auStack_e8,0x30);
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setTransform__026caad0,auStack_118);
    }
    if (local_40 != 0) {
      FUN_0009f920(local_28,local_40,local_58[0]);
    }
    lVar1 = local_38;
    FUN_0009de1c();
    _objc_retainAutoreleasedReturnValue();
    local_120 = lVar1;
    if (lVar1 != 0) {
      if (lVar1 == 0) {
        _memset(auStack_150,0,0x30);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(auStack_150,lVar1,PTR_s_transform_0269e178);
      }
      _memcpy(auStack_180,PTR__CGAffineTransformIdentity_025782d8,0x30);
      puVar3 = auStack_150;
      _CGAffineTransformEqualToTransform(puVar3,auStack_180);
      if (((ulong)puVar3 & 1) == 0) {
        _memcpy(auStack_1b0,PTR__CGAffineTransformIdentity_025782d8,0x30);
        lVar1 = local_120;
        _memcpy(auStack_1e0,auStack_1b0,0x30);
        (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setTransform__026caad0,auStack_1e0);
      }
    }
    _objc_storeStrong(&local_120);
    _objc_storeStrong(local_58,0);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

