// FUN_002f9754 @ 002f9754

void FUN_002f9754(double param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  ulong local_60;
  ulong local_58;
  double local_50;
  uint local_44;
  double local_40;
  ulong local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = param_1;
  if (local_38 == 0) {
    local_44 = 1;
  }
  else {
    FUN_002fb040();
    local_50 = param_1;
    FUN_002fb088(local_40,local_38);
    if (local_40 <= DAT_02323d38) {
      local_44 = 1;
    }
    else {
      uVar1 = local_38;
      FUN_002fb274();
      _objc_retainAutoreleasedReturnValue();
      local_58 = uVar1;
      if (uVar1 == 0) {
        local_44 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        FUN_002fb4a8(local_50);
        (*(code *)PTR__objc_release_02578630)(uVar1);
        if ((uVar2 & 1) == 0) {
          uVar1 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_valueForKey__0269d128,&cf_backdropLayer);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___CALayer_026ce240;
          local_60 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___CALayer_026ce240,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((uVar1 & 1) == 0) || (uVar1 = local_60, FUN_002fb4a8(local_50), (uVar1 & 1) == 0)) {
            local_44 = 0;
          }
          else {
            local_44 = 1;
          }
          _objc_storeStrong(&local_60,0);
          if (local_44 == 0) {
            pcVar4 = &cf_CAFilter;
            _NSClassFromString();
            pcVar5 = &cf_filterWithType_;
            local_80 = pcVar4;
            _NSSelectorFromString();
            local_88 = pcVar5;
            if ((local_80 == (cfstringStruct *)0x0) ||
               (pcVar4 = local_80,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_80,PTR_s_respondsToSelector__026ca818,pcVar5),
               ((ulong)pcVar4 & 1) == 0)) {
              local_44 = 1;
            }
            else {
              pcVar4 = local_80;
              (*(code *)PTR__objc_msgSend_02578628)(local_80,local_88,&cf_gaussianBlur);
              _objc_retainAutoreleasedReturnValue();
              local_90 = pcVar4;
              if (pcVar4 != (cfstringStruct *)0x0) {
                puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_50,PTR__OBJC_CLASS___NSNumber_026ce038,
                           PTR_s_numberWithDouble__0269d6d0);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar4,PTR_s_setValue_forKey__0269d300,puVar3,&cf_inputRadius);
                (*(code *)PTR__objc_release_02578630)(puVar3);
                local_30 = local_90;
                puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70
                           ,&local_30,1);
                _objc_retainAutoreleasedReturnValue();
                uVar1 = local_58;
                (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_layer_026ca788);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(uVar1);
                (*(code *)PTR__objc_release_02578630)(puVar3);
              }
              local_44 = (uint)(pcVar4 == (cfstringStruct *)0x0);
              _objc_storeStrong(&local_90,0);
              if (local_44 == 0) {
                local_44 = 0;
              }
            }
          }
        }
        else {
          local_44 = 1;
        }
      }
      _objc_storeStrong(&local_58,0);
    }
  }
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

