// FUN_00756560 @ 00756560

void FUN_00756560(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong local_50;
  long local_48 [3];
  long local_30;
  undefined4 local_24;
  ulong local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if (local_18 == 0) {
    local_24 = 1;
  }
  else {
    lVar1 = local_18;
    _objc_getAssociatedObject(local_18,DAT_026f45d8);
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar1;
    if (lVar1 == 0) {
      local_24 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (lVar1,PTR_s_objectForKeyedSubscript__0269d098,&cf_senderUserName);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      FUN_00743f78();
      _objc_retainAutoreleasedReturnValue();
      local_48[0] = lVar2;
      (*(code *)PTR__objc_release_02578630)(lVar1);
      uVar3 = local_20;
      FUN_00743f78();
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
      if ((uVar3 == 0) ||
         (uVar3 = local_50,
         (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,local_48[0])
         , (uVar3 & 1) == 0)) {
        _objc_setAssociatedObject(local_18,DAT_026f45d8,0,1);
        _objc_setAssociatedObject(local_18,DAT_026f45e0,0,1);
      }
      _objc_storeStrong(&local_50);
      _objc_storeStrong(local_48,0);
      local_24 = 0;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

