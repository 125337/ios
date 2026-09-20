// FUN_01d1ae54 @ 01d1ae54

/* WARNING: Type propagation algorithm not settling */

void FUN_01d1ae54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_40;
  long local_38;
  long local_30 [4];
  
  local_30[2] = 0;
  local_30[3] = param_1;
  _objc_storeStrong();
  local_30[1] = 0;
  _objc_storeStrong(local_30 + 1,param_3);
  local_30[0] = 0;
  _objc_storeStrong(local_30,param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_objectForKeyedSubscript__0269d098,_WCRQuickReplyIdKey);
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineQuickReplyStore_026cec50,PTR_s_removeItemId__026aaaa8,uVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  (**(code **)(local_30[0] + 0x10))(local_30[0],1);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(local_30,0);
  _objc_storeStrong(local_30 + 1,0);
  _objc_storeStrong(local_30 + 2,0);
  return;
}

