// FUN_005cf0c8 @ 005cf0c8

void FUN_005cf0c8(long param_1,byte param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_70;
  long local_38;
  long local_30;
  cfstringStruct *local_28;
  byte local_19;
  long local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_19 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = param_1 + 0x28;
  local_30 = param_1;
  _objc_loadWeakRetained();
  local_38 = lVar2;
  if (lVar2 != 0) {
    _objc_setAssociatedObject(lVar2,&DAT_028cb77f,0,1);
    puVar1 = PTR_WCRefineHelper_026ce000;
    if ((local_19 & 1) == 0) {
      pcVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_70 = &cf_ZSON_1Y_ellS0RO;
      }
      else {
        local_70 = local_28;
      }
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78,local_70);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_WCRefine_openForwardMomentToChat_026a57e0,
                 *(undefined8 *)(param_1 + 0x20));
    }
  }
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

