// mediaPipelineDarkMode @ 00f99968

/* Function Stack Size: 0x10 bytes */

bool WCRefineHelper::mediaPipelineDarkMode(ID param_1,SEL param_2)

{
  bool bVar1;
  double dVar2;
  byte local_2a;
  byte local_11;
  
  bVar1 = false;
  local_2a = 0;
  _os_unfair_lock_lock(&DAT_028e2f0c);
  if (0.0 < DAT_028e2f18) {
    dVar2 = DAT_028e2f18;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_timeIntervalSinceReferenceDate_0269e4e0);
    if ((dVar2 - DAT_028e2f18 < 0.0) || (20.0 < dVar2 - DAT_028e2f18)) {
      DAT_028e2f18 = 0.0;
    }
    else {
      bVar1 = true;
      local_2a = DAT_028e2f10 & 1;
    }
  }
  _os_unfair_lock_unlock(&DAT_028e2f0c);
  if (!bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isWeChatDarkMode_026a75a8);
    local_2a = (byte)param_1;
  }
  local_11 = local_2a & 1;
  return (uint)local_11;
}

