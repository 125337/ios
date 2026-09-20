// FUN_017d1a14 @ 017d1a14

void FUN_017d1a14(long param_1)

{
  long lVar1;
  long lVar2;
  long local_48;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  if (local_20 != 0) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
    if (lVar2 == 0) {
      local_48 = 0;
    }
    else {
      local_48 = local_20;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar1,PTR_s_wcrSet_key__026b5108,local_48,_WCRAISessionReplyMembers);
    (*(code *)PTR__objc_release_02578630)(lVar1);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

