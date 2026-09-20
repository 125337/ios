// FUN_0079edd0 @ 0079edd0

undefined8 FUN_0079edd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long local_58 [3];
  long local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_indexPathForCell__0269e208,local_28);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20);
  local_40 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_indexPathForCell__0269e208,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_58[0] = lVar2;
  if ((local_40 == 0) && (lVar2 == 0)) {
    local_18 = 0;
  }
  else if (local_40 == 0) {
    local_18 = 1;
  }
  else if (lVar2 == 0) {
    local_18 = 0xffffffffffffffff;
  }
  else {
    lVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_section_0269e988);
    lVar2 = local_58[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_section_0269e988);
    if (lVar1 < lVar2) {
      local_18 = 0xffffffffffffffff;
    }
    else {
      lVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_section_0269e988);
      lVar2 = local_58[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_section_0269e988);
      if (lVar2 < lVar1) {
        local_18 = 1;
      }
      else {
        lVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_row_0269e210);
        lVar2 = local_58[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_row_0269e210);
        if (lVar1 < lVar2) {
          local_18 = 0xffffffffffffffff;
        }
        else {
          lVar1 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_row_0269e210);
          lVar2 = local_58[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_row_0269e210);
          if (lVar2 < lVar1) {
            local_18 = 1;
          }
          else {
            local_18 = 0;
          }
        }
      }
    }
  }
  _objc_storeStrong(local_58);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return local_18;
}

