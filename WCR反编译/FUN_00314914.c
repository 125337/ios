// FUN_00314914 @ 00314914

byte FUN_00314914(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  byte local_d0;
  long local_b0;
  bool local_69;
  long local_68;
  long local_60;
  ulong local_58 [3];
  undefined4 local_3c;
  long local_38;
  long local_30;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  local_38 = param_4;
  if (((local_20 == 0) || (local_28 == 0)) || (local_30 == 0)) {
    local_11 = 0;
    local_3c = 1;
    goto LAB_00314c18;
  }
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_row_0269e210);
  if (lVar1 + 1 < local_38) {
    local_11 = 1;
    local_3c = 1;
    goto LAB_00314c18;
  }
  uVar2 = local_20;
  FUN_0031fdd0((lVar1 + 1) - local_38,local_20,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_58[0] = uVar2;
  if (uVar2 == 0) {
    local_b0 = 0;
  }
  else {
    local_b0 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_indexPathForCell__0269e208,uVar2);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_b0;
  }
  local_69 = uVar2 != 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_b0;
  if (local_69) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  if (local_60 == 0) {
LAB_00314b44:
    local_11 = 0;
  }
  else {
    lVar1 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_section_0269e988);
    lVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_section_0269e988);
    if (lVar1 != lVar3) goto LAB_00314b44;
    uVar2 = local_58[0];
    FUN_0031169c(0);
    local_d0 = 1;
    if ((uVar2 & 1) == 0) {
      uVar2 = local_58[0];
      FUN_00311790();
      local_d0 = (byte)uVar2;
    }
    local_11 = local_d0 & 1;
  }
  local_3c = 1;
  _objc_storeStrong(&local_60);
  _objc_storeStrong(local_58,0);
LAB_00314c18:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

