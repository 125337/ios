// FUN_0018d5a4 @ 0018d5a4

byte FUN_0018d5a4(long param_1)

{
  long lVar1;
  long local_28;
  long local_20;
  byte local_11;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  if (local_28 == 0) {
    local_11 = 0;
  }
  else if (local_20 == 0) {
    local_11 = 0;
  }
  else if (local_20 == 1) {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hideContactsChatsOnlyEnabled_0269fc60);
    local_11 = (byte)lVar1 & 1;
  }
  else if (local_20 == 2) {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hideContactsGroupChatsEnabled_0269fc68);
    local_11 = (byte)lVar1 & 1;
  }
  else {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hideContactsTagsEnabled_0269fc70);
    local_11 = (byte)lVar1 & 1;
  }
  _objc_storeStrong(&local_28,0);
  return local_11 & 1;
}

