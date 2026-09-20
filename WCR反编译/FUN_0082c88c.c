// FUN_0082c88c @ 0082c88c

void FUN_0082c88c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *local_1e8;
  undefined *local_e0;
  undefined *local_d0;
  undefined *local_c0;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined *local_78;
  undefined8 local_70;
  ulong local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_68 = 0;
  _objc_storeStrong(&local_68,param_2);
  puVar1 = PTR__OBJC_CLASS___NSData_026ce1d0;
  local_70 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile_options_e_026a09f0,
             local_68,1,0);
  _objc_retainAutoreleasedReturnValue();
  local_78 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    local_60 = (undefined *)0x0;
    local_88 = 1;
  }
  else {
    uVar2 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((uVar4 & 1) == 0) {
      puVar5 = local_78;
      _CGImageSourceCreateWithData(local_78,0);
      puVar6 = local_78;
      puVar1 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      local_90 = puVar5;
      if (puVar5 == (undefined *)0x0) {
        puVar5 = PTR__OBJC_CLASS___UIScreen_026cdf70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)
                  (param_1,puVar1,PTR_s_imageWithData_scale__026a8c78,puVar6);
        _objc_retainAutoreleasedReturnValue();
        local_60 = puVar1;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        local_88 = 1;
      }
      else {
        local_58 = *(undefined8 *)PTR__kCGImageSourceCreateThumbnailFromImageAlways_02578470;
        puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        local_50 = *(undefined8 *)PTR__kCGImageSourceCreateThumbnailWithTransform_02578478;
        puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_40 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        local_48 = *(undefined8 *)PTR__kCGImageSourceThumbnailMaxPixelSize_02578490;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        uVar8 = local_70;
        local_38 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_30 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_58,3);
        _objc_retainAutoreleasedReturnValue();
        local_98 = puVar7;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        puVar6 = local_90;
        _CGImageSourceCreateThumbnailAtIndex(local_90,0,local_98);
        puVar1 = local_78;
        local_1e8 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        local_a0 = puVar6;
        if (puVar6 == (undefined *)0x0) {
          local_d0 = PTR__OBJC_CLASS___UIScreen_026cdf70;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar8,local_1e8,PTR_s_imageWithData_scale__026a8c78,puVar1);
          _objc_retainAutoreleasedReturnValue();
          local_e0 = local_1e8;
        }
        else {
          local_b0 = PTR__OBJC_CLASS___UIScreen_026cdf70;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar8,local_1e8,PTR_s_imageWithCGImage_scale_orientati_0269ebf0,puVar6,0);
          _objc_retainAutoreleasedReturnValue();
          local_c0 = local_1e8;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_a8 = local_1e8;
        if (puVar6 == (undefined *)0x0) {
          (*(code *)PTR__objc_release_02578630)(local_e0);
          (*(code *)PTR__objc_release_02578630)(local_d0);
        }
        else {
          (*(code *)PTR__objc_release_02578630)(local_c0);
          (*(code *)PTR__objc_release_02578630)(local_b0);
        }
        if (local_a0 != (undefined *)0x0) {
          _CGImageRelease(local_a0);
        }
        _CFRelease(local_90);
        puVar1 = local_a8;
        (*(code *)PTR__objc_retain_02578638)();
        local_60 = puVar1;
        local_88 = 1;
        _objc_storeStrong(&local_a8);
        _objc_storeStrong(&local_98,0);
      }
    }
    else {
      puVar1 = local_78;
      FUN_00837a44(local_70);
      _objc_retainAutoreleasedReturnValue();
      local_88 = 1;
      local_60 = puVar1;
    }
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_68,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_60);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

