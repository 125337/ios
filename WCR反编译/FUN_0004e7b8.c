// FUN_0004e7b8 @ 0004e7b8

byte FUN_0004e7b8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long local_48;
  undefined4 local_40;
  ulong local_30;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_20;
  FUN_0004fa34();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if ((uVar1 == 0) || (uVar1 = local_30, FUN_0004ff90(), (uVar1 & 1) == 0)) {
    local_11 = 0;
    local_40 = 1;
  }
  else {
    lVar2 = local_28;
    FUN_0004d8bc();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_28;
    local_48 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_autoDownloadSessionRule_0269d998);
    if (lVar3 == 1) {
      lVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
      if (lVar2 == 0) {
        lVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_autoDownloadPrivateChatDefaultEn_0269d990);
        local_11 = (byte)lVar2 & 1;
      }
      else {
        uVar1 = local_30;
        FUN_00050d20(local_30,local_48);
        local_11 = (byte)uVar1 & 1;
      }
    }
    else {
      lVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
      if (lVar2 == 0) {
        local_11 = 1;
      }
      else {
        uVar1 = local_30;
        FUN_00050d20(local_30,local_48);
        local_11 = ((byte)uVar1 ^ 1) & 1;
      }
    }
    local_40 = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

