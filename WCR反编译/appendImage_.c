// appendImage: @ 0095a294

/* Function Stack Size: 0x18 bytes */

void WCRClipboardHistoryStore::appendImage_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  cfstringStruct *local_268;
  cfstringStruct *local_258;
  undefined *local_1f0;
  undefined *local_1a0;
  undefined *local_160;
  ulong local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  undefined *local_110;
  undefined *local_108;
  long local_100;
  long local_f8;
  byte local_e9;
  undefined *local_e8;
  undefined *local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  int local_b4;
  ulong local_b0;
  SEL local_a8;
  undefined *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  undefined *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  local_a8 = param_2;
  local_a0 = (undefined *)param_1;
  _objc_storeStrong(&local_b0,param_3);
  if (local_b0 == 0) {
    local_b4 = 1;
  }
  else {
    uVar2 = local_b0;
    FUN_0095ade0(0x40a0000000000000);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = uVar2;
    if (uVar2 == 0) {
      local_b4 = 1;
    }
    else {
      _UIImagePNGRepresentation();
      _objc_retainAutoreleasedReturnValue();
      local_c8 = uVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_d0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
      if ((uVar2 == 0) ||
         (uVar2 = local_d0, (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0),
         0x800000 < uVar2)) {
        uVar3 = local_c0;
        _UIImageJPEGRepresentation(0x3feb333333333333);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_d0;
        local_d0 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      uVar2 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
      if ((uVar2 == 0) ||
         (uVar3 = local_d0, (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0),
         uVar2 = local_c0, 0x800000 < uVar3)) {
        local_b4 = 1;
      }
      else {
        uVar3 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
        FUN_0095a110(uVar2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_a0;
        local_d8 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_lastCapturedText_026aab78);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isEqualToString__0269ccc8);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        if ((uVar2 & 1) == 0) {
          puVar4 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_items_0269e4b0);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_e9 = 0;
          local_1a0 = puVar5;
          if (puVar5 == (undefined *)0x0) {
            local_1a0 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
            _objc_retainAutoreleasedReturnValue();
            local_e8 = local_1a0;
          }
          local_e9 = puVar5 == (undefined *)0x0;
          (*(code *)PTR__objc_retain_02578638)();
          local_e0 = local_1a0;
          if ((local_e9 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_e8);
          }
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          local_f8 = 0x7fffffffffffffff;
          for (local_100 = 0; lVar1 = local_100, puVar4 = local_e0,
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0),
              lVar1 < (long)puVar4; local_100 = local_100 + 1) {
            puVar4 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_objectAtIndexedSubscript__0269cc78,local_100);
            _objc_retainAutoreleasedReturnValue();
            local_108 = puVar4;
            FUN_009463a8();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar4);
            if (((ulong)puVar5 & 1) == 0) {
              local_b4 = 4;
            }
            else {
              puVar4 = PTR_WCRClipboardHistoryStore_026ce680;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRClipboardHistoryStore_026ce680,PTR_s_imageForItem__026aa848,
                         local_108);
              _objc_retainAutoreleasedReturnValue();
              local_110 = puVar4;
              if (puVar4 == (undefined *)0x0) {
                local_b4 = 4;
              }
              else {
                puVar5 = local_a0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_a0,PTR_s_fingerprintForImageItem_image__026aaba0,local_108,puVar4);
                _objc_retainAutoreleasedReturnValue();
                local_118 = puVar5;
                (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_length_0269cca0);
                if ((puVar5 == (undefined *)0x0) ||
                   (puVar4 = local_118,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_118,PTR_s_isEqualToString__0269ccc8,local_d8),
                   ((ulong)puVar4 & 1) == 0)) {
                  local_b4 = 0;
                }
                else {
                  local_f8 = local_100;
                  local_b4 = 2;
                }
                _objc_storeStrong(&local_118,0);
              }
              _objc_storeStrong(&local_110,0);
            }
            _objc_storeStrong(&local_108,0);
            if ((local_b4 != 0) && (local_b4 == 2)) break;
          }
          if (local_f8 == 0x7fffffffffffffff) {
            local_130 = (cfstringStruct *)0x0;
            local_138 = (cfstringStruct *)0x0;
            local_140 = 0;
            local_148 = 0;
            local_150 = 0;
            uVar2 = local_b0;
            FUN_0095b294(local_b0,&local_148,&local_150,&local_140);
            _objc_storeStrong(&local_130,local_148);
            _objc_storeStrong(&local_138,local_150);
            if ((uVar2 & 1) == 0) {
              local_b4 = 1;
            }
            else {
              uVar2 = local_c0;
              FUN_0095a110(local_c0,local_140);
              _objc_retainAutoreleasedReturnValue();
              local_98 = &cf_id;
              puVar5 = PTR__OBJC_CLASS___NSUUID_026ce668;
              local_158 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar5;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
              local_90 = &cf_type;
              local_58 = &cf_image;
              local_88 = &cf_text;
              local_50 = &::cf___;
              local_80 = &cf_time;
              puVar7 = PTR__OBJC_CLASS___NSDate_026cdf88;
              local_60 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberWithDouble__0269d6d0);
              _objc_retainAutoreleasedReturnValue();
              local_78 = &cf_pinned;
              puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
              local_48 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
              _objc_retainAutoreleasedReturnValue();
              local_70 = &cf_imagePath;
              if (local_130 == (cfstringStruct *)0x0) {
                local_258 = &::cf___;
              }
              else {
                local_258 = local_130;
              }
              local_38 = local_258;
              local_68 = &cf_thumbPath;
              if (local_138 == (cfstringStruct *)0x0) {
                local_268 = &::cf___;
              }
              else {
                local_268 = local_138;
              }
              local_30 = local_268;
              puVar9 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              local_40 = puVar8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,
                         PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_60,&local_98,7);
              _objc_retainAutoreleasedReturnValue();
              local_160 = puVar9;
              (*(code *)PTR__objc_release_02578630)(puVar8);
              (*(code *)PTR__objc_release_02578630)(puVar4);
              (*(code *)PTR__objc_release_02578630)(puVar7);
              (*(code *)PTR__objc_release_02578630)(puVar6);
              (*(code *)PTR__objc_release_02578630)(puVar5);
              puVar5 = local_e0;
              puVar4 = local_160;
              puVar6 = local_e0;
              FUN_00959544(local_e0);
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar5,PTR_s_insertObject_atIndex__0269eac0,puVar4,puVar6);
              FUN_0095963c(local_e0);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_a0,PTR_s_setLastCapturedText__026aab98,local_158);
              (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setItems__026a17a8,local_e0);
              _objc_storeStrong(&local_160);
              _objc_storeStrong(&local_158,0);
              local_b4 = 0;
            }
            _objc_storeStrong(&local_138);
            _objc_storeStrong(&local_130,0);
          }
          else {
            puVar4 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_objectAtIndexedSubscript__0269cc78,local_f8);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_120 = puVar5;
            (*(code *)PTR__objc_release_02578630)(puVar4);
            puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
            puVar5 = PTR__OBJC_CLASS___NSDate_026cdf88;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberWithDouble__0269d6d0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_120,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,&cf_time);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_removeObjectAtIndex__0269d530,local_f8);
            puVar4 = local_120;
            FUN_009464dc();
            if (((ulong)puVar4 & 1) == 0) {
              local_1f0 = local_e0;
              FUN_00959544();
            }
            else {
              local_1f0 = (undefined *)0x0;
            }
            local_128 = local_1f0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_insertObject_atIndex__0269eac0,local_120,local_1f0);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_a0,PTR_s_setLastCapturedText__026aab98,local_d8);
            (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setItems__026a17a8,local_e0);
            local_b4 = 1;
            _objc_storeStrong(&local_120,0);
          }
          _objc_storeStrong(&local_e0,0);
        }
        else {
          local_b4 = 1;
        }
        _objc_storeStrong(&local_d8,0);
      }
      _objc_storeStrong(&local_d0);
      _objc_storeStrong(&local_c8,0);
    }
    _objc_storeStrong(&local_c0,0);
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

