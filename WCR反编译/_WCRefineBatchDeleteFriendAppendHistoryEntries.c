// _WCRefineBatchDeleteFriendAppendHistoryEntries @ 018520f0

void _WCRefineBatchDeleteFriendAppendHistoryEntries(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *local_70;
  ulong local_68;
  undefined4 local_5c;
  ulong local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_58 = 0;
  _objc_storeStrong(&local_58,param_1);
  uVar1 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
  if (uVar1 == 0) {
    local_5c = 1;
  }
  else {
    _WCRefineBatchDeleteFriendHistoryItems();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_68 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar3 = PTR__OBJC_CLASS___NSIndexSet_026ce378;
    uVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
    local_28 = 0;
    local_20 = 0;
    local_30 = uVar1;
    local_18 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_indexSetWithIndexesInRange__0269faf0,0,uVar1)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_insertObjects_atIndexes__0269faf8,local_58,puVar3);
    uVar2 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0);
    uVar1 = local_68;
    if (500 < uVar2) {
      uVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0);
      local_50 = uVar2 - 500;
      local_48 = 500;
      local_40 = 500;
      local_38 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_removeObjectsInRange__0269dad0,500,local_50)
      ;
    }
    _WCRefineBatchDeleteFriendSaveHistoryItems(local_68);
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
    local_5c = 0;
  }
  _objc_storeStrong(&local_58,0);
  return;
}

