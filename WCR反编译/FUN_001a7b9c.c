// FUN_001a7b9c @ 001a7b9c

void FUN_001a7b9c(double param_1,ulong param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *local_b0;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  long local_58;
  long local_50;
  undefined4 local_48;
  undefined1 local_43;
  byte local_42;
  byte local_41;
  double local_40;
  cfstringStruct *local_28;
  
  FUN_001a8008();
  if ((param_2 & 1) != 0) {
    pcVar1 = (cfstringStruct *)PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_getCurrentUserWxid_0269e148);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    FUN_001a81d4();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_b0 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_b0 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_b0;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    _CFAbsoluteTimeGetCurrent();
    local_40 = param_1;
    _os_unfair_lock_lock(&DAT_028c8a48);
    pcVar1 = DAT_028c89c8;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028c89c8,PTR_s_isEqualToString__0269ccc8,local_28);
    local_41 = ((byte)pcVar1 ^ 1) & 1;
    if (local_41 != 0) {
      pcVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_copy_0269d150);
      pcVar1 = DAT_028c89c8;
      DAT_028c89c8 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      _objc_storeStrong(&DAT_028c89b8,*(undefined8 *)PTR____NSDictionary0___02578288);
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = DAT_028c89c0;
      DAT_028c89c0 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      DAT_028c8a50 = 0.0;
    }
    local_42 = false;
    if (((local_41 & 1) == 0) && (local_42 = false, DAT_028c89b8 != 0)) {
      local_42 = local_40 - DAT_028c8a50 < 120.0;
    }
    pcVar1 = DAT_028c89d0;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028c89d0,PTR_s_isEqualToString__0269ccc8,local_28);
    local_43 = SUB81(pcVar1,0);
    if (((local_42 & 1) == 0) && (((ulong)pcVar1 & 1) == 0)) {
      pcVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_copy_0269d150);
      pcVar1 = DAT_028c89d0;
      DAT_028c89d0 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      DAT_028c8a58 = DAT_028c8a58 + 1;
      puVar5 = &DAT_028c8a48;
      local_50 = DAT_028c8a58;
      _os_unfair_lock_unlock();
      FUN_001a8370();
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_28;
      local_80 = PTR___NSConcreteStackBlock_02578660;
      local_78 = 0xc2000000;
      local_74 = 0;
      local_70 = FUN_001a83e4;
      local_68 = &DAT_025791c0;
      local_58 = local_50;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = pcVar1;
      _dispatch_async(puVar5,&local_80);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      _objc_storeStrong(&local_60,0);
      local_48 = 0;
    }
    else {
      _os_unfair_lock_unlock(&DAT_028c8a48);
      local_48 = 1;
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}

