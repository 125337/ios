// FUN_01e01da0 @ 01e01da0

long FUN_01e01da0(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long local_e0;
  long local_c8;
  long local_a0;
  long local_90;
  long local_88;
  bool local_79;
  long local_78;
  byte local_69;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_38 = 0;
  local_30 = param_1;
  _objc_storeStrong(&local_38);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  lVar2 = *(long *)(param_1 + 0x20);
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_absoluteForRel__026c5c40,local_38);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20);
  local_50 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_absoluteForRel__026c5c40,local_40);
  _objc_retainAutoreleasedReturnValue();
  local_69 = 0;
  local_79 = false;
  bVar1 = local_50 == 0;
  local_58 = lVar3;
  if (bVar1) {
    local_c8 = 0;
  }
  else {
    local_c8 = *(long *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_attributesOfItemAtPath_error__0269db08,local_50,0);
    _objc_retainAutoreleasedReturnValue();
    local_69 = 1;
    local_68 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_c8;
  }
  local_79 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_c8;
  if ((local_79 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  bVar1 = local_58 == 0;
  if (bVar1) {
    local_e0 = 0;
  }
  else {
    local_90 = *(long *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_90,PTR_s_attributesOfItemAtPath_error__0269db08,local_58,0);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_a0 = local_e0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = local_e0;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_a0);
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  if ((local_60 == 0) && (local_88 == 0)) {
    lVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_localizedCaseInsensitiveCompare__026b05e0);
    local_28 = lVar3;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  else if (local_60 == 0) {
    local_28 = 1;
  }
  else if (local_88 == 0) {
    local_28 = -1;
  }
  else {
    lVar2 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_compare__0269cd10,local_60);
    local_28 = lVar2;
  }
  _objc_storeStrong(&local_88);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return local_28;
}

