// FUN_004e0114 @ 004e0114

byte FUN_004e0114(long param_1,undefined8 param_2)

{
  long local_30;
  undefined8 local_28;
  long local_20;
  bool local_11;
  
  local_28 = param_2;
  local_20 = param_1;
  FUN_004e2d9c();
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  if (param_1 == 0) {
    local_11 = false;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_m_uiMessageType_0269d0a8);
    local_11 = (int)param_1 == 1;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

