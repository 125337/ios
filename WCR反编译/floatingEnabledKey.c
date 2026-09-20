// floatingEnabledKey @ 00906348

/* Function Stack Size: 0x10 bytes */

ID LogFloatingBall::floatingEnabledKey(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_monitorMode_026a9f18);
  pcVar1 = &cf_NSLogMonitorFloatingWindowEnabled;
  if (param_1 != 1) {
    pcVar1 = &cf_NavigationMonitorFloatingWindowEnabled;
  }
  _objc_retainAutoreleaseReturnValue();
  return (ID)pcVar1;
}

