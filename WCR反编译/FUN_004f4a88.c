// FUN_004f4a88 @ 004f4a88

byte FUN_004f4a88(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_48;
  int local_40;
  undefined1 local_29;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar3 = DAT_028cae70;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028cae70,PTR_s_count_0269cfe0);
  local_29 = true;
  if (uVar3 == 0) {
    uVar3 = DAT_028cae78;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028cae78,PTR_s_count_0269cfe0);
    local_29 = true;
    if (uVar3 == 0) {
      uVar3 = DAT_028cae80;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028cae80,PTR_s_count_0269cfe0);
      local_29 = uVar3 != 0;
    }
  }
  if ((bool)local_29 == false) {
    local_11 = 1;
    local_40 = 1;
    goto LAB_004f4e18;
  }
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if ((lVar1 != 0) &&
     (uVar3 = DAT_028cae70,
     (*(code *)PTR__objc_msgSend_02578628)(DAT_028cae70,PTR_s_containsObject__0269cbb8,local_28),
     (uVar3 & 1) != 0)) {
    local_11 = 1;
    local_40 = 1;
    goto LAB_004f4e18;
  }
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if ((lVar1 != 0) &&
     (uVar3 = DAT_028cae78,
     (*(code *)PTR__objc_msgSend_02578628)(DAT_028cae78,PTR_s_containsObject__0269cbb8,local_20),
     (uVar3 & 1) != 0)) {
    local_11 = 1;
    local_40 = 1;
    goto LAB_004f4e18;
  }
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if ((lVar1 != 0) &&
     (lVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     lVar1 != 0)) {
    uVar2 = DAT_028cae80;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028cae80,PTR_s_objectForKeyedSubscript__0269d098,local_20);
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_count_0269cfe0);
    uVar3 = 0;
    if (uVar2 == 0) {
LAB_004f4dd8:
      local_40 = 0;
    }
    else {
      uVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsObject__0269cbb8,local_28);
      uVar3 = uVar2 & 0xffffffff;
      if ((uVar2 & 1) == 0) goto LAB_004f4dd8;
      uVar3 = 1;
      local_11 = 1;
      local_40 = 1;
    }
    _objc_storeStrong(uVar3,&local_48,0);
    if (local_40 != 0) goto LAB_004f4e18;
  }
  local_11 = 0;
  local_40 = 1;
LAB_004f4e18:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

