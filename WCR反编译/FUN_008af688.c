// FUN_008af688 @ 008af688

void FUN_008af688(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  ulong local_30;
  byte local_21;
  undefined8 local_20;
  ulong local_18;
  
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  FUN_008b4e10();
  if ((param_1 & 1) != 0) {
    if ((local_21 & 1) == 0) {
      uVar1 = local_18;
      FUN_008c0384(local_18,"m_arrMsgCanBeOprate");
      _objc_retainAutoreleasedReturnValue();
      local_38 = 0;
      local_40 = 0;
      local_48 = 0;
      local_50 = 0;
      local_30 = uVar1;
      FUN_008c0508(uVar1,&local_48,&local_50);
      _objc_storeStrong(&local_38,local_48);
      _objc_storeStrong(&local_40,local_50);
      lVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
      if (lVar2 == 0) {
        uVar1 = DAT_028cde90;
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028cde90,PTR_s_count_0269cfe0);
        if (uVar1 == 0) {
          FUN_008c08b4();
        }
      }
      else {
        uVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
        uVar1 = DAT_028cde90;
        DAT_028cde90 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      _objc_storeStrong(&local_40);
      _objc_storeStrong(&local_38,0);
      _objc_storeStrong(&local_30,0);
    }
    else {
      FUN_008c02b4();
    }
  }
  (*DAT_028cdf60)(local_18,local_20,local_21 & 1);
  return;
}

