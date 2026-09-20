// setRemoteListLoading: @ 018f320c

/* Function Stack Size: 0x14 bytes */

void WCRefineCloudBackupSettingsViewController::setRemoteListLoading_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_remoteListLoading) = (byte)param_3 & 1;
  return;
}

