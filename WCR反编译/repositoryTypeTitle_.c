// repositoryTypeTitle: @ 011340c4

/* Function Stack Size: 0x18 bytes */

ID WCRefineQuickReplyStore::repositoryTypeTitle_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  undefined8 local_20;
  long *local_18;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_18 = &DAT_028e3590;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_025859c0);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  uVar1 = local_38;
  FUN_01130f58();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = DAT_028e3588;
  local_40 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3588,PTR_s_objectForKeyedSubscript__0269d098,uVar1);
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_50 = &cf_vQN;
  }
  else {
    local_50 = local_48;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_50;
}

