// FUN_004cd568 @ 004cd568

byte FUN_004cd568(undefined8 param_1)

{
  long lVar1;
  long local_58;
  long local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_58 = 0;
  }
  else {
    local_58 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    _class_getInstanceVariable();
  }
  lVar1 = local_20;
  if (local_58 == 0) {
    local_11 = false;
  }
  else {
    _ivar_getOffset();
    local_11 = *(char *)(lVar1 + local_58) != '\0';
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

