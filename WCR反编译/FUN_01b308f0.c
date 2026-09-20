// FUN_01b308f0 @ 01b308f0

uint FUN_01b308f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  uint local_44;
  long local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = local_20;
  local_38 = param_1;
  local_30 = param_4;
  local_28 = param_3;
  FUN_01b24660();
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  local_44 = 0;
  if (lVar1 != 0) {
    lVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_isEqualToString__0269ccc8,*(undefined8 *)(param_1 + 0x20));
    local_44 = (uint)lVar1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_20,0);
  return local_44 & 1;
}

