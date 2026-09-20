// FUN_003e1624 @ 003e1624

void FUN_003e1624(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_38;
  ulong local_30;
  undefined8 local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  puVar3 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSBundle_026ce418;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSBundle_026ce418,PTR_s_mainBundle_026a0c28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (puVar3 == puVar1) {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_isEqualToString__0269ccc8,&cf_embedded_mobileprovision);
    if (((uVar2 & 1) == 0) &&
       ((uVar2 = local_30,
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_embedded)
        , (uVar2 & 1) == 0 ||
        (uVar2 = local_38,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_isEqualToString__0269ccc8,&cf_mobileprovision), (uVar2 & 1) == 0))
       )) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_Info_plist)
      ;
      if (((uVar2 & 1) == 0) &&
         ((uVar2 = local_30,
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_Info),
          (uVar2 & 1) == 0 ||
          (uVar2 = local_38,
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_plist),
          (uVar2 & 1) == 0)))) {
        puVar3 = local_20;
        (*DAT_028ca3a0)(local_20,local_28,local_30,local_38);
        _objc_retainAutoreleasedReturnValue();
        local_18 = puVar3;
      }
      else {
        FUN_003e3274(0x4014000000000000);
        puVar3 = local_20;
        (*DAT_028ca3a0)(local_20,local_28,&cf_siri,&cf_plist);
        _objc_retainAutoreleasedReturnValue();
        local_18 = puVar3;
      }
    }
    else {
      FUN_003e3274(0x4014000000000000);
      local_18 = (undefined *)0x0;
    }
  }
  else {
    puVar3 = local_20;
    (*DAT_028ca3a0)(local_20,local_28,local_30,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar3;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

