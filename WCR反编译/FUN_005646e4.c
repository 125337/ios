// FUN_005646e4 @ 005646e4

long FUN_005646e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long local_50;
  undefined *local_48;
  undefined4 local_40;
  ulong local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar3 = local_30;
  puVar2 = PTR_WCRefineMomentsEditMenuDelegateProxy_026ce780;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMomentsEditMenuDelegateProxy_026ce780,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  lVar4 = local_20;
  pcVar1 = DAT_028cb538;
  if ((uVar3 & 1) == 0) {
    puVar2 = PTR_WCRefineMomentsEditMenuDelegateProxy_026ce780;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMomentsEditMenuDelegateProxy_026ce780,PTR_s_new_0269d288);
    local_48 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setOriginalDelegate__026a5250,local_30);
    lVar4 = local_20;
    pcVar1 = DAT_028cb538;
    (*(code *)PTR__objc_retain_02578638)();
    (*pcVar1)(lVar4,local_28,local_48);
    local_50 = lVar4;
    if (lVar4 != 0) {
      _objc_setAssociatedObject(lVar4,&DAT_028cb55a,local_48,1);
    }
    lVar4 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar4;
    local_40 = 1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    (*pcVar1)(lVar4,local_28,local_30);
    local_40 = 1;
    local_18 = lVar4;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

