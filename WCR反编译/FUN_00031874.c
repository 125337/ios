// FUN_00031874 @ 00031874

byte FUN_00031874(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_50;
  long local_40;
  long local_38;
  long local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_session);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_0003102c();
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if ((lVar1 == 0) || (local_38 == 0)) {
    local_21 = 0;
    local_50 = 1;
  }
  else {
    puVar3 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    FUN_00032774();
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar4;
    (*(code *)PTR__objc_release_02578630)();
    if (local_58 == (undefined *)0x0) {
      FUN_00032e7c();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      FUN_00032774();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_58;
      local_58 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    if (local_58 == (undefined *)0x0) {
      local_21 = 0;
      local_50 = 1;
    }
    else {
      puVar3 = local_58;
      FUN_00033060();
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
      if ((puVar3 == (undefined *)0x0) ||
         (puVar3 = local_60,
         (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isEqualToString__0269ccc8,local_40),
         ((ulong)puVar3 & 1) == 0)) {
        local_21 = 0;
      }
      else {
        puVar4 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_returnToOriginalMsg__0269d600);
        puVar3 = PTR_s_locateToMsg__0269d608;
        if (((ulong)puVar4 & 1) == 0) {
          puVar4 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_locateToMsg__0269d608);
          if (((ulong)puVar4 & 1) == 0) {
            local_21 = 0;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_58,puVar3,local_38);
            local_21 = 1;
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_returnToOriginalMsg__0269d600,local_38);
          local_21 = 1;
        }
      }
      local_50 = 1;
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

