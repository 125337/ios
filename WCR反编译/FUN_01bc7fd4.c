// FUN_01bc7fd4 @ 01bc7fd4

undefined * FUN_01bc7fd4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = PTR_WCRefineMomentsMonitor_026ce718;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_18,0);
  return puVar2;
}

