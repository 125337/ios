// FUN_0113b0b8 @ 0113b0b8

byte FUN_0113b0b8(undefined8 param_1,uint param_2,uint param_3)

{
  long lVar1;
  code *pcVar2;
  int local_b4;
  int local_a4;
  int local_94;
  int local_7c;
  long local_40;
  bool local_31;
  code *local_30;
  code *local_28;
  code *local_20;
  code *local_18;
  
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  lVar1 = local_40;
  FUN_0113a5d8();
  if ((param_2 & 1) == 0) {
    if (lVar1 == 0) {
      if ((param_3 & 1) == 0) {
        local_31 = true;
      }
      else {
        pcVar2 = (code *)&DAT_028e68c8;
        _os_unfair_lock_lock();
        if (DAT_028e68f1 == '\0') {
          _os_unfair_lock_unlock();
          FUN_009defac();
          pcVar2 = (code *)&DAT_028e68c8;
          _os_unfair_lock_lock();
        }
        FUN_0113b72c();
        local_20 = pcVar2;
        if (pcVar2 != (code *)0x0) {
          FUN_0113b7e4(pcVar2);
        }
        local_94 = 0x28e68c8;
        _os_unfair_lock_unlock();
        if (local_20 == (code *)0x0) {
          local_94 = 0;
        }
        else {
          (*local_20)();
        }
        local_31 = local_94 != 0;
      }
    }
    else if (lVar1 == 1) {
      local_31 = false;
    }
    else if (lVar1 == 2) {
      local_31 = true;
    }
    else if (lVar1 == 3) {
      pcVar2 = (code *)&DAT_028e68c8;
      _os_unfair_lock_lock(0);
      if (DAT_028e68f1 == '\0') {
        _os_unfair_lock_unlock();
        FUN_009defac();
        pcVar2 = (code *)&DAT_028e68c8;
        _os_unfair_lock_lock();
      }
      FUN_0113b72c();
      local_28 = pcVar2;
      if (pcVar2 != (code *)0x0) {
        FUN_0113b7e4(pcVar2);
      }
      local_a4 = 0x28e68c8;
      _os_unfair_lock_unlock();
      if (local_28 == (code *)0x0) {
        local_a4 = 0;
      }
      else {
        (*local_28)();
      }
      local_31 = local_a4 != 0;
    }
    else if (lVar1 == 4) {
      FUN_00966a44(0);
      local_31 = (bool)((byte)lVar1 & 1);
    }
    else if (lVar1 == 5) {
      FUN_009724d8(0);
      local_31 = (bool)((byte)lVar1 & 1);
    }
    else if ((param_3 & 1) == 0) {
      local_31 = true;
    }
    else {
      pcVar2 = (code *)&DAT_028e68c8;
      _os_unfair_lock_lock();
      if (DAT_028e68f1 == '\0') {
        _os_unfair_lock_unlock();
        FUN_009defac();
        pcVar2 = (code *)&DAT_028e68c8;
        _os_unfair_lock_lock();
      }
      FUN_0113b72c();
      local_30 = pcVar2;
      if (pcVar2 != (code *)0x0) {
        FUN_0113b7e4(pcVar2);
      }
      local_b4 = 0x28e68c8;
      _os_unfair_lock_unlock();
      if (local_30 == (code *)0x0) {
        local_b4 = 0;
      }
      else {
        (*local_30)();
      }
      local_31 = local_b4 != 0;
    }
  }
  else if (lVar1 == 1) {
    local_31 = false;
  }
  else if (lVar1 == 2) {
    local_31 = true;
  }
  else if (lVar1 == 3) {
    pcVar2 = (code *)&DAT_028e68c8;
    _os_unfair_lock_lock(0);
    if (DAT_028e68f1 == '\0') {
      _os_unfair_lock_unlock();
      FUN_009defac();
      pcVar2 = (code *)&DAT_028e68c8;
      _os_unfair_lock_lock();
    }
    FUN_0113b72c();
    local_18 = pcVar2;
    if (pcVar2 != (code *)0x0) {
      FUN_0113b7e4(pcVar2);
    }
    local_7c = 0x28e68c8;
    _os_unfair_lock_unlock();
    if (local_18 == (code *)0x0) {
      local_7c = 0;
    }
    else {
      (*local_18)();
    }
    local_31 = local_7c != 0;
  }
  else {
    FUN_00966a44();
    local_31 = (bool)((byte)lVar1 & 1);
  }
  _objc_storeStrong(&local_40,0);
  return local_31 & 1;
}

