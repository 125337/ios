// FUN_01fa5968 @ 01fa5968

long FUN_01fa5968(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_stringByAppendingPathComponent__026cab30,local_28);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_40 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_stringByAppendingPathComponent__026cab30,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_50 = 0;
  local_58 = 0;
  lVar3 = *(long *)(param_1 + 0x28);
  local_48 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (lVar3,PTR_s_attributesOfItemAtPath_error__0269db08,local_40,0);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x28);
  local_60 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (lVar4,PTR_s_attributesOfItemAtPath_error__0269db08,local_48,0);
  _objc_retainAutoreleasedReturnValue();
  local_68 = lVar4;
  if (local_60 != 0) {
    lVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_objectForKeyedSubscript__0269d098,
               *(undefined8 *)PTR__NSFileModificationDate_02578020);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_50;
    local_50 = lVar4;
    (*(code *)PTR__objc_release_02578630)(lVar3);
  }
  if (local_68 != 0) {
    lVar4 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_objectForKeyedSubscript__0269d098,
               *(undefined8 *)PTR__NSFileModificationDate_02578020);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_58;
    local_58 = lVar4;
    (*(code *)PTR__objc_release_02578630)(lVar3);
  }
  if ((local_50 == 0) && (local_58 == 0)) {
    lVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_localizedCaseInsensitiveCompare__026b05e0);
    local_18 = lVar4;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_release_02578630)(lVar3);
  }
  else if (local_50 == 0) {
    local_18 = 1;
  }
  else if (local_58 == 0) {
    local_18 = -1;
  }
  else {
    lVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_compare__0269cd10,local_50);
    local_18 = lVar3;
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return local_18;
}

