// FUN_017b1e34 @ 017b1e34

void FUN_017b1e34(long param_1)

{
  long lVar1;
  dispatch_time_t dVar2;
  undefined *puVar3;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  FUN_017b0ff0(*(undefined8 *)(param_1 + 0x20));
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_20);
  }
  dVar2 = _dispatch_time(0,500000000);
  puVar3 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_after(dVar2,puVar3,&PTR___NSConcreteGlobalBlock_02588e50);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_20,0);
  return;
}

