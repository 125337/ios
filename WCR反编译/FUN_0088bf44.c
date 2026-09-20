// FUN_0088bf44 @ 0088bf44

byte FUN_0088bf44(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  long local_48 [3];
  undefined4 local_2c;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (((DAT_028cd865 & 1) == 0) || (local_20 == 0)) {
    local_11 = 0;
    local_2c = 1;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tag_026cab98);
    if (uVar2 == 0x16070) {
      lVar3 = local_28;
      FUN_008825d8(0);
      _objc_retainAutoreleasedReturnValue();
      local_48[0] = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
      if (lVar3 == 0) {
        local_11 = 0;
        local_2c = 1;
      }
      else {
        uVar2 = local_20;
        FUN_00883768();
        _objc_retainAutoreleasedReturnValue();
        local_50 = uVar2;
        FUN_00883a30();
        _objc_retainAutoreleasedReturnValue();
        local_58 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
        if (uVar2 == 0) {
          FUN_00883bb0();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_58;
          local_58 = uVar2;
          (*(code *)PTR__objc_release_02578630)(uVar1);
        }
        uVar2 = local_50;
        FUN_00883c74(local_50,local_58);
        if ((uVar2 & 1) == 0) {
          local_11 = 0;
          local_2c = 1;
        }
        else {
          FUN_00883e98();
          _objc_retainAutoreleasedReturnValue();
          local_60 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
          if ((uVar2 == 0) ||
             (uVar2 = local_60,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_60,PTR_s_isEqualToString__0269ccc8,local_58), (uVar2 & 1) == 0)) {
            local_11 = 1;
          }
          else {
            local_11 = 0;
          }
          local_2c = 1;
          _objc_storeStrong(&local_60,0);
        }
        _objc_storeStrong(&local_58);
        _objc_storeStrong(&local_50,0);
      }
      _objc_storeStrong(local_48,0);
    }
    else {
      local_11 = 0;
      local_2c = 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

