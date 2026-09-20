// FUN_0004a7ac @ 0004a7ac

void FUN_0004a7ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long local_38 [3];
  undefined8 local_20;
  long local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028c7b70)(param_1,param_2);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    lVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_deviceLoginCardView_0269d928);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_38[0] = lVar4;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    if (local_38[0] != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_onTapConfirmLoginButtonWithInfo__0269d938,local_38[0]);
    }
    _objc_storeStrong(local_38,0);
  }
  return;
}

