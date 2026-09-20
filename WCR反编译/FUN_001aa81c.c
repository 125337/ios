// FUN_001aa81c @ 001aa81c

void FUN_001aa81c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong local_40;
  byte local_31;
  undefined4 local_30;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  FUN_001aafcc();
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar2;
  if (uVar2 == 0) {
    local_30 = 1;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_31 = (byte)puVar4;
    uVar2 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028c8a88);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_boolValue_026ca540);
    if ((local_31 & 1) == 0) {
      if ((uVar2 & 1) != 0) {
        FUN_001abd04(local_18,local_20);
        uVar2 = local_18;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar2,&DAT_028c8a88,puVar3,1);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      local_30 = 0;
    }
    else {
      FUN_001ab3d0(local_18,local_20);
      uVar1 = local_18;
      if ((uVar2 & 1) == 0) {
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar1,&DAT_028c8a88,puVar3,1);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      local_30 = 1;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

