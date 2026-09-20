// setHomeGroupingExcludeSessions: @ 02000304

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setHomeGroupingExcludeSessions_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  long lVar3;
  SEL SVar4;
  long local_38;
  ID local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_28;
  local_30 = IVar2;
  FUN_01fd1d24(local_28,500);
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_count_0269cfe0);
  IVar2 = local_30;
  lVar1 = local_38;
  if (lVar3 == 0) {
    SVar4 = local_20;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_removeObjectForKey__0269d700);
    (*(code *)PTR__objc_release_02578630)(SVar4);
  }
  else {
    SVar4 = local_20;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_setObject_forKey__026ca9e8,lVar1);
    (*(code *)PTR__objc_release_02578630)(SVar4);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

