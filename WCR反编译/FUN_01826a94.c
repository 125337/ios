// FUN_01826a94 @ 01826a94

long FUN_01826a94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
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
  lVar1 = *(long *)(param_1 + 0x20);
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_absolutePathForRelative__026b6400,local_28);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20);
  local_40 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_absolutePathForRelative__026b6400,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_50 = 0;
  local_58 = 0;
  local_48 = lVar2;
  if (local_40 != 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar2,PTR_s_attributesOfItemAtPath_error__0269db08,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_60 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar2,PTR_s_objectForKeyedSubscript__0269d098,
               *(undefined8 *)PTR__NSFileModificationDate_02578020);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_50;
    local_50 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    _objc_storeStrong(&local_60,0);
  }
  if (local_48 != 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar2,PTR_s_attributesOfItemAtPath_error__0269db08,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_68 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar2,PTR_s_objectForKeyedSubscript__0269d098,
               *(undefined8 *)PTR__NSFileModificationDate_02578020);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_58;
    local_58 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    _objc_storeStrong(&local_68,0);
  }
  if ((local_50 == 0) && (local_58 == 0)) {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_localizedCaseInsensitiveCompare__026b05e0);
    local_18 = lVar2;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  else if (local_50 == 0) {
    local_18 = 1;
  }
  else if (local_58 == 0) {
    local_18 = -1;
  }
  else {
    lVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_compare__0269cd10,local_50);
    local_18 = lVar1;
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return local_18;
}

