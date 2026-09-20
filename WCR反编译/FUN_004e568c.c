// FUN_004e568c @ 004e568c

void FUN_004e568c(long param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_18;
  
  if (param_1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    pcVar1 = &cf_lS1Y_S_MRmo__g_b0RlSeQS;
    local_18 = &cf_lS1Y_S_MRmo__g_b0RlSeQS;
  }
  else if (param_1 == 1) {
    (*(code *)PTR__objc_retain_02578638)();
    pcVar1 = &cf_S_MRmo_N_ecY;
    local_18 = &cf_S_MRmo_N_ecY;
  }
  else {
    pcVar1 = (cfstringStruct *)0x0;
    if (param_1 != 2) {
      if (param_1 == 3) {
        local_18 = (cfstringStruct *)0x0;
        pcVar1 = (cfstringStruct *)0x0;
        goto LAB_004e5880;
      }
      if (param_1 == 4) {
        (*(code *)PTR__objc_retain_02578638)();
        pcVar1 = &cf_S_MRmo_N_ecY_u;
        local_18 = &cf_S_MRmo_N_ecY_u;
        goto LAB_004e5880;
      }
      if (param_1 == 5) {
        (*(code *)PTR__objc_retain_02578638)();
        pcVar1 = &cf_S_MRmo_N_ecY;
        local_18 = &cf_S_MRmo_N_ecY;
        goto LAB_004e5880;
      }
      if (param_1 == 6) {
        (*(code *)PTR__objc_retain_02578638)();
        pcVar1 = &cf_S_MRmo_N_ec_Nb;
        local_18 = &cf_S_MRmo_N_ec_Nb;
        goto LAB_004e5880;
      }
      if (param_1 == 7) {
        (*(code *)PTR__objc_retain_02578638)();
        pcVar1 = &cf_S_MRmo_N_ec__u;
        local_18 = &cf_S_MRmo_N_ec__u;
        goto LAB_004e5880;
      }
      if (param_1 == 8) {
        (*(code *)PTR__objc_retain_02578638)();
        pcVar1 = &cf_S_MRmo_N_ec__ue_;
        local_18 = &cf_S_MRmo_N_ec__ue_;
        goto LAB_004e5880;
      }
      if (param_1 == 9) {
        (*(code *)PTR__objc_retain_02578638)();
        pcVar1 = &cf_S_MRmo__g_b0RDeaS;
        local_18 = &cf_S_MRmo__g_b0RDeaS;
        goto LAB_004e5880;
      }
      pcVar1 = (cfstringStruct *)(param_1 + -10);
    }
    local_18 = (cfstringStruct *)0x0;
  }
LAB_004e5880:
  _objc_autoreleaseReturnValue(pcVar1,local_18);
  return;
}

