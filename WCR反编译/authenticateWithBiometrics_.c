// authenticateWithBiometrics: @ 01a34bac

/* Function Stack Size: 0x18 bytes */

void WCRefineGeneralFunctionViewController::authenticateWithBiometrics_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 local_38;
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3,param_3,param_4);
  puVar2 = PTR__OBJC_CLASS___LAContext_026cdfa8;
  _objc_alloc_init();
  uVar1 = local_28;
  local_30 = puVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_evaluatePolicy_localizedReason_r_0269cc28,1,&cf__vNN_T_uuir_R);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

