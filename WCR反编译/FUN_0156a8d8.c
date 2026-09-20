// FUN_0156a8d8 @ 0156a8d8

byte FUN_0156a8d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  FUN_0156ac38();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_38;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_isEqualToString__0269ccc8,_WCRefineProfileCardActionIDStar);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_isEqualToString__0269ccc8,_WCRefineProfileCardActionIDTop);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_isEqualToString__0269ccc8,_WCRefineProfileCardActionIDMute);
        if ((uVar1 & 1) == 0) {
          uVar1 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_isEqualToString__0269ccc8,
                     _WCRefineProfileCardActionIDMessageBlock);
          puVar3 = PTR_WCRefineMessageBlockSupport_026ce0f8;
          if ((uVar1 & 1) == 0) {
            local_11 = 0;
          }
          else {
            uVar4 = local_20;
            FUN_01528d34();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = DAT_028e3900;
            FUN_01528c84();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = local_20;
            FUN_01564574(local_20);
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_isEnabledForUserName_groupContex_026b06b8,uVar4,uVar5,uVar6);
            local_11 = (byte)puVar3 & 1;
            (*(code *)PTR__objc_release_02578630)(uVar5);
            (*(code *)PTR__objc_release_02578630)(uVar4);
          }
        }
        else {
          uVar4 = local_20;
          FUN_01533f64(local_20,PTR_s_isChatStatusNotifyOpen_026ab748,1);
          local_11 = ((byte)uVar4 ^ 1) & 1;
        }
      }
      else {
        uVar4 = local_20;
        FUN_01533f64(local_20,PTR_s_isContactSessionTop_026b06b0,0);
        local_11 = (byte)uVar4 & 1;
      }
    }
    else {
      uVar4 = local_20;
      FUN_01533f64(local_20,PTR_s_isFavour_0269ff28,0);
      local_11 = (byte)uVar4 & 1;
    }
  }
  else {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_boolValue_026ca540);
    local_11 = (byte)uVar1 & 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

