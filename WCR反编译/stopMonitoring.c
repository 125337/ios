// stopMonitoring @ 0091a02c

/* Function Stack Size: 0x10 bytes */

void WCNavigationMonitor::stopMonitoring(ID param_1,SEL param_2)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_1 + 10) = 0;
    DAT_028ce368 = 0;
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_appendEntry_toLogStore__026aa3c8,&::cf__,
               *(undefined8 *)(param_1 + 0x18));
  }
  return;
}

