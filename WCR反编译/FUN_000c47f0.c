// FUN_000c47f0 @ 000c47f0

void FUN_000c47f0(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_98;
  cfstringStruct *local_40 [3];
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_2);
  pcVar1 = local_18;
  FUN_000c3ab4(local_18,&cf_m_groupContact);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  FUN_000c419c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    pcVar1 = local_20;
    FUN_000c39b4(local_20,PTR_s_m_chatRoomContact_0269e730);
    _objc_retainAutoreleasedReturnValue();
    local_40[0] = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      pcVar2 = local_20;
      FUN_000c3ab4(local_20,&cf_m_chatRoomContact);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_40[0];
      local_40[0] = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar2 = local_40[0];
    FUN_000c419c();
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_28;
    local_28 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    _objc_storeStrong(local_40,0);
  }
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasSuffix__0269d018,&cf__chatroom);
  if (((ulong)pcVar1 & 1) == 0) {
    local_98 = &cf___;
  }
  else {
    local_98 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(local_98);
  return;
}

