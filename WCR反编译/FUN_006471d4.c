// FUN_006471d4 @ 006471d4

void FUN_006471d4(undefined8 param_1)

{
  long lVar1;
  long local_50;
  long local_48;
  long local_40 [3];
  long local_28;
  undefined4 local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    lVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_viewWithTag__026cabe0,1999);
    _objc_retainAutoreleasedReturnValue();
    local_28 = lVar1;
    if (lVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setHidden__026ca970,1);
      FUN_00636834(local_28);
    }
    lVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_viewWithTag__026cabe0,0x7cd);
    _objc_retainAutoreleasedReturnValue();
    local_40[0] = lVar1;
    if (lVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setHidden__026ca970,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_restoreNicknamePushIfNeeded__026a5e90,
                 local_40[0]);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_removeNameplateFromHostView__026a5d88,
               local_18);
    lVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_viewWithTag__026cabe0,0x7cc);
    _objc_retainAutoreleasedReturnValue();
    local_48 = lVar1;
    if (lVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setHidden__026ca970,1);
    }
    lVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_viewWithTag__026cabe0,0x7cb);
    _objc_retainAutoreleasedReturnValue();
    local_50 = lVar1;
    if (lVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setHidden__026ca970,1);
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(local_40,0);
    _objc_storeStrong(&local_28,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

