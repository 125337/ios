// FUN_018f2bb0 @ 018f2bb0

void FUN_018f2bb0(long param_1,byte param_2,undefined8 param_3)

{
  undefined8 local_28;
  byte local_19;
  long local_18;
  
  local_28 = 0;
  local_19 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_finishToast_success_message__026b84d8,
             *(undefined8 *)(param_1 + 0x28),local_19 & 1,local_28);
  if ((local_19 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_refreshRemoteList_026b83a8);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

