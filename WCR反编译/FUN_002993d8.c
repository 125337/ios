// FUN_002993d8 @ 002993d8

void FUN_002993d8(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  uint local_44;
  ulong local_40 [3];
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  FUN_002992e0();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_item_026a1890);
  if ((uVar2 & 1) != 0) {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_item_026a1890);
    _objc_retainAutoreleasedReturnValue();
    local_40[0] = uVar2;
    if (uVar2 != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
    }
    local_44 = (uint)(uVar2 != 0);
    _objc_storeStrong(local_40,0);
    if (local_44 != 0) goto LAB_00299720;
  }
  uVar2 = local_20;
  FUN_00299774();
  _objc_retainAutoreleasedReturnValue();
  local_50 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_finderShareItem_026a1898);
  if ((uVar2 & 1) == 0) {
LAB_002995dc:
    uVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_finderLongVideoShareItem_026a18a0);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_finderLongVideoShareItem_026a18a0);
      _objc_retainAutoreleasedReturnValue();
      local_60 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_converToShareFeedItem_026a18a8);
      bVar1 = (uVar2 & 1) != 0;
      if (bVar1) {
        uVar2 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_converToShareFeedItem_026a18a8);
        _objc_retainAutoreleasedReturnValue();
        local_18 = uVar2;
      }
      local_44 = (uint)bVar1;
      _objc_storeStrong(&local_60,0);
      if (local_44 != 0) goto LAB_00299700;
    }
    local_18 = 0;
    local_44 = 1;
  }
  else {
    uVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_finderShareItem_026a1898);
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar2;
    if (uVar2 != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
    }
    local_44 = (uint)(uVar2 != 0);
    _objc_storeStrong(&local_58,0);
    if (local_44 == 0) goto LAB_002995dc;
  }
LAB_00299700:
  _objc_storeStrong(&local_50,0);
LAB_00299720:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

