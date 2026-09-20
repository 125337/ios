// entrySide @ 0107af40

/* Function Stack Size: 0x10 bytes */

long_long WCRefineLocalEmoticonStore::entrySide(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long_long local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (puVar2 == (undefined1 *)0x0) {
    local_18 = 0;
  }
  else if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
    local_18 = 2;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}

