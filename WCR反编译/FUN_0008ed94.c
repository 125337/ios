// FUN_0008ed94 @ 0008ed94

void FUN_0008ed94(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 auStack_f8 [48];
  undefined1 auStack_c8 [56];
  byte local_90 [8];
  long local_88;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48 [3];
  undefined4 local_2c;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    if ((DAT_028c7e78 & 1) == 0) {
      FUN_0006e628();
    }
    uVar1 = local_28;
    FUN_0008f164();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_28;
    local_48[0] = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_viewWithTag__026cabe0,0x24f6e4);
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar2;
    if (local_48[0] == 0) {
      if (uVar2 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_removeFromSuperview_026ca800);
      }
      local_2c = 1;
    }
    else {
      FUN_0006fa28();
      if ((uVar2 & 1) == 0) {
        if (local_50 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_removeFromSuperview_026ca800);
        }
        FUN_0006faf4(local_48[0]);
        local_2c = 1;
      }
      else {
        uVar1 = local_28;
        FUN_00071ca0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_28;
        local_58 = uVar1;
        FUN_00077d80(local_28,uVar1);
        _objc_retainAutoreleasedReturnValue();
        local_60 = uVar2;
        FUN_0008f6cc(local_28,local_48[0],uVar2);
        FUN_0007814c(local_90,local_60);
        if (((local_90[0] & 1) != 0) && (local_88 < 1)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setConerSize__0269e110,0);
        }
        puVar3 = auStack_c8;
        _memcpy(puVar3,local_90,0x30);
        FUN_0007017c();
        uVar1 = local_48[0];
        if (((ulong)puVar3 & 1) == 0) {
          FUN_0006faf4(local_48[0]);
        }
        else {
          _memcpy(auStack_f8,local_90,0x30);
          FUN_00072ca4(uVar1,auStack_f8,1);
        }
        FUN_00070364(local_28,local_48[0]);
        _objc_storeStrong(&local_60);
        _objc_storeStrong(&local_58,0);
        local_2c = 0;
      }
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(local_48,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

