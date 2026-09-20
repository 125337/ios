// setHideWCRefinePluginHubEntryArmedInSession: @ 02094db4

/* Function Stack Size: 0x14 bytes */

void WCRefineConfig::setHideWCRefinePluginHubEntryArmedInSession_
               (ID param_1,SEL param_2,bool param_3)

{
  if ((DAT_028e4960 & 1) != ((byte)param_3 & 1)) {
    DAT_028e4960 = (byte)param_3 & 1;
  }
  return;
}

