// FUN_0039d6b4 @ 0039d6b4

byte FUN_0039d6b4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte local_44;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if ((local_20 == 0) || (local_28 == 0)) {
    local_11 = 0;
  }
  else {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_section_0269e988);
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_targetSection_026a2d68);
    lVar3 = local_28;
    local_44 = 1;
    if (lVar1 != lVar2) {
      lVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_section_0269e988);
      FUN_0039b3c0(lVar3,lVar1);
      local_44 = (byte)lVar3;
    }
    local_11 = local_44 & 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

