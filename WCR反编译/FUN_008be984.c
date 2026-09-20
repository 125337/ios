// FUN_008be984 @ 008be984

undefined4 FUN_008be984(undefined8 param_1,undefined4 param_2)

{
  ulong uVar1;
  ulong local_20;
  undefined4 local_14;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_unsignedIntValue_0269db10);
  local_14 = param_2;
  if ((uVar1 & 1) != 0) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_unsignedIntValue_0269db10);
    local_14 = (undefined4)uVar1;
  }
  _objc_storeStrong(&local_20,0);
  return local_14;
}

