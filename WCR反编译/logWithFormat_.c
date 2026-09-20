// logWithFormat: @ 0091d8ec

/* Function Stack Size: 0x18 bytes */

void WCNavigationMonitor::logWithFormat_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *local_40;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (((*(byte *)(local_18 + 8) & 1) != 0) && ((*(byte *)(local_18 + 10) & 1) == 0)) {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_appendEntry_toLogStore__026aa3c8,puVar1,
               *(undefined8 *)(local_18 + 0x18));
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

