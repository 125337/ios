// FUN_01aa655c @ 01aa655c

void FUN_01aa655c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long local_60;
  long local_50;
  long local_28;
  long local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  if (local_20 == 0) {
    local_50 = *(long *)PTR____NSArray0___02578280;
  }
  else {
    local_50 = local_20;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setMemberSyncChatRooms__026be140,local_50);
  if (local_28 == 0) {
    local_60 = *(long *)PTR____NSArray0___02578280;
  }
  else {
    local_60 = local_28;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setMemberSyncTags__026be148,local_60);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setMemberSyncKind__026be150);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setMemberSyncSource__026be158,&cf___);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

