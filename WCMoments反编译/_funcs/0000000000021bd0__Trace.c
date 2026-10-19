// _Trace @0x21bd0

void _Trace(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong local_1c8;
  ulong local_1c0;
  undefined8 local_198;
  undefined *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  code *local_168;
  undefined *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_1);
  local_e8 = 0;
  _objc_storeStrong(&local_e8,param_2);
  _objc_msgSend_processInfo(&_OBJC_CLASS___NSProcessInfo,local_198);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar5 = _objc_msgSend_systemUptime(uVar2,local_198);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  local_f0 = uVar5;
  local_f8 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);
  _memset(auStack_140,0,0x40);
  uVar2 = (*(code *)PTR__objc_retain_00110460)(local_e8);
  local_1c0 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar2,local_198,auStack_140,auStack_a8,0x10);
  if (local_1c0 != 0) {
    lVar4 = *local_130;
    local_1c8 = 0;
    do {
      do {
        if (*local_130 - lVar4 != 0) {
          _objc_enumerationMutation(*local_130 - lVar4,uVar2);
        }
        local_100 = *(undefined8 *)(local_138 + local_1c8 * 8);
        _objc_msgSend_objectForKeyedSubscript_(local_e8,local_198,local_100);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        uVar3 = _objc_opt_class(&_OBJC_CLASS___NSNumber);
        uVar1 = _objc_opt_isKindOfClass(uVar5,uVar3);
        (*(code *)PTR__objc_release_00110458)(uVar5);
        if ((uVar1 & 1) != 0) {
          _objc_msgSend_objectForKeyedSubscript_(local_e8,local_198,local_100);
          uVar5 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_setObject_forKeyedSubscript_(local_f8,local_198,uVar5,local_100);
          (*(code *)PTR__objc_release_00110458)(uVar5);
        }
        local_1c8 = local_1c8 + 1;
      } while (local_1c8 < local_1c0);
      local_1c0 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar2,local_198,auStack_140,auStack_a8,0x10);
      local_1c8 = 0;
    } while (local_1c0 != 0);
  }
  (*(code *)PTR__objc_release_00110458)(uVar2);
  local_d8 = &cf_event;
  local_c0 = local_e0;
  local_d0 = &cf_uptime;
  _objc_msgSend_numberWithDouble_(local_f0,&_OBJC_CLASS___NSNumber,local_198);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_c8 = &cf_metrics;
  local_b8 = uVar2;
  uVar5 = _objc_msgSend_copy(local_f8,local_198);
  local_b0 = uVar5;
  _objc_msgSend_dictionaryWithObjects_forKeys_count_
            (&_OBJC_CLASS___NSDictionary,local_198,&local_c0,&local_d8,3);
  local_148 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar5);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _TraceQueue();
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_178 = PTR___NSConcreteStackBlock_001104f0;
  local_170 = 0xc2000000;
  local_16c = 0;
  local_168 = ___Trace_block_invoke;
  local_160 = &___block_descriptor_48_e8_32s40s_e5_v8__0l;
  local_158 = (*(code *)PTR__objc_retain_00110460)(local_e0);
  local_150 = (*(code *)PTR__objc_retain_00110460)(local_148);
  _dispatch_async(uVar2,&local_178);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

