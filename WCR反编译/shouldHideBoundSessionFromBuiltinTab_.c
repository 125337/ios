// shouldHideBoundSessionFromBuiltinTab: @ 015216bc

/* Function Stack Size: 0x18 bytes */

bool WCRefineTelegramGroupingStore::shouldHideBoundSessionFromBuiltinTab_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ID IVar5;
  long local_30;
  SEL local_28;
  ID local_20;
  bool local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    local_11 = false;
  }
  else {
    lVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_kind_026a27e8);
    if (lVar4 == 1) {
      IVar5 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_effectiveScopeMaskForTab__026b0298,local_30);
      bVar1 = false;
      if (((IVar5 & 0x1c) != 0) && (bVar1 = false, (IVar5 & 1) == 0)) {
        bVar1 = (IVar5 & 2) == 0;
      }
      local_11 = true;
      if ((IVar5 != 1) && (local_11 = true, IVar5 != 2)) {
        local_11 = bVar1;
      }
    }
    else {
      local_11 = false;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

