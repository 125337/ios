// FUN_00eb6d60 @ 00eb6d60

void FUN_00eb6d60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineBackgroundKeepAlive_026ceb10;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineBackgroundKeepAlive_026ceb10,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (DAT_028e29b8 != (code *)0x0) {
    (*DAT_028e29b8)(local_18,local_20,local_28);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

