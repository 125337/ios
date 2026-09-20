// FUN_00036aec @ 00036aec

byte FUN_00036aec(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  char *local_70;
  long local_68;
  undefined4 local_5c;
  long local_58;
  long local_50 [3];
  long local_38;
  long local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_transferID);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_0003102c();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar3;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_transID);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_0003102c();
  _objc_retainAutoreleasedReturnValue();
  local_50[0] = lVar3;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_session);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_0003102c();
  _objc_retainAutoreleasedReturnValue();
  local_58 = lVar3;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  lVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if ((lVar2 == 0) ||
     (lVar2 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_21 = 0;
    local_5c = 1;
  }
  else {
    lVar2 = local_30;
    FUN_00037224();
    _objc_retainAutoreleasedReturnValue();
    local_68 = lVar2;
    if (lVar2 == 0) {
      local_21 = 0;
      local_5c = 1;
    }
    else {
      pcVar4 = "WCPayControlMgr";
      _objc_getClass();
      FUN_000323ec();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_s_startReceiverConfirmTransferMone_0269d6b0;
      local_70 = pcVar4;
      if ((pcVar4 == (char *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_respondsToSelector__026ca818,
                     PTR_s_startReceiverConfirmTransferMone_0269d6b0), ((ulong)pcVar4 & 1) == 0)) {
        local_21 = 0;
      }
      else {
        FUN_00038338(local_30);
        lVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_key);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        FUN_0003102c();
        _objc_retainAutoreleasedReturnValue();
        FUN_000387bc();
        (*(code *)PTR__objc_release_02578630)(lVar3);
        (*(code *)PTR__objc_release_02578630)(lVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_70,puVar1,0,local_68);
        local_21 = 1;
      }
      local_5c = 1;
      _objc_storeStrong(&local_70,0);
    }
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(local_50,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

