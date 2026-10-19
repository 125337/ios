// _WCMYYCGImageCreateEncodedData @0x92da4

long _WCMYYCGImageCreateEncodedData(double param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_98;
  double local_80;
  double local_78;
  undefined8 local_68;
  long local_60;
  long local_58;
  long local_50;
  double local_48;
  long local_40;
  long local_38;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_00110518;
  local_40 = param_3;
  local_38 = param_2;
  if (param_2 == 0) {
    local_30 = 0;
    local_48 = param_1;
  }
  else {
    if (0.0 <= param_1) {
      local_80 = param_1;
      if (1.0 < param_1) {
        local_80 = 1.0;
      }
      local_78 = local_80;
    }
    else {
      local_78 = 0.0;
    }
    local_48 = local_78;
    if (param_3 + -9 == 0) {
      local_30 = 0;
    }
    else {
      local_50 = _WCMYYImageTypeToUTType(param_3 + -9,param_3);
      if (local_50 == 0) {
        local_30 = 0;
      }
      else {
        uVar1 = _CFAllocatorGetDefault();
        local_58 = _CFDataCreateMutable(uVar1,0);
        if (local_58 == 0) {
          local_30 = 0;
        }
        else {
          local_60 = _CGImageDestinationCreateWithData(local_58,local_50,1,0);
          if (local_60 == 0) {
            _CFRelease(local_58);
            local_30 = 0;
          }
          else {
            local_28 = *(undefined8 *)PTR__kCGImageDestinationLossyCompressionQuality_00110288;
            _objc_msgSend_numberWithDouble_(local_48,&_OBJC_CLASS___NSNumber,local_98);
            uVar1 = _objc_retainAutoreleasedReturnValue();
            local_20 = uVar1;
            _objc_msgSend_dictionaryWithObjects_forKeys_count_
                      (&_OBJC_CLASS___NSDictionary,local_98,&local_20,&local_28,1);
            local_68 = _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_00110458)(uVar1);
            _CGImageDestinationAddImage(local_60,local_38,local_68);
            uVar2 = _CGImageDestinationFinalize(local_60);
            if ((uVar2 & 1) == 0) {
              _CFRelease(local_58);
              _CFRelease(local_60);
              local_30 = 0;
            }
            else {
              _CFRelease(local_60);
              lVar3 = _CFDataGetLength(local_58);
              if (lVar3 == 0) {
                _CFRelease(local_58);
                local_30 = 0;
              }
              else {
                local_30 = local_58;
              }
            }
            _objc_storeStrong(&local_68,0);
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);
  }
  return local_30;
}

