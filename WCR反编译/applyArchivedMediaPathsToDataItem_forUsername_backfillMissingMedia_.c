// applyArchivedMediaPathsToDataItem:forUsername:backfillMissingMedia: @ 010c7f74

/* Function Stack Size: 0x24 bytes */

void WCRefineMomentsMonitor::applyArchivedMediaPathsToDataItem_forUsername_backfillMissingMedia_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  undefined *puVar7;
  uint local_124;
  undefined *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  code *local_f8;
  undefined *local_f0;
  ulong local_e8;
  ID local_e0;
  long local_d8;
  ulong local_d0;
  ID local_c8;
  ID local_c0;
  ulong local_b8;
  long local_b0;
  ulong local_a8;
  ID local_a0;
  ulong local_98;
  ulong local_90;
  ID local_88;
  byte local_79;
  undefined *local_78;
  byte local_69;
  ID local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined4 local_48;
  byte local_41;
  long local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_41 = (byte)param_5;
  if ((local_38 == 0) ||
     (lVar1 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_48 = 1;
  }
  else {
    uVar2 = local_38;
    FUN_010b66f4();
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
    if (uVar2 == 0) {
      local_48 = 1;
    }
    else {
      uVar2 = local_38;
      FUN_010c86d4(local_38,&cf_contentObj);
      _objc_retainAutoreleasedReturnValue();
      local_58 = uVar2;
      if (uVar2 == 0) {
        uVar3 = local_38;
        FUN_010c86d4(local_38,&cf_content);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_58;
        local_58 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      uVar2 = local_58;
      FUN_010c86d4(local_58,&cf_mediaList);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_60 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      if (((uVar2 & 1) == 0) ||
         (uVar2 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0),
         uVar2 == 0)) {
        local_48 = 1;
      }
      else {
        IVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cacheRootPath_026ae668);
        _objc_retainAutoreleasedReturnValue();
        IVar6 = IVar5;
        FUN_010c881c();
        _objc_retainAutoreleasedReturnValue();
        local_68 = IVar6;
        (*(code *)PTR__objc_release_02578630)(IVar5);
        IVar5 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
        local_79 = 0;
        local_124 = 0;
        if (IVar5 != 0) {
          puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          local_79 = 1;
          local_78 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_124 = (uint)puVar4;
        }
        if ((local_79 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_78);
        }
        local_69 = (byte)local_124 & 1;
        if ((local_124 & 1) == 0) {
          if (((local_41 & 1) == 0) || (uVar2 = local_60, FUN_010c8ce4(), (long)uVar2 < 1)) {
            local_48 = 1;
          }
          else {
            uVar2 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_copy_0269d150);
            lVar1 = local_40;
            local_a8 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_copy_0269d150);
            uVar2 = local_38;
            local_b0 = lVar1;
            FUN_010b6fcc();
            _objc_retainAutoreleasedReturnValue();
            IVar5 = local_28;
            local_b8 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cacheRootPath_026ae668);
            _objc_retainAutoreleasedReturnValue();
            IVar6 = IVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_c0 = IVar6;
            (*(code *)PTR__objc_release_02578630)(IVar5);
            IVar6 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mediaCopyQueue_026ae670);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = local_b8;
            local_108 = PTR___NSConcreteStackBlock_02578660;
            local_100 = 0xc2000000;
            local_fc = 0;
            local_f8 = FUN_010c8f3c;
            local_f0 = &DAT_0257d718;
            local_c8 = IVar6;
            (*(code *)PTR__objc_retain_02578638)();
            IVar5 = local_c0;
            local_e8 = uVar2;
            (*(code *)PTR__objc_retain_02578638)();
            lVar1 = local_b0;
            local_e0 = IVar5;
            (*(code *)PTR__objc_retain_02578638)();
            uVar2 = local_a8;
            local_d8 = lVar1;
            (*(code *)PTR__objc_retain_02578638)();
            local_d0 = uVar2;
            _dispatch_async(IVar6,&local_108);
            _objc_storeStrong(&local_d0);
            _objc_storeStrong(&local_d8,0);
            _objc_storeStrong(&local_e0,0);
            _objc_storeStrong(&local_e8,0);
            _objc_storeStrong(&local_c8,0);
            _objc_storeStrong(&local_c0,0);
            _objc_storeStrong(&local_b8,0);
            _objc_storeStrong(&local_b0,0);
            _objc_storeStrong(&local_a8,0);
            local_48 = 0;
          }
        }
        else {
          IVar5 = local_68;
          FUN_010bced8();
          _objc_retainAutoreleasedReturnValue();
          local_88 = IVar5;
          for (local_90 = 0; uVar2 = local_90, uVar3 = local_60,
              (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0), uVar2 < uVar3;
              local_90 = local_90 + 1) {
            uVar2 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_60,PTR_s_objectAtIndexedSubscript__0269cc78,local_90);
            _objc_retainAutoreleasedReturnValue();
            IVar5 = local_88;
            local_98 = uVar2;
            if (uVar2 == 0) {
              local_48 = 4;
            }
            else {
              puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,
                         PTR_s_numberWithUnsignedInteger__0269e4d0,local_90);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_objectForKeyedSubscript__0269d098);
              _objc_retainAutoreleasedReturnValue();
              local_a0 = IVar5;
              (*(code *)PTR__objc_release_02578630)(puVar7);
              (*(code *)PTR__objc_release_02578630)(puVar4);
              FUN_010c894c(local_98,local_a0);
              _objc_storeStrong(&local_a0,0);
              local_48 = 0;
            }
            _objc_storeStrong(&local_98,0);
          }
          local_48 = 1;
          _objc_storeStrong(&local_88,0);
        }
        _objc_storeStrong(&local_68,0);
      }
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

