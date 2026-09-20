// FUN_000530d8 @ 000530d8

void FUN_000530d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1b0;
  cfstringStruct *local_190;
  undefined4 local_178;
  cfstringStruct *local_168;
  cfstringStruct *local_108;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  bool local_e1;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  bool local_c9;
  cfstringStruct *local_c8;
  byte local_b9;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  bool local_a1;
  cfstringStruct *local_a0;
  byte local_91;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  undefined4 local_80;
  byte local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68 [3];
  cfstringStruct *local_50;
  undefined8 local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_48 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = pcVar2;
  FUN_0004d8bc();
  _objc_retainAutoreleasedReturnValue();
  local_79 = 0;
  local_68[0] = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_count_0269cfe0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_168 = &cf__;
  }
  else {
    local_168 = local_68[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68[0],PTR_s_componentsJoinedByString__0269d140,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_79 = 1;
    local_78 = local_168;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_168;
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  if (local_40 == (cfstringStruct *)0x0) {
    local_178 = 0;
  }
  else {
    local_178 = SUB84(local_40,0);
    FUN_000517a8();
  }
  local_80 = local_178;
  local_91 = 0;
  local_a1 = false;
  bVar1 = local_40 == (cfstringStruct *)0x0;
  if (bVar1) {
    local_190 = &cf___;
  }
  else {
    local_190 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_m_nsFromUsr_0269d088);
    _objc_retainAutoreleasedReturnValue();
    local_91 = 1;
    local_90 = local_190;
    FUN_0004fa34();
    _objc_retainAutoreleasedReturnValue();
    local_a0 = local_190;
  }
  local_a1 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = local_190;
  if ((local_a1 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a0);
  }
  if ((local_91 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  local_b9 = 0;
  local_c9 = false;
  bVar1 = local_40 == (cfstringStruct *)0x0;
  if (bVar1) {
    local_1b0 = &cf___;
  }
  else {
    local_1b0 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_m_nsToUsr_0269d090);
    _objc_retainAutoreleasedReturnValue();
    local_b9 = 1;
    local_b8 = local_1b0;
    FUN_0004fa34();
    _objc_retainAutoreleasedReturnValue();
    local_c8 = local_1b0;
  }
  local_c9 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_b0 = local_1b0;
  if ((local_c9 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c8);
  }
  if ((local_b9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_b8);
  }
  local_e1 = false;
  bVar1 = local_40 == (cfstringStruct *)0x0;
  if (bVar1) {
    local_1c8 = &cf___;
  }
  else {
    local_1c8 = local_40;
    FUN_00055194();
    _objc_retainAutoreleasedReturnValue();
    local_e0 = local_1c8;
  }
  local_e1 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_d8 = local_1c8;
  if ((local_e1 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e0);
  }
  bVar1 = local_40 == (cfstringStruct *)0x0;
  if (bVar1) {
    local_1e8 = &cf___;
  }
  else {
    local_f8 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_m_nsRealChatUsr_0269d190);
    _objc_retainAutoreleasedReturnValue();
    local_1e8 = local_f8;
    FUN_0004fa34();
    _objc_retainAutoreleasedReturnValue();
    local_108 = local_1e8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_f0 = local_1e8;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_108);
    (*(code *)PTR__objc_release_02578630)(local_f8);
  }
  _objc_storeStrong(&local_f0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(local_68,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

