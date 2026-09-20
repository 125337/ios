// FUN_004cd470 @ 004cd470

void FUN_004cd470(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long local_60;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_60 = 0;
  }
  else {
    local_60 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    _class_getInstanceVariable();
  }
  lVar1 = local_18;
  if (local_60 != 0) {
    _ivar_getOffset();
    *(bool *)(lVar1 + local_60) = (param_3 & 1) != 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

