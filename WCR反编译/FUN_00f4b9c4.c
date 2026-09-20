// FUN_00f4b9c4 @ 00f4b9c4

void FUN_00f4b9c4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_68;
  undefined8 local_40;
  cfstringStruct *local_38;
  undefined4 local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar2 = local_20;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSh_penc);
    local_2c = 1;
  }
  else {
    local_38 = (cfstringStruct *)0x0;
    uVar3 = *(ulong *)(param_1 + 0x38);
    local_40 = 0;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_sendEmoticonWrap_imageData_sourc_026ac460,*(undefined8 *)(param_1 + 0x20)
               ,local_20,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
               *(byte *)(param_1 + 0x40) & 1,&local_40);
    _objc_storeStrong(&local_38,local_40);
    puVar1 = PTR_WCRefineHelper_026ce000;
    if ((uVar3 & 1) == 0) {
      pcVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_68 = &cf_S1Y_;
      }
      else {
        local_68 = local_38;
      }
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78,local_68);
    }
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_20,0);
  return;
}

