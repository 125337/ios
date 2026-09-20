// FUN_0041a2fc @ 0041a2fc

byte FUN_0041a2fc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if ((lVar1 == 0) || (local_28 == 0)) {
    local_11 = 0;
  }
  else {
    puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_shouldConcealUsername__0269fef8,
               local_20);
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_isOfficialAccountOrBrandUserName_0269d4e8,
                 local_20);
      if (((ulong)puVar2 & 1) == 0) {
        lVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_messageDanmakuSelectedSessions_026a3750);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar1);
        lVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_messageDanmakuSessionRule_026a3758);
        if (lVar1 == 1) {
          local_11 = (byte)lVar3 & 1;
        }
        else {
          local_11 = ((byte)lVar3 ^ 1) & 1;
        }
      }
      else {
        local_11 = 0;
      }
    }
    else {
      local_11 = 0;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

