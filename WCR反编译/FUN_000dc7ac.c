// FUN_000dc7ac @ 000dc7ac

void FUN_000dc7ac(undefined8 param_1,byte param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined1 *puVar6;
  long local_2b8;
  long local_2b0;
  undefined4 local_210;
  undefined4 local_1e8;
  undefined *local_130;
  undefined4 local_128;
  undefined4 local_124;
  code *local_120;
  undefined *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined1 auStack_f0 [8];
  long local_e8;
  undefined1 *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 auStack_d0 [8];
  long local_c8;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  byte local_79;
  undefined1 *local_78;
  undefined4 local_70;
  byte local_69;
  undefined1 *local_68;
  undefined4 local_5c;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined4 local_40;
  byte local_29;
  undefined *local_28;
  
  local_28 = (undefined1 *)0x0;
  _objc_storeStrong(&local_28,param_1);
  puVar3 = local_28;
  local_29 = param_2;
  FUN_000dc544();
  if (((ulong)puVar3 & 1) == 0) {
    local_40 = 1;
  }
  else {
    puVar3 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028c8379);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (((ulong)puVar6 & 1) == 0) {
      puVar3 = local_28;
      _objc_getAssociatedObject(local_28,&DAT_028c837a);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if (((ulong)puVar6 & 1) == 0) {
        puVar3 = local_28;
        FUN_000dd52c();
        puVar6 = (undefined1 *)(ulong)local_29;
        local_48 = puVar3;
        if (((local_29 & 1) == 0) && (puVar6 = puVar3 + -0x14, &MACH_HEADER.sizeofcmds <= puVar3)) {
          local_40 = 1;
        }
        else {
          puVar3 = local_28;
          _objc_getAssociatedObject(puVar6,local_28,&DAT_028c837b);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          local_50 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
          if (((ulong)puVar3 & 1) == 0) {
            puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = local_50;
            local_50 = puVar3;
            (*(code *)PTR__objc_release_02578630)(puVar6);
            _objc_setAssociatedObject(local_28,&DAT_028c837b,local_50,1);
          }
          puVar3 = local_28;
          _objc_getAssociatedObject(local_28,&DAT_028c837c);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
          local_58 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
          if (((ulong)puVar3 & 1) == 0) {
            puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = local_58;
            local_58 = puVar3;
            (*(code *)PTR__objc_release_02578630)(puVar6);
            _objc_setAssociatedObject(local_28,&DAT_028c837c,local_58,1);
          }
          local_69 = 0;
          puVar3 = local_28;
          _objc_getAssociatedObject(local_28,&DAT_028c837d);
          _objc_retainAutoreleasedReturnValue();
          if (puVar3 == (undefined1 *)0x0) {
            local_1e8 = 0xffffffff;
          }
          else {
            puVar4 = local_28;
            _objc_getAssociatedObject(local_28,&DAT_028c837d);
            _objc_retainAutoreleasedReturnValue();
            local_69 = 1;
            local_68 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_1e8 = SUB84(puVar4,0);
          }
          if ((local_69 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_68);
          }
          (*(code *)PTR__objc_release_02578630)(puVar3);
          local_5c = local_1e8;
          local_79 = 0;
          puVar3 = local_28;
          _objc_getAssociatedObject(local_28,&DAT_028c837e);
          _objc_retainAutoreleasedReturnValue();
          if (puVar3 == (undefined1 *)0x0) {
            local_210 = 0xffffffff;
          }
          else {
            puVar4 = local_28;
            _objc_getAssociatedObject(local_28,&DAT_028c837e);
            _objc_retainAutoreleasedReturnValue();
            local_79 = 1;
            local_78 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_210 = SUB84(puVar4,0);
          }
          if ((local_79 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_78);
          }
          (*(code *)PTR__objc_release_02578630)(puVar3);
          local_70 = local_210;
          puVar3 = local_28;
          _objc_getAssociatedObject(local_28,&DAT_028c837f);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar3 = local_28;
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_88 = puVar6 + 1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
                     puVar6 + 1);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(puVar3,&DAT_028c837f,puVar4,1);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          puVar3 = local_28;
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(puVar3,&DAT_028c837a,puVar4,1);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          FUN_000dd800(local_28);
          puVar3 = local_28;
          FUN_000ddbf4();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_90 = puVar6;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar3 = local_28;
          FUN_000dde88();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_98 = puVar6;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar3 = local_28;
          _objc_getAssociatedObject(local_28,&DAT_028c8370);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = local_58;
          local_a0 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_copy_0269d150);
          if ((local_29 & 1) == 0) {
            local_b8 = 0x14 - (long)local_48;
            local_c0 = 1;
            local_2b8 = local_b8;
            if (local_b8 == 0) {
              local_2b8 = 1;
            }
            local_c8 = local_2b8;
            local_2b0 = local_2b8;
          }
          else {
            local_2b0 = 0x14;
          }
          local_b0 = local_2b0;
          local_a8 = puVar6;
          _objc_initWeak(auStack_d0,local_28);
          pcVar5 = &
                   cf__wcr__chat_member_search_file_loadstartcontroller__puser__dfrom__utime__uwant__luchat___mem___
          ;
          _NSLog();
          FUN_000de118();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = local_a8;
          local_130 = PTR___NSConcreteStackBlock_02578660;
          local_128 = 0xc2000000;
          local_124 = 0;
          local_120 = FUN_000de18c;
          local_118 = &DAT_0257a020;
          local_d8 = local_5c;
          local_d4 = local_70;
          (*(code *)PTR__objc_retain_02578638)();
          puVar2 = local_90;
          local_110 = puVar6;
          (*(code *)PTR__objc_retain_02578638)();
          puVar1 = local_98;
          local_108 = puVar2;
          (*(code *)PTR__objc_retain_02578638)();
          puVar6 = local_a0;
          local_100 = puVar1;
          local_e8 = local_b0;
          (*(code *)PTR__objc_retain_02578638)();
          local_f8 = puVar6;
          _objc_copyWeak();
          local_e0 = local_88;
          _dispatch_async(pcVar5,&local_130);
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          _objc_destroyWeak(auStack_f0);
          _objc_storeStrong(&local_f8);
          _objc_storeStrong(&local_100,0);
          _objc_storeStrong(&local_108,0);
          _objc_storeStrong(&local_110,0);
          _objc_destroyWeak(auStack_d0);
          _objc_storeStrong(&local_a8,0);
          _objc_storeStrong(&local_a0,0);
          _objc_storeStrong(&local_98,0);
          _objc_storeStrong(&local_90,0);
          _objc_storeStrong(&local_58,0);
          _objc_storeStrong(&local_50,0);
          local_40 = 0;
        }
      }
      else {
        local_40 = 1;
      }
    }
    else {
      local_40 = 1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

