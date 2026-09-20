// offsetXForScene: @ 01c2f13c

/* Function Stack Size: 0x18 bytes */

double __thiscall
WCRefineNameplateBeautifyViewController::offsetXForScene_
          (WCRefineNameplateBeautifyViewController *this,ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  double in_d0;
  undefined *local_38;
  long_long local_30;
  SEL local_28;
  ID local_20;
  double local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  if (local_30 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_nameplateHomeOffsetX_026aea68);
    local_18 = in_d0;
  }
  else if (local_30 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_nameplateChatOffsetX_026aea90);
    local_18 = in_d0;
  }
  else if (local_30 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_nameplateContactsOffsetX_026aeab8);
    local_18 = in_d0;
  }
  else if (local_30 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_nameplateMomentsOffsetX_026aeae0);
    local_18 = in_d0;
  }
  else if (local_30 == 4) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_nameplateChatTopBarOffsetX_026aeb08);
    local_18 = in_d0;
  }
  else if (local_30 == 5) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_nameplateHomeOnlineOffsetX_026aeb30);
    local_18 = in_d0;
  }
  else {
    local_18 = 0.0;
  }
  _objc_storeStrong(&local_38,0);
  return local_18;
}

