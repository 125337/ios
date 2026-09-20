// FUN_0100784c @ 0100784c

void FUN_0100784c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  cfstringStruct *pcVar2;
  undefined8 uVar3;
  cfstringStruct *local_90;
  cfstringStruct *local_80;
  long local_70;
  cfstringStruct *local_50;
  byte local_41;
  long local_40;
  long local_38;
  long local_30;
  cfstringStruct *local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_20;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  local_41 = 0;
  if (lVar1 == 0) {
    local_70 = *(long *)(param_1 + 0x50);
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_fallbackLinkCardThumbData_026ad9c0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_70;
  }
  else {
    local_70 = local_20;
  }
  local_41 = lVar1 == 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_70;
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_90 = *(cfstringStruct **)(param_1 + 0x20);
    if (local_90 == (cfstringStruct *)0x0) {
      local_90 = &cf___;
    }
    local_80 = local_90;
  }
  else {
    local_80 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_80;
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_emitLinkCardToUsr_url_title_desc_026ad9c8,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x40),local_80,local_38);
  if (*(long *)(param_1 + 0x48) != 0) {
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),(byte)uVar3 & 1);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

