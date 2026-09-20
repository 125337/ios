// FUN_00fbb780 @ 00fbb780

int FUN_00fbb780(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  int local_24;
  long local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar1 = local_18;
  FUN_00fbb918(local_18,PTR_s_m_uiAppMsgInnerType_026a14f0);
  local_24 = (int)uVar1;
  if (local_24 == 0) {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_valueForKey__0269d128,&cf_m_uiAppMsgInnerType);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_24 = (int)uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  if ((local_24 == 0) && (lVar3 = local_20, FUN_00fbaa64(), 0 < lVar3)) {
    local_24 = (int)lVar3;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return local_24;
}

