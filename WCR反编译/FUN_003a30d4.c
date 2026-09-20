// FUN_003a30d4 @ 003a30d4

bool FUN_003a30d4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  double dVar2;
  double local_c8;
  double local_c0;
  double local_b8;
  ulong local_90;
  double local_88;
  double local_80;
  double local_78;
  undefined8 local_70;
  double local_68;
  undefined8 local_60;
  double local_58;
  double local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  double local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_5);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_6);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_7);
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_bounds_026ca548);
  local_50 = param_1;
  local_48 = param_2;
  local_40 = param_3;
  local_38 = param_4;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  local_60 = 0x405b000000000000;
  local_70 = 0x4053800000000000;
  local_78 = param_1 * DAT_02324028;
  local_b8 = local_78;
  if (local_78 <= 78.0) {
    local_b8 = 78.0;
  }
  local_80 = local_b8;
  local_68 = local_b8;
  if (local_b8 <= 108.0) {
    local_c0 = local_b8;
  }
  else {
    local_c0 = 108.0;
  }
  local_88 = local_c0;
  local_58 = local_c0;
  uVar1 = local_18;
  local_30 = param_1;
  _objc_getAssociatedObject(local_18,&DAT_028ca0e2);
  _objc_retainAutoreleasedReturnValue();
  local_90 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
  if ((uVar1 & 1) == 0) {
    local_c8 = -1.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_doubleValue_026ca608);
    local_c8 = local_c0;
  }
  dVar2 = local_30 - local_58;
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return local_c8 < 0.0 || dVar2 <= local_c8;
}

