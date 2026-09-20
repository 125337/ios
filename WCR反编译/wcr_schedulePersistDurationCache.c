// wcr_schedulePersistDurationCache @ 015af3dc

/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackStore::wcr_schedulePersistDurationCache(ID param_1,SEL param_2)

{
  ID IVar1;
  dispatch_time_t dVar2;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  ID local_38;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isUIAccessActive_026b0c08);
  if ((param_1 & 1) == 0) {
    DAT_028e3b0a = 1;
  }
  else {
    DAT_028e3b0a = 1;
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_backgroundWorkGeneration_026b0c10);
    local_28 = IVar1;
    dVar2 = _dispatch_time(0,800000000);
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc0000000;
    local_4c = 0;
    local_48 = FUN_015af4b8;
    local_40 = &DAT_02581870;
    local_38 = local_28;
    local_30 = local_18;
    _dispatch_after(dVar2,DAT_028e3af0,&local_58);
  }
  return;
}

