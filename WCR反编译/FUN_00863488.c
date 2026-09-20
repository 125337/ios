// FUN_00863488 @ 00863488

long FUN_00863488(long *param_1,long param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_70;
  undefined8 local_58;
  undefined8 local_40;
  undefined8 local_28;
  
  if (param_3 - 1U < 2) {
    local_58 = *param_1;
    do {
      do {
        local_28 = *param_1;
        if (local_28 != local_58) break;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = local_58 + param_2;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      bVar2 = local_28 != local_58;
      local_58 = local_28;
    } while (bVar2);
  }
  else if (param_3 == 3) {
    local_70 = *param_1;
    do {
      do {
        local_28 = *param_1;
        if (local_28 != local_70) break;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = local_70 + param_2;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      bVar2 = local_28 != local_70;
      local_70 = local_28;
    } while (bVar2);
  }
  else if (param_3 == 4) {
    local_88 = *param_1;
    do {
      do {
        local_28 = *param_1;
        if (local_28 != local_88) break;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = local_88 + param_2;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      bVar2 = local_28 != local_88;
      local_88 = local_28;
    } while (bVar2);
  }
  else if (param_3 == 5) {
    local_a0 = *param_1;
    do {
      do {
        local_28 = *param_1;
        if (local_28 != local_a0) break;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = local_a0 + param_2;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      bVar2 = local_28 != local_a0;
      local_a0 = local_28;
    } while (bVar2);
  }
  else {
    local_40 = *param_1;
    do {
      do {
        local_28 = *param_1;
        if (local_28 != local_40) break;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = local_40 + param_2;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      bVar2 = local_28 != local_40;
      local_40 = local_28;
    } while (bVar2);
  }
  return local_28;
}

