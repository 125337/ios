// canUseBiometric @ 01a34b08

/* Function Stack Size: 0x10 bytes */

bool WCRefineGeneralFunctionViewController::canUseBiometric(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___LAContext_026cdfa8;
  local_20 = param_2;
  local_18 = param_1;
  _objc_alloc_init();
  local_30 = 0;
  local_38 = 0;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_canEvaluatePolicy_error__0269cc18,1,&local_38);
  _objc_storeStrong(&local_30,local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return (bool)puVar1;
}

