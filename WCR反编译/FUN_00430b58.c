// FUN_00430b58 @ 00430b58

void FUN_00430b58(byte param_1,undefined8 param_2,byte param_3)

{
  long lVar1;
  undefined *local_b8;
  undefined *local_98;
  undefined *local_70;
  byte local_61;
  undefined *local_60;
  byte local_51;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_38;
  byte local_21;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  local_11 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = local_20;
  local_21 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_38 = 1;
  }
  else {
    local_98 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 0;
    local_61 = 0;
    local_40 = local_98;
    if ((local_11 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_98,PTR_s_keywordAutoReplySelectedContacts_026a0b28);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      local_60 = local_98;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_keywordAutoReplySelectedGroups_026a35e8);
      _objc_retainAutoreleasedReturnValue();
      local_51 = 1;
      local_50 = local_98;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_98;
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    if (local_48 == (undefined *)0x0) {
      local_b8 = *(undefined **)PTR____NSArray0___02578280;
    }
    else {
      local_b8 = local_48;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_mutableCopy_0269d8a0);
    local_70 = local_b8;
    if ((local_21 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_removeObject__0269d678,local_20);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_containsObject__0269cbb8,local_20);
      if (((ulong)local_b8 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_addObject__0269d180,local_20);
      }
    }
    if ((local_11 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_setKeywordAutoReplySelectedConta_026a3828,local_70);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_setKeywordAutoReplySelectedGroup_026a3820,local_70);
    }
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
    local_38 = 0;
  }
  _objc_storeStrong(&local_20,0);
  return;
}

