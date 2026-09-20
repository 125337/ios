// FUN_0003db3c @ 0003db3c

void FUN_0003db3c(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long local_48;
  long local_40 [3];
  long local_28;
  long *local_20;
  long local_18;
  
  plVar1 = &local_18;
  local_18 = 0;
  _objc_storeStrong(plVar1,param_1);
  FUN_00035dd4();
  _objc_retainAutoreleasedReturnValue();
  local_20 = plVar1;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(plVar1);
  lVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_objectForKeyedSubscript__0269d098,&cf_key);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_0003102c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar3;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  lVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_objectForKeyedSubscript__0269d098,&cf_transferID);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_0003102c();
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = lVar3;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  lVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_objectForKeyedSubscript__0269d098,&cf_transID);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_0003102c();
  _objc_retainAutoreleasedReturnValue();
  local_48 = lVar3;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_removeObjectForKey__0269d700,local_28);
  }
  lVar2 = local_40[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_length_0269cca0);
  if (lVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_removeObjectForKey__0269d700,local_40[0]);
  }
  lVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if (lVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_removeObjectForKey__0269d700,local_48);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(local_40,0);
  _objc_storeStrong(&local_28,0);
  _objc_sync_exit(plVar1);
  (*(code *)PTR__objc_release_02578630)(plVar1);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

