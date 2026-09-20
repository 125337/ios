// captureMediaDarkModeSnapshot @ 00f998e0

/* Function Stack Size: 0x10 bytes */

void WCRefineHelper::captureMediaDarkModeSnapshot(ID param_1,SEL param_2)

{
  undefined8 in_d0;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isWeChatDarkMode_026a75a8);
  _os_unfair_lock_lock();
  DAT_028e2f10 = (byte)param_1 & 1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_timeIntervalSinceReferenceDate_0269e4e0);
  DAT_028e2f18 = in_d0;
  _os_unfair_lock_unlock(&DAT_028e2f0c);
  return;
}

