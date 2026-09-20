// FUN_01d61c50 @ 01d61c50

ulong FUN_01d61c50(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_b8;
  ulong local_a8;
  ulong local_88;
  long local_80;
  ulong local_78;
  long local_70;
  byte local_61;
  ulong local_60;
  ulong local_58;
  byte local_49;
  ulong local_48;
  ulong local_40;
  long local_38;
  ulong local_30;
  ulong local_28;
  long local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  uVar3 = local_28;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf__);
  local_49 = 0;
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    local_a8 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR_s_stringByAppendingPathComponent__026cab30,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_a8;
  }
  else {
    local_a8 = local_28;
  }
  local_49 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_a8;
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  uVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf__);
  local_61 = 0;
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    local_b8 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_stringByAppendingPathComponent__026cab30,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_b8;
  }
  else {
    local_b8 = local_30;
  }
  local_61 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_b8;
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  local_70 = 0;
  local_78 = 0;
  lVar2 = *(long *)(param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_attributesOfItemAtPath_error__0269db08,local_40)
  ;
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(ulong *)(param_1 + 0x28);
  local_80 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_attributesOfItemAtPath_error__0269db08,local_58,0);
  _objc_retainAutoreleasedReturnValue();
  local_88 = uVar3;
  if (local_80 != 0) {
    lVar4 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_objectForKeyedSubscript__0269d098,
               *(undefined8 *)PTR__NSFileModificationDate_02578020);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_70;
    local_70 = lVar4;
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  if (local_88 != 0) {
    uVar5 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88,PTR_s_objectForKeyedSubscript__0269d098,
               *(undefined8 *)PTR__NSFileModificationDate_02578020);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_78;
    local_78 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  if ((local_70 == 0) && (local_78 == 0)) {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_localizedCaseInsensitiveCompare__026b05e0);
    local_18 = uVar6;
    (*(code *)PTR__objc_release_02578630)(uVar5);
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  else if (local_70 == 0) {
    local_18 = 1;
  }
  else if (local_78 == 0) {
    local_18 = 0xffffffffffffffff;
  }
  else {
    uVar3 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_compare__0269cd10,local_70);
    local_18 = uVar3;
  }
  _objc_storeStrong(&local_88);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return local_18;
}

