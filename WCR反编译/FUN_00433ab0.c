// FUN_00433ab0 @ 00433ab0

void FUN_00433ab0(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  long *local_50;
  long *local_48;
  long local_40;
  long local_38;
  undefined4 local_30;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_18 = 0;
    local_30 = 1;
  }
  else {
    local_50 = &local_38;
    local_38 = 0;
    local_48 = &local_40;
    local_40 = 0;
    local_70 = PTR___NSConcreteGlobalBlock_02578658;
    local_68 = 0xd0800000;
    local_64 = 0;
    local_60 = FUN_00433d7c;
    local_58 = &DAT_0257bbc8;
    _dispatch_sync(DAT_028ca828,&local_70);
    lVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if ((lVar3 == 0) ||
       ((uVar2 = local_20,
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_alllevel)
        , (uVar2 & 1) == 0 &&
        (uVar2 = local_20,
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_webLevel)
        , (uVar2 & 1) == 0)))) {
      lVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      if ((lVar3 == 0) ||
         (uVar2 = local_20,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_20,PTR_s_isEqualToString__0269ccc8,&cf_chatLevel), local_18 = local_40,
         (uVar2 & 1) == 0)) {
        local_18 = 0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
      }
    }
    else {
      lVar3 = local_38;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = lVar3;
    }
    local_30 = 1;
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

