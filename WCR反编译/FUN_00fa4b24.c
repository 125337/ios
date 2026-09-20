// FUN_00fa4b24 @ 00fa4b24

ulong FUN_00fa4b24(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong local_40;
  uint local_34;
  ulong local_30;
  long local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = param_3;
  if ((local_20 == 0) ||
     (lVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_18 = local_30;
    local_34 = 1;
  }
  else {
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_integerValue_026ca750);
    bVar1 = (uVar3 & 1) != 0;
    if (bVar1) {
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_integerValue_026ca750);
      local_18 = uVar3;
    }
    local_34 = (uint)bVar1;
    _objc_storeStrong(&local_40,0);
    if (local_34 == 0) {
      local_18 = local_30;
      local_34 = 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

