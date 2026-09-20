// FUN_0095b294 @ 0095b294

byte FUN_0095b294(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong local_f0;
  ulong local_a0;
  ulong local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  ulong local_60;
  ulong local_58;
  undefined4 local_4c;
  ulong *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_48 = param_4;
  local_40 = param_3;
  local_38 = param_2;
  if (((local_30 == 0) || (param_2 == (undefined8 *)0x0)) || (param_3 == (undefined8 *)0x0)) {
    local_21 = 0;
    local_4c = 1;
  }
  else {
    uVar1 = local_30;
    FUN_0095ade0(0x40a0000000000000);
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar1;
    if (uVar1 == 0) {
      local_21 = 0;
      local_4c = 1;
    }
    else {
      _UIImagePNGRepresentation();
      _objc_retainAutoreleasedReturnValue();
      local_60 = uVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = &cf_png;
      uVar1 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      if ((uVar1 == 0) ||
         (uVar1 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
         0x800000 < uVar1)) {
        uVar2 = local_58;
        _UIImageJPEGRepresentation(0x3feb333333333333);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_60;
        local_60 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
        _objc_storeStrong(&local_68,&cf_jpg);
      }
      uVar1 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      if ((uVar1 == 0) ||
         (uVar1 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
         0x800000 < uVar1)) {
        local_21 = 0;
        local_4c = 1;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSUUID_026ce668;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0)
        ;
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_70 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_78 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf____thumb_jpg);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_78;
        local_80 = puVar4;
        FUN_0095c294();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_80;
        local_88 = puVar3;
        FUN_0095c294();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_88;
        local_90 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
        if ((puVar3 == (undefined *)0x0) ||
           (puVar3 = local_90, (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0)
           , puVar3 == (undefined *)0x0)) {
          local_21 = 0;
          local_4c = 1;
        }
        else {
          uVar1 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_writeToFile_atomically__0269f928,local_88,1);
          if ((uVar1 & 1) == 0) {
            local_21 = 0;
            local_4c = 1;
          }
          else {
            uVar1 = local_58;
            FUN_009525ec(0x407e000000000000);
            _objc_retainAutoreleasedReturnValue();
            local_f0 = uVar1;
            if (uVar1 == 0) {
              local_f0 = local_58;
            }
            local_98 = uVar1;
            _UIImageJPEGRepresentation(DAT_02323e70);
            _objc_retainAutoreleasedReturnValue();
            local_a0 = local_f0;
            (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
            if ((local_f0 == 0) ||
               (uVar1 = local_a0,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_a0,PTR_s_writeToFile_atomically__0269f928,local_90,1),
               puVar3 = local_78, (uVar1 & 1) == 0)) {
              puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(puVar3);
              local_21 = 0;
            }
            else {
              _objc_retainAutorelease();
              puVar4 = local_80;
              *local_38 = puVar3;
              _objc_retainAutorelease();
              *local_40 = puVar4;
              if (local_48 != (ulong *)0x0) {
                uVar1 = local_60;
                (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
                *local_48 = uVar1;
              }
              local_21 = 1;
            }
            local_4c = 1;
            _objc_storeStrong(&local_a0);
            _objc_storeStrong(&local_98,0);
          }
        }
        _objc_storeStrong(&local_90);
        _objc_storeStrong(&local_88,0);
        _objc_storeStrong(&local_80,0);
        _objc_storeStrong(&local_78,0);
        _objc_storeStrong(&local_70,0);
      }
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

