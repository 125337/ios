// getCurrentVersionText @ 01f4d37c

/* Function Stack Size: 0x10 bytes */

ID WCRefineVersionController::getCurrentVersionText(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__g_T_u;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (puVar2 == (undefined *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &::cf__;
    }
    else if (puVar2 == (undefined *)0x18001f37) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf__O;
    }
    else if (puVar2 == (undefined *)0x18002120) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf__O;
    }
    else if (puVar2 == (undefined *)0x18003137) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf__O;
    }
    else if (puVar2 == (undefined *)0x18003830) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf__O;
    }
    else if (puVar2 == (undefined *)0x18004b35) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf__O;
    }
    else if (puVar2 == (undefined *)0x18004c2e) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf__O;
    }
    else if (puVar2 == (undefined *)0x18004e2b) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf__O;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &::cf__;
    }
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

