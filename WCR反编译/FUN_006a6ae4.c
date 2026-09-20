// FUN_006a6ae4 @ 006a6ae4

void FUN_006a6ae4(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_88;
  int local_44;
  undefined *local_40;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  long local_28;
  undefined *local_20;
  long local_18;
  
  local_20 = (undefined *)0x0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  local_2c = 1;
  local_44 = *(int *)(lVar5 + 0x18);
  do {
    piVar1 = (int *)(lVar5 + 0x18);
    do {
      local_30 = *piVar1;
      if (local_30 != local_44) break;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    bVar3 = local_30 == local_44;
    local_44 = local_30;
    if (bVar3) {
      local_28 = param_1;
      if (local_30 == 0) {
        if (((*(byte *)(param_1 + 0x40) & 1) == 0) ||
           (puVar4 = PTR_WCRefinePrivateFriendManager_026ce160,
           (*(code *)PTR__objc_msgSend_02578628)
                     (PTR_WCRefinePrivateFriendManager_026ce160,
                      PTR_s_shouldSuppressNotificationReques_026a6668,
                      *(undefined8 *)(param_1 + 0x20),local_20,*(undefined8 *)(param_1 + 0x28)),
           ((ulong)puVar4 & 1) == 0)) {
          if ((*(byte *)(param_1 + 0x41) & 1) == 0) {
            (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),local_20);
            local_34 = 1;
          }
          else {
            puVar4 = PTR_WCRefinePrivateFriendManager_026ce160;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefinePrivateFriendManager_026ce160,
                       PTR_s_disguisedNotificationContentForR_026a6670,
                       *(undefined8 *)(param_1 + 0x20),local_20,*(undefined8 *)(param_1 + 0x28));
            _objc_retainAutoreleasedReturnValue();
            local_88 = puVar4;
            if (puVar4 == (undefined *)0x0) {
              local_88 = local_20;
            }
            local_40 = puVar4;
            (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),local_88);
            _objc_storeStrong(&local_40,0);
            local_34 = 0;
          }
        }
        else {
          lVar5 = *(long *)(param_1 + 0x30);
          puVar4 = local_20;
          FUN_006a6cfc();
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(lVar5 + 0x10))();
          (*(code *)PTR__objc_release_02578630)(puVar4);
          local_34 = 1;
        }
      }
      else {
        local_34 = 1;
      }
      _objc_storeStrong(&local_20,0);
      return;
    }
  } while( true );
}

