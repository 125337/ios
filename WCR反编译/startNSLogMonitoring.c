// startNSLogMonitoring @ 0091a0a4

/* Function Stack Size: 0x10 bytes */

void WCNavigationMonitor::startNSLogMonitoring(ID param_1,SEL param_2)

{
  if ((*(byte *)(param_1 + 9) & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_installSTDERRCaptureIfNeeded_026aa3d0);
    *(undefined1 *)(param_1 + 9) = 1;
    *(undefined1 *)(param_1 + 0xb) = 0;
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_appendEntry_toLogStore__026aa3c8,&::cf__,
               *(undefined8 *)(param_1 + 0x20));
  }
  return;
}

