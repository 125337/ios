// FUN_004e477c @ 004e477c

byte FUN_004e477c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_170;
  cfstringStruct *local_100;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58 [3];
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  byte local_21;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == (cfstringStruct *)0x0) {
    local_21 = 0;
    local_34 = 1;
  }
  else {
    pcVar2 = local_30;
    FUN_004e6ea4();
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_21 = 0;
      local_34 = 1;
    }
    else {
      FUN_004e7af0();
      _objc_retainAutoreleasedReturnValue();
      local_58[0] = pcVar2;
      FUN_004e890c();
      _objc_retainAutoreleasedReturnValue();
      local_60 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_hasSuffix__0269d018,&cf__chatroom);
      if (((ulong)pcVar2 & 1) == 0) {
        local_100 = &cf___;
      }
      else {
        local_100 = local_60;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = local_100;
      pcVar2 = local_30;
      FUN_004e7498();
      _objc_retainAutoreleasedReturnValue();
      local_78 = (cfstringStruct *)0x0;
      local_70 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
      if ((pcVar2 != (cfstringStruct *)0x0) &&
         (pcVar2 = local_70,
         (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_hasSuffix__0269d018,&cf__chatroom),
         ((ulong)pcVar2 & 1) == 0)) {
        pcVar2 = local_70;
        FUN_004e7f84();
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_78;
        local_78 = pcVar2;
        (*(code *)PTR__objc_release_02578630)();
        if (local_78 == (cfstringStruct *)0x0) {
          FUN_004e8ecc();
          _objc_retainAutoreleasedReturnValue();
          local_80 = pcVar3;
          FUN_004e890c();
          _objc_retainAutoreleasedReturnValue();
          local_88 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
          if ((pcVar3 != (cfstringStruct *)0x0) &&
             (pcVar2 = local_88,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_88,PTR_s_isEqualToString__0269ccc8,local_70), ((ulong)pcVar2 & 1) != 0
             )) {
            _objc_storeStrong(&local_78,local_80);
          }
          _objc_storeStrong(&local_88);
          _objc_storeStrong(&local_80,0);
        }
      }
      if (((local_78 == (cfstringStruct *)0x0) &&
          (pcVar2 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
          pcVar2 != (cfstringStruct *)0x0)) &&
         (pcVar2 = local_60,
         (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_hasSuffix__0269d018,&cf__chatroom),
         ((ulong)pcVar2 & 1) == 0)) {
        _objc_storeStrong(&local_78,local_58[0]);
        _objc_storeStrong(&local_70,local_60);
      }
      if (local_78 == (cfstringStruct *)0x0) {
        local_21 = 0;
        local_34 = 1;
      }
      else {
        pcVar2 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
        if (pcVar2 == (cfstringStruct *)0x0) {
          local_170 = &cf___;
        }
        else {
          local_170 = local_70;
        }
        (*(code *)PTR__objc_retain_02578638)();
        puVar4 = PTR___dispatch_main_q_02578680;
        local_90 = local_170;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_78;
        local_d8 = PTR___NSConcreteStackBlock_02578660;
        local_d0 = 0xc2000000;
        local_cc = 0;
        local_c8 = FUN_004e8f78;
        local_c0 = &DAT_0257a258;
        (*(code *)PTR__objc_retain_02578638)();
        pcVar1 = local_30;
        local_b8 = pcVar2;
        (*(code *)PTR__objc_retain_02578638)();
        pcVar3 = local_40;
        local_b0 = pcVar1;
        (*(code *)PTR__objc_retain_02578638)();
        pcVar2 = local_90;
        local_a8 = pcVar3;
        (*(code *)PTR__objc_retain_02578638)();
        pcVar3 = local_68;
        local_a0 = pcVar2;
        (*(code *)PTR__objc_retain_02578638)();
        local_98 = pcVar3;
        _dispatch_async(puVar4,&local_d8);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_21 = 1;
        local_34 = 1;
        _objc_storeStrong(&local_98);
        _objc_storeStrong(&local_a0,0);
        _objc_storeStrong(&local_a8,0);
        _objc_storeStrong(&local_b0,0);
        _objc_storeStrong(&local_b8,0);
        _objc_storeStrong(&local_90,0);
      }
      _objc_storeStrong(&local_78);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(local_58,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

