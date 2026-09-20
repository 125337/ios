// playTapticFeedback @ 0000a400

/* WARNING: Removing unreachable block (ram,0x0000a4ac) */
/* Function Stack Size: 0x10 bytes */

void EncryptionLock::playTapticFeedback(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_026cdff0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_prepare_026ca7d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_impactOccurred_026ca6a0);
  _objc_storeStrong(&local_28,0);
  return;
}

