// isWithinProtectionWindowForSeconds: @ 01113f8c

/* Function Stack Size: 0x18 bytes */

bool WCRefinePrivateFriendManager::isWithinProtectionWindowForSeconds_
               (ID param_1,SEL param_2,long_long param_3)

{
  double dVar1;
  bool local_11;
  
  if (((long)param_3 < 1) || (DAT_028e3548 <= 0.0)) {
    local_11 = false;
  }
  else {
    dVar1 = DAT_028e3548;
    _CFAbsoluteTimeGetCurrent();
    local_11 = dVar1 - DAT_028e3548 < (double)(long)param_3;
  }
  return (uint)local_11;
}

