// FUN_001c3df0 @ 001c3df0

void FUN_001c3df0(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = param_3;
  local_18 = param_2;
  (*DAT_028c8c48)(param_2,param_3);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_menuSizeEnabled_026a0468);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_menuMaxCountPerLine_026a0488);
    if (0 < (long)puVar1) {
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_menuMaxCountPerLine_026a0488);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setMaxCountPerLine__026a05b8,puVar1);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_menuWidth_026a0470);
    if (0.0 < param_1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_menuWidth_026a0470);
      (*(code *)PTR__objc_msgSend_02578628)(param_1,local_18,PTR_s_setMenuMinWidth__026a05c0);
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_menuMaxCountPerLine_026a0488);
      if (0 < (long)puVar1) {
        dVar3 = 4.0;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_menuWidth_026a0470);
        puVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_menuMaxCountPerLine_026a0488);
        puVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_menuMaxCountPerLine_026a0488);
        (*(code *)PTR__objc_msgSend_02578628)
                  (((dVar3 - 16.0) - (double)(long)(puVar1 + -1) * 4.0) / (double)(long)puVar2,
                   local_18,PTR_s_setMenuItemWidth__026a0498);
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x4010000000000000,local_18,PTR_s_setMenuItemInnerGap__026a05b0);
      }
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

