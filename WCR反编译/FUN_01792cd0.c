// FUN_01792cd0 @ 01792cd0

byte FUN_01792cd0(ulong param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  if ((local_20 == 0) ||
     (lVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_11 = 0;
  }
  else {
    lVar1 = local_28;
    FUN_01791bb4();
    if ((lVar1 == 0) ||
       (uVar2 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,lVar1),
       (uVar2 & 1) == 0)) {
      local_11 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,lVar1,param_3 & 1);
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return local_11 & 1;
}

