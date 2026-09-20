// _WCRefineProfileBgHTMLSaveSnapshot @ 01cf499c

byte _WCRefineProfileBgHTMLSaveSnapshot
               (double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  undefined *local_d8;
  ulong local_d0;
  ulong local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  long local_90;
  ulong local_88;
  double local_80;
  undefined8 local_78;
  byte local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  long local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_88 = 0;
  local_80 = param_1;
  local_78 = param_2;
  _objc_storeStrong(&local_88,param_3);
  local_90 = 0;
  _objc_storeStrong(&local_90,param_4);
  local_98 = param_5;
  if ((local_88 == 0) ||
     (lVar1 = local_90, (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_69 = 0;
    local_9c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_size_026cab00);
    dVar8 = 1.0;
    local_b0 = param_1;
    local_a8 = param_2;
    if ((param_1 <= 1.0) ||
       (uVar2 = local_88, (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_size_026cab00),
       local_c0 = param_1, local_b8 = dVar8, dVar8 <= 1.0)) {
      local_69 = 0;
      local_9c = 1;
    }
    else {
      FUN_01cf4e84();
      _objc_retainAutoreleasedReturnValue();
      local_c8 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
      if (uVar2 == 0) {
        local_69 = 0;
        local_9c = 1;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        uVar4 = local_88;
        _UIImagePNGRepresentation();
        _objc_retainAutoreleasedReturnValue();
        local_d0 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
        uVar2 = local_d0;
        if (uVar4 == 0) {
          local_69 = 0;
          local_9c = 1;
        }
        else {
          FUN_01cf4934();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_writeToFile_atomically__0269f928,uVar4,1);
          (*(code *)PTR__objc_release_02578630)(uVar4);
          if ((uVar2 & 1) == 0) {
            local_69 = 0;
            local_9c = 1;
          }
          else {
            local_68 = &cf_signature;
            local_48 = local_90;
            local_60 = &cf_width;
            puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_80,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0
                      );
            _objc_retainAutoreleasedReturnValue();
            local_58 = &cf_height;
            puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
            local_40 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_78,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0
                      );
            _objc_retainAutoreleasedReturnValue();
            local_50 = &cf_style;
            puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
            local_38 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,
                       local_98);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_30 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_48,&local_68,4);
            _objc_retainAutoreleasedReturnValue();
            local_d8 = puVar7;
            (*(code *)PTR__objc_release_02578630)(puVar6);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            (*(code *)PTR__objc_release_02578630)();
            puVar3 = local_d8;
            FUN_01cf4670();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_writeToFile_atomically__0269f928,puVar5,1);
            local_69 = (byte)puVar3 & 1;
            (*(code *)PTR__objc_release_02578630)(puVar5);
            local_9c = 1;
            _objc_storeStrong(&local_d8,0);
          }
        }
        _objc_storeStrong(&local_d0,0);
      }
      _objc_storeStrong(&local_c8,0);
    }
  }
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_88,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_69 & 1;
}

