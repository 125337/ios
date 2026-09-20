// FUN_0100eb60 @ 0100eb60

void FUN_0100eb60(long param_1,byte param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_30;
  long local_28;
  byte local_19;
  long local_18;
  
  pcVar1 = &cf_bcaSGr_S;
  if ((param_2 & 1) == 0) {
    pcVar1 = &cf_bcaSGrS1Y_;
  }
  local_28 = param_1;
  local_19 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_finishProgressToastSuccess_text__026ad9e0,
             local_19 & 1,pcVar1);
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),local_19 & 1,local_30)
    ;
  }
  _objc_storeStrong(&local_30,0);
  return;
}

