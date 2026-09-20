// _WCRVoiceTransInteractionActive @ 008c57c0

bool _WCRVoiceTransInteractionActive(void)

{
  bool bVar1;
  
  bVar1 = true;
  if ((((DAT_028ce048 & 1) == 0) && (bVar1 = true, (DAT_028ce049 & 1) == 0)) &&
     (bVar1 = true, (DAT_028ce04a & 1) == 0)) {
    bVar1 = (DAT_028ce050 & 1) != 0;
  }
  return bVar1;
}

