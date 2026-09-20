// setPendingUserNames:onHost: @ 00168658

/* Function Stack Size: 0x20 bytes */

void WCRefineClearSessionHook::setPendingUserNames_onHost_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  long lVar2;
  long local_58;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  lVar1 = local_30;
  if (local_30 != 0) {
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_copy_0269d150);
    local_58 = lVar2;
    if (lVar2 == 0) {
      local_58 = *(long *)PTR____NSArray0___02578280;
    }
    _objc_setAssociatedObject(lVar1,&DAT_028c8868,local_58,3);
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

