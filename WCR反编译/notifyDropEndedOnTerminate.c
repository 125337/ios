// notifyDropEndedOnTerminate @ 00eb94a8

/* Function Stack Size: 0x10 bytes */

void WCRefineBackgroundKeepAlive::notifyDropEndedOnTerminate(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  double dVar6;
  double local_b8;
  undefined *local_68;
  cfstringStruct *local_60;
  double local_58;
  undefined4 local_4c;
  double local_48;
  ID local_40;
  double local_38;
  undefined1 local_29;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  puVar3 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (((ulong)puVar4 & 1) != 0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_29 = 0;
    bVar2 = false;
    uVar1 = ((ulong)puVar4 & 1) == 0;
    if ((bool)uVar1) {
      IVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_backgroundEnteredAt_026ab340);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = IVar5 == 0;
      local_29 = uVar1;
      local_28 = IVar5;
      (*(code *)PTR__objc_release_02578630)(IVar5);
      uVar1 = local_29;
    }
    local_29 = uVar1;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if ((!bVar2) &&
       (IVar5 = local_18,
       (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_didNotifyDropEnded_026ab420),
       (IVar5 & 1) == 0)) {
      dVar6 = 0.0;
      local_38 = 0.0;
      IVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_backgroundEnteredAt_026ab340);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (IVar5 != 0) {
        puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48)
        ;
        _objc_retainAutoreleasedReturnValue();
        IVar5 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_backgroundEnteredAt_026ab340);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_timeIntervalSinceDate__0269cb78);
        local_38 = dVar6;
        (*(code *)PTR__objc_release_02578630)(IVar5);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setDidNotifyDropEnded__026ab320,1);
      IVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
      local_48 = local_38;
      local_4c = 0;
      if (0.0 <= local_38) {
        local_b8 = local_38;
      }
      else {
        local_b8 = 0.0;
      }
      local_58 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,IVar5,PTR_s_formattedBackgroundDuration__026ab428);
      _objc_retainAutoreleasedReturnValue();
      local_40 = IVar5;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = &cf_TSO_msS_1YHe;
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_S_MRO_me_)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_68 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_40,0);
    }
  }
  return;
}

