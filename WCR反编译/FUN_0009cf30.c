// FUN_0009cf30 @ 0009cf30

void FUN_0009cf30(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_110 [48];
  undefined1 auStack_e0 [48];
  undefined1 auStack_b0 [48];
  undefined1 auStack_80 [48];
  long local_50 [3];
  long local_38;
  undefined4 local_2c;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    lVar1 = local_28;
    FUN_0009da20();
    _objc_retainAutoreleasedReturnValue();
    local_38 = lVar1;
    FUN_0009da9c(local_28,lVar1);
    lVar1 = local_28;
    FUN_0009de1c();
    _objc_retainAutoreleasedReturnValue();
    local_50[0] = lVar1;
    if (lVar1 != 0) {
      if (lVar1 == 0) {
        _memset(auStack_80,0,0x30);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(auStack_80,lVar1,PTR_s_transform_0269e178);
      }
      _memcpy(auStack_b0,PTR__CGAffineTransformIdentity_025782d8,0x30);
      puVar2 = auStack_80;
      _CGAffineTransformEqualToTransform(puVar2,auStack_b0);
      if (((ulong)puVar2 & 1) == 0) {
        _memcpy(auStack_e0,PTR__CGAffineTransformIdentity_025782d8,0x30);
        lVar1 = local_50[0];
        _memcpy(auStack_110,auStack_e0,0x30);
        (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setTransform__026caad0,auStack_110);
      }
    }
    _objc_storeStrong(local_50);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

