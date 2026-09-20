// FUN_00455054 @ 00455054

void FUN_00455054(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  byte local_8c;
  ulong local_48;
  undefined4 local_3c;
  ulong local_38 [3];
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_00451aac();
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_collectionViewLayout_026a0fc0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_026ce438;
  local_38[0] = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UICollectionViewFlowLayout_026ce438,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar3 = local_38[0];
  if ((uVar1 & 1) == 0) {
    local_3c = 1;
    goto LAB_004552d0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_respondsToSelector__026ca818,
             PTR_s_setSectionHeadersPinToVisibleBou_026a0fc8);
  if ((uVar3 & 1) == 0) {
    local_3c = 1;
  }
  else {
    puVar2 = PTR_WCRefineLocalEmoticonStore_026ce440;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isEnabled_026a0ef0);
    if (((ulong)puVar2 & 1) == 0) {
LAB_00455224:
      uVar3 = local_18;
      FUN_0045533c();
      local_8c = (byte)uVar3;
    }
    else {
      uVar3 = local_18;
      FUN_004504e8();
      local_8c = 1;
      if ((uVar3 & 1) == 0) goto LAB_00455224;
    }
    uVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_sectionHeadersPinToVisibleBounds_026a0fd0);
    if ((uint)uVar3 != (uint)(local_8c & 1)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setSectionHeadersPinToVisibleBou_026a0fc8,local_8c & 1);
    }
    local_3c = 0;
  }
  _objc_storeStrong(&local_48,0);
LAB_004552d0:
  _objc_storeStrong(local_38);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

