// FUN_0156b06c @ 0156b06c

void FUN_0156b06c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineTopBarProfileCardPresenter_026ce228,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = uVar1;
  _dispatch_async(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

