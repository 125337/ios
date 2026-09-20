// FUN_010616c8 @ 010616c8

undefined8 FUN_010616c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_28;
  long local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_width_026a12d0);
  local_88 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_height_026a12d8);
  if (lVar1 < local_88) {
    local_88 = lVar1;
  }
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_width_026a12d0);
  local_90 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_height_026a12d8);
  if (lVar1 < local_90) {
    local_90 = lVar1;
  }
  if (local_88 < local_90) {
    local_98 = 1;
  }
  else {
    local_98 = 0;
    if (local_90 < local_88) {
      local_98 = 0xffffffffffffffff;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_98;
}

