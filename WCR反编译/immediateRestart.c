// immediateRestart @ 014af168

/* Function Stack Size: 0x10 bytes */

void WCRefineRestar::immediateRestart(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineConfig_026cdf58,PTR_s_flushConfigWriteSync_026a2e38);
  puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_respondsToSelector__026ca818,PTR_s_suspend_026af430);
  if (((ulong)puVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_performSelector__026ca7b8,PTR_s_suspend_026af430);
  }
                    /* WARNING: Subroutine does not return */
  _exit(0);
}

