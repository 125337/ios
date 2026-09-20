// FUN_0009a0c0 @ 0009a0c0

byte FUN_0009a0c0(undefined8 param_1,byte param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  byte local_b8;
  byte local_ac;
  byte local_a0;
  byte local_94;
  ulong local_80;
  ulong local_50;
  ulong local_48 [3];
  undefined *local_30;
  byte local_21;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_21 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = local_20 == 0;
  local_30 = puVar2;
  if (bVar1) {
    local_80 = 0;
  }
  else {
    local_80 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_messageWrap_0269d070);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_80;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48[0] = local_80;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  uVar3 = local_48[0];
  FUN_0009a4d8();
  if ((uVar3 & 1) == 0) {
    if ((DAT_028c7fb9 & 1) == 0) {
      if ((DAT_028c7fb8 & 1) == 0) {
        if (local_48[0] == 0) {
          local_11 = 0;
        }
        else {
          if ((local_21 & 1) == 0) {
            puVar2 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_hideOtherAvatarInPrivateChat_0269e268);
            local_b8 = (byte)puVar2;
          }
          else {
            puVar2 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_hideSelfAvatarInPrivateChat_0269e260);
            local_b8 = (byte)puVar2;
          }
          local_11 = local_b8 & 1;
        }
      }
      else {
        if ((local_21 & 1) == 0) {
          puVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_hideOtherAvatarInPrivateChat_0269e268);
          local_ac = (byte)puVar2;
        }
        else {
          puVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hideSelfAvatarInPrivateChat_0269e260)
          ;
          local_ac = (byte)puVar2;
        }
        local_11 = local_ac & 1;
      }
    }
    else {
      if ((local_21 & 1) == 0) {
        puVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hideOtherAvatarInGroupChat_0269e258);
        local_a0 = (byte)puVar2;
      }
      else {
        puVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hideSelfAvatarInGroupChat_0269e250);
        local_a0 = (byte)puVar2;
      }
      local_11 = local_a0 & 1;
    }
  }
  else {
    if ((local_21 & 1) == 0) {
      puVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hideOtherAvatarInGroupChat_0269e258);
      local_94 = (byte)puVar2;
    }
    else {
      puVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hideSelfAvatarInGroupChat_0269e250);
      local_94 = (byte)puVar2;
    }
    local_11 = local_94 & 1;
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

