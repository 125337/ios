// FUN_015c7a88 @ 015c7a88

byte FUN_015c7a88(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 local_58;
  undefined8 local_48;
  byte local_39;
  long local_38;
  undefined8 local_30;
  ulong local_28;
  long local_20;
  byte local_11;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  local_39 = 0;
  uVar3 = local_28;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf__);
  bVar2 = false;
  bVar1 = false;
  local_11 = 0;
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x20);
    local_48 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_repositoryPath_026aeb48);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = true;
    local_58 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_58,&local_39);
    local_11 = 0;
    if ((uVar3 & 1) != 0) {
      local_11 = local_39;
    }
  }
  local_11 = local_11 & 1;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_11 & 1;
}

