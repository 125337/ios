// FUN_01f55590 @ 01f55590

byte FUN_01f55590(double param_1,undefined8 param_2)

{
  double dVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  double dVar5;
  ulong local_38;
  double local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else if ((DAT_028e48c1 & 1) == 0) {
    uVar4 = local_20;
    FUN_01f56270();
    if ((uVar4 & 1) == 0) {
      uVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_onMinimize_026ad280);
      if ((uVar4 & 1) == 0) {
        local_11 = 0;
        local_24 = 1;
      }
      else {
        puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        uVar4 = local_20;
        local_30 = param_1;
        _objc_getAssociatedObject(local_20,&DAT_028e48c2);
        _objc_retainAutoreleasedReturnValue();
        dVar1 = local_30;
        local_38 = uVar4;
        if ((uVar4 == 0) ||
           (dVar5 = local_30,
           (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_doubleValue_026ca608),
           0.35 <= dVar1 - dVar5)) {
          uVar4 = local_20;
          puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(uVar4,&DAT_028e48c2,puVar2,1);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          DAT_028e48c1 = 1;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_onMinimize_026ad280);
          DAT_028e48c1 = 0;
        }
        local_11 = 1;
        local_24 = 1;
        _objc_storeStrong(&local_38,0);
      }
    }
    else {
      local_11 = 0;
      local_24 = 1;
    }
  }
  else {
    local_11 = 0;
    local_24 = 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

