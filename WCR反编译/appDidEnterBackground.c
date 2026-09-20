// appDidEnterBackground @ 00f76210

/* Function Stack Size: 0x10 bytes */

void WCRefineFriendRelationChecker::appDidEnterBackground(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_running_026aca70);
  if ((IVar1 & 1) != 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (((ulong)puVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_pauseWithReason__026acaf0,_kWCRFriendRelationPauseBackground);
    }
  }
  return;
}

