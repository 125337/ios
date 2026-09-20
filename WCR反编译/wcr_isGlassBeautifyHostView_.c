// wcr_isGlassBeautifyHostView: @ 01f3299c

/* Function Stack Size: 0x18 bytes */

bool WCRefineUIBeautifyViewController::wcr_isGlassBeautifyHostView_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 uVar2;
  long local_50;
  undefined4 local_44;
  long local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  undefined8 local_20;
  long *local_18;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  if (local_40 == 0) {
    local_21 = 0;
    local_44 = 1;
  }
  else {
    lVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_18 = &DAT_028e4888;
    local_20 = 0;
    local_50 = lVar1;
    _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0258cc10);
    if (*local_18 + 1 != 0) {
      _dispatch_once(*local_18 + 1,local_18,local_20);
    }
    _objc_storeStrong(&local_20);
    uVar2 = DAT_028e4880;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e4880,PTR_s_containsObject__0269cbb8,local_50);
    local_21 = (byte)uVar2 & 1;
    local_44 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

