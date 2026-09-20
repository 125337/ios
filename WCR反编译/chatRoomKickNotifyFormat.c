// chatRoomKickNotifyFormat @ 0208d17c

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::chatRoomKickNotifyFormat(ID param_1,SEL param_2)

{
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  FUN_0208c26c(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = (cfstringStruct *)param_2;
  (*(code *)PTR__objc_msgSend_02578628)(param_2,PTR_s_length_0269cca0);
  if ((cfstringStruct *)param_2 == (cfstringStruct *)0x0) {
    local_30 = &cf___;
  }
  else {
    local_30 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_30;
}

