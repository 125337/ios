// FUN_000c098c @ 000c098c

void FUN_000c098c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar3;
  long local_48;
  undefined4 local_40;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uVar2;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar2 = local_18;
  (*DAT_028c8120)(local_18,local_20,local_28,local_30);
  uVar1 = (uint)uVar2;
  FUN_000c151c();
  if ((uVar1 & 1) == 0) {
    local_40 = 1;
  }
  else {
    lVar3 = local_28;
    FUN_000c15b8(local_28,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_48 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
    if (lVar3 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_clearAtMeCount__0269e6e0,local_48);
    }
    _objc_storeStrong(&local_48,0);
    local_40 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

