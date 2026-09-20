// FUN_00eec410 @ 00eec410

ulong FUN_00eec410(undefined8 param_1)

{
  ulong uVar1;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_00eeb684(local_20,&cf_m_selectMaxCount);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_unsignedIntegerValue_026cabb8);
  if (((uVar1 & 1) == 0) ||
     (uVar1 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_unsignedIntegerValue_026cabb8),
     local_18 = uVar1, uVar1 == 0)) {
    local_18 = 0xffffffffffffffff;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

