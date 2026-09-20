// GIFDataByRemovingMetadata: @ 00f32fa4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID __thiscall
WCRefineEmoticonToolsHelper::GIFDataByRemovingMetadata_
          (WCRefineEmoticonToolsHelper *this,ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  double in_d0;
  undefined *local_238;
  uint local_22c;
  double local_1c8;
  undefined *local_138;
  double local_130;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  undefined *local_110;
  undefined *local_108;
  undefined *local_100;
  byte local_f1;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  int local_9c;
  undefined *local_98;
  SEL local_90;
  ID local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_98 = (undefined *)0x0;
  local_90 = param_2;
  local_88 = param_1;
  _objc_storeStrong(&local_98,param_3);
  puVar1 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    local_80 = (undefined *)0x0;
    local_9c = 1;
  }
  else {
    puVar1 = local_98;
    _CGImageSourceCreateWithData(local_98,0);
    local_a8 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_80 = (undefined *)0x0;
      local_9c = 1;
    }
    else {
      _CGImageSourceGetType();
      local_b0 = puVar1;
      if ((puVar1 == (undefined *)0x0) ||
         (_UTTypeConformsTo(puVar1,&cf_com_compuserve_gif), (int)puVar1 == 0)) {
        _CFRelease(local_a8);
        puVar1 = local_98;
        (*(code *)PTR__objc_retain_02578638)();
        local_80 = puVar1;
        local_9c = 1;
      }
      else {
        puVar1 = local_a8;
        _CGImageSourceGetCount();
        local_b8 = puVar1;
        if (puVar1 == (undefined *)0x0) {
          _CFRelease(local_a8);
          local_80 = (undefined *)0x0;
          local_9c = 1;
        }
        else {
          puVar1 = PTR__OBJC_CLASS___NSMutableData_026ce660;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableData_026ce660,PTR_s_data_0269d850);
          _objc_retainAutoreleasedReturnValue();
          local_c0 = puVar1;
          _CGImageDestinationCreateWithData(puVar1,&cf_com_compuserve_gif,local_b8,0);
          local_c8 = puVar1;
          if (puVar1 == (undefined *)0x0) {
            _CFRelease(local_a8);
            local_80 = (undefined *)0x0;
            local_9c = 1;
          }
          else {
            local_d0 = (undefined *)0x0;
            puVar1 = local_a8;
            _CGImageSourceCopyProperties(local_a8,0);
            local_e0 = puVar1;
            local_d8 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar1,PTR_s_objectForKeyedSubscript__0269d098,
                       *(undefined8 *)PTR__kCGImagePropertyGIFDictionary_02578448);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_e8 = puVar2;
            (*(code *)PTR__objc_release_02578630)(puVar1);
            puVar1 = local_e8;
            puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
            if ((((ulong)puVar1 & 1) != 0) &&
               (puVar1 = local_e8,
               (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_integerValue_026ca750),
               -1 < (long)puVar1)) {
              puVar1 = local_e8;
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_integerValue_026ca750);
              local_d0 = puVar1;
            }
            local_38 = *(undefined8 *)PTR__kCGImagePropertyGIFDictionary_02578448;
            local_48 = *(undefined8 *)PTR__kCGImagePropertyGIFLoopCount_02578450;
            puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,
                       local_d0);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_40 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_48);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_30 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
            _objc_retainAutoreleasedReturnValue();
            local_f0 = puVar3;
            (*(code *)PTR__objc_release_02578630)(puVar2);
            (*(code *)PTR__objc_release_02578630)(puVar1);
            _CGImageDestinationSetProperties(local_c8,local_f0);
            local_f1 = 1;
            for (local_100 = (undefined *)0x0; local_100 < local_b8; local_100 = local_100 + 1) {
              _objc_autoreleasePoolPush((long)local_100 - (long)local_b8);
              puVar1 = local_a8;
              _CGImageSourceCreateImageAtIndex(local_a8,local_100,0);
              local_108 = puVar1;
              if (puVar1 == (undefined *)0x0) {
                local_f1 = 0;
                local_9c = 2;
              }
              else {
                puVar1 = local_a8;
                _CGImageSourceCopyPropertiesAtIndex(local_a8,local_100,0);
                local_118 = puVar1;
                local_110 = puVar1;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar1,PTR_s_objectForKeyedSubscript__0269d098,
                           *(undefined8 *)PTR__kCGImagePropertyGIFDictionary_02578448);
                _objc_retainAutoreleasedReturnValue();
                local_120 = puVar1;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar1,PTR_s_objectForKeyedSubscript__0269d098,
                           *(undefined8 *)PTR__kCGImagePropertyGIFUnclampedDelayTime_02578458);
                _objc_retainAutoreleasedReturnValue();
                puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
                local_128 = puVar1;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
                if ((((ulong)puVar1 & 1) == 0) ||
                   ((*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_doubleValue_026ca608),
                   in_d0 <= 0.0)) {
                  puVar2 = local_120;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_120,PTR_s_objectForKeyedSubscript__0269d098,
                             *(undefined8 *)PTR__kCGImagePropertyGIFDelayTime_02578440);
                  _objc_retainAutoreleasedReturnValue();
                  puVar1 = local_128;
                  local_128 = puVar2;
                  (*(code *)PTR__objc_release_02578630)(puVar1);
                }
                puVar1 = local_128;
                puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
                if ((((ulong)puVar1 & 1) == 0) ||
                   ((*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_doubleValue_026ca608),
                   in_d0 <= 0.0)) {
                  local_1c8 = DAT_02323c68;
                }
                else {
                  (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_doubleValue_026ca608);
                  local_1c8 = in_d0;
                }
                local_130 = local_1c8;
                local_58 = *(undefined8 *)PTR__kCGImagePropertyGIFDictionary_02578448;
                local_78 = *(undefined8 *)PTR__kCGImagePropertyGIFDelayTime_02578440;
                puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1c8,PTR__OBJC_CLASS___NSNumber_026ce038,
                           PTR_s_numberWithDouble__0269d6d0);
                _objc_retainAutoreleasedReturnValue();
                local_70 = *(undefined8 *)PTR__kCGImagePropertyGIFUnclampedDelayTime_02578458;
                puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
                in_d0 = local_130;
                local_68 = puVar1;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
                _objc_retainAutoreleasedReturnValue();
                puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                local_60 = puVar2;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDictionary_026ce090,
                           PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_68,&local_78,2);
                _objc_retainAutoreleasedReturnValue();
                puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                local_50 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDictionary_026ce090,
                           PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_50,&local_58,1);
                _objc_retainAutoreleasedReturnValue();
                local_138 = puVar4;
                (*(code *)PTR__objc_release_02578630)(puVar3);
                (*(code *)PTR__objc_release_02578630)(puVar2);
                (*(code *)PTR__objc_release_02578630)(puVar1);
                _CGImageDestinationAddImage(local_c8,local_108,local_138);
                _CGImageRelease(local_108);
                _objc_storeStrong(&local_138);
                _objc_storeStrong(&local_128,0);
                _objc_storeStrong(&local_120,0);
                _objc_storeStrong(&local_118,0);
                local_9c = 0;
              }
              _objc_autoreleasePoolPop();
              if (local_9c != 0) break;
            }
            local_22c = 0;
            if ((local_f1 & 1) != 0) {
              puVar1 = local_c8;
              _CGImageDestinationFinalize();
              local_22c = (uint)puVar1;
            }
            _CFRelease(local_c8);
            _CFRelease(local_a8);
            if (((local_22c & 1) == 0) ||
               (puVar1 = local_c0,
               (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0),
               puVar1 == (undefined *)0x0)) {
              local_238 = (undefined *)0x0;
            }
            else {
              local_238 = local_c0;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_80 = local_238;
            local_9c = 1;
            _objc_storeStrong(&local_f0);
            _objc_storeStrong(&local_e8,0);
            _objc_storeStrong(&local_e0,0);
          }
          _objc_storeStrong(&local_c0,0);
        }
      }
    }
  }
  _objc_storeStrong(&local_98,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_80;
}

