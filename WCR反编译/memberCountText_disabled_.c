// memberCountText:disabled: @ 01ab55ac

/* Function Stack Size: 0x1c bytes */

ID WCRGroupListViewController::memberCountText_disabled_
             (ID param_1,SEL param_2,unsigned_long_long param_3,bool param_4)

{
  bool bVar1;
  ID local_58;
  ID local_48;
  ID local_40;
  byte local_31;
  unsigned_long_long local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_31 = (byte)param_4;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_memberCountText__026bde28,param_3);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = (local_31 & 1) != 0;
  local_58 = param_1;
  local_40 = param_1;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_stringByAppendingString__0269d398,&::cf_space_s_);
    _objc_retainAutoreleasedReturnValue();
    local_58 = param_1;
    local_48 = param_1;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_58;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

