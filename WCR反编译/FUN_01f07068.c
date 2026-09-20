// FUN_01f07068 @ 01f07068

void FUN_01f07068(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_268;
  undefined *local_260;
  ulong local_1d0;
  undefined *local_1c8;
  undefined1 auStack_1c0 [8];
  long local_1b8;
  long *local_1b0;
  ulong local_180;
  ulong local_178;
  undefined *local_170;
  ulong local_168;
  long local_160;
  ulong local_158;
  long local_150;
  undefined *local_148;
  ulong local_140;
  undefined *local_138;
  ulong local_130;
  ulong local_128 [3];
  ulong local_110;
  ulong local_108;
  undefined *local_100;
  undefined4 local_f4;
  ulong local_f0;
  long local_e8;
  long local_e0;
  ulong local_d8;
  cfstringStruct *local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_1);
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_2);
  local_e8 = 0;
  _objc_storeStrong(&local_e8,param_3);
  local_f0 = 0;
  _objc_storeStrong(&local_f0,param_4);
  uVar6 = local_d8;
  FUN_01f07a70();
  uVar2 = local_f0;
  if ((uVar6 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = &cf___;
    local_f4 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((uVar2 & 1) == 0) ||
       (uVar2 = local_f0,
       (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_hasPrefix__0269d320,&cf_data_),
       (uVar2 & 1) == 0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_d0 = &cf___;
      local_f4 = 1;
    }
    else {
      uVar2 = local_f0;
      puVar1 = PTR_s_rangeOfString__0269d838;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_rangeOfString__0269d838,&cf__);
      local_108 = uVar2;
      local_100 = puVar1;
      if ((uVar2 == 0x7fffffffffffffff) || (uVar2 < 6)) {
        (*(code *)PTR__objc_retain_02578638)();
        local_d0 = &cf___;
        local_f4 = 1;
      }
      else {
        local_128[2] = uVar2 - 5;
        local_c0 = 5;
        local_b8 = 5;
        local_128[1] = 5;
        uVar2 = local_f0;
        local_c8 = local_128[2];
        local_b0 = local_128[2];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f0,PTR_s_substringWithRange__0269d138,5,local_128[2]);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = local_f0;
        local_110 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f0,PTR_s_substringFromIndex__0269d120,local_108 + 1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_110;
        local_128[0] = uVar6;
        (*(code *)PTR__objc_retain_02578638)();
        local_130 = uVar2;
        uVar2 = local_110;
        puVar1 = PTR_s_rangeOfString__0269d838;
        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_rangeOfString__0269d838,&cf__);
        local_140 = uVar2;
        local_138 = puVar1;
        if (uVar2 != 0x7fffffffffffffff) {
          uVar6 = local_110;
          (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_substringToIndex__0269d6c0,uVar2);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_130;
          local_130 = uVar6;
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
        puVar1 = PTR__OBJC_CLASS___NSData_026ce1d0;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_148 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
        if (puVar1 == (undefined *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_d0 = &cf___;
          local_f4 = 1;
        }
        else {
          lVar5 = local_e0;
          FUN_01f06ca8();
          _objc_retainAutoreleasedReturnValue();
          local_150 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
          if (lVar5 == 0) {
            _objc_storeStrong(&local_150,&cf__);
          }
          uVar2 = local_d8;
          FUN_01f06ca8();
          _objc_retainAutoreleasedReturnValue();
          local_158 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
          if (uVar2 == 0) {
            FUN_01f01544();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = local_158;
            local_158 = uVar2;
            (*(code *)PTR__objc_release_02578630)(uVar6);
          }
          lVar5 = local_e8;
          FUN_01f06ca8();
          _objc_retainAutoreleasedReturnValue();
          local_160 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
          if (lVar5 == 0) {
            _objc_storeStrong(&local_160,&cf_asset);
          }
          uVar2 = local_130;
          FUN_01f0ff40();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          local_168 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_158;
          local_170 = puVar1;
          FUN_01f0f4dc();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_178 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar6);
          (*(code *)PTR__objc_release_02578630)(uVar2);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_170,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_178,1,0);
          _memset(auStack_1c0,0,0x40);
          puVar1 = local_170;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_170,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_178,0);
          _objc_retainAutoreleasedReturnValue();
          local_260 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_260 != (undefined *)0x0) {
            lVar5 = *local_1b0;
            local_268 = (undefined *)0x0;
            do {
              do {
                if (*local_1b0 - lVar5 != 0) {
                  _objc_enumerationMutation(*local_1b0 - lVar5,puVar1);
                }
                uVar6 = *(ulong *)(local_1b8 + (long)local_268 * 8);
                local_180 = uVar6;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar6,PTR_s_stringByDeletingPathExtension_0269fd18);
                _objc_retainAutoreleasedReturnValue();
                uVar2 = uVar6;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(uVar6);
                puVar4 = local_170;
                if ((uVar2 & 1) != 0) {
                  uVar2 = local_178;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_178,PTR_s_stringByAppendingPathComponent__026cab30,local_180);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar4,PTR_s_removeItemAtPath_error__0269f910,uVar2,0);
                  (*(code *)PTR__objc_release_02578630)(uVar2);
                }
                local_268 = local_268 + 1;
              } while (local_268 < local_260);
              local_260 = puVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,
                         auStack_a8,0x10);
              local_268 = (undefined *)0x0;
            } while (local_260 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar1);
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______)
          ;
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_178;
          local_1c8 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_178,PTR_s_stringByAppendingPathComponent__026cab30,puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = local_148;
          local_1d0 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_148,PTR_s_writeToFile_atomically__0269f928,uVar2,1);
          local_d0 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          if (((ulong)puVar1 & 1) == 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_d0 = &cf___;
          }
          else {
            puVar1 = PTR__OBJC_CLASS___NSUUID_026ce668;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d0,PTR_s_stringWithFormat__0269cca8,&cf_wcrasset____________);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_02578630)(puVar4);
            (*(code *)PTR__objc_release_02578630)(puVar1);
          }
          local_f4 = 1;
          _objc_storeStrong(&local_1d0);
          _objc_storeStrong(&local_1c8,0);
          _objc_storeStrong(&local_178,0);
          _objc_storeStrong(&local_170,0);
          _objc_storeStrong(&local_168,0);
          _objc_storeStrong(&local_160,0);
          _objc_storeStrong(&local_158,0);
          _objc_storeStrong(&local_150,0);
        }
        _objc_storeStrong(&local_148);
        _objc_storeStrong(&local_130,0);
        _objc_storeStrong(local_128,0);
        _objc_storeStrong(&local_110,0);
      }
    }
  }
  _objc_storeStrong(&local_f0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_d0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

