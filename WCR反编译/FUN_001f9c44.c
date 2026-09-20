// FUN_001f9c44 @ 001f9c44

byte FUN_001f9c44(double param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  undefined4 local_40;
  byte local_39;
  undefined8 local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  uVar3 = local_30;
  local_39 = param_4;
  if ((param_4 & 1) == 0) {
    if (local_30 != 0) {
      puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      uVar1 = (uint)uVar3;
      if ((uVar3 & 1) != 0) {
        FUN_001f9588();
        if ((uVar1 & 1) == 0) {
          local_21 = 1;
          local_40 = 1;
        }
        else {
          uVar3 = local_30;
          FUN_001fc184(local_30,local_38);
          local_58 = uVar3;
          if (uVar3 == 0) {
            local_21 = 0;
            local_40 = 1;
          }
          else {
            uVar3 = local_30;
            _objc_getAssociatedObject(local_30,&DAT_028c9158);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = local_30;
            local_60 = uVar3;
            _objc_getAssociatedObject(local_30,&DAT_028c9159);
            _objc_retainAutoreleasedReturnValue();
            local_68 = uVar4;
            _CACurrentMediaTime();
            local_21 = false;
            if (local_60 != 0) {
              uVar3 = local_60;
              (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_unsignedIntegerValue_026cabb8);
              local_21 = false;
              if ((uVar3 == local_58) && (local_21 = false, local_68 != 0)) {
                dVar5 = param_1;
                (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_doubleValue_026ca608);
                local_21 = param_1 - dVar5 < DAT_02323e38;
              }
            }
            uVar3 = local_30;
            puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0
                       ,local_58);
            _objc_retainAutoreleasedReturnValue();
            _objc_setAssociatedObject(uVar3,&DAT_028c9158,puVar2,1);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            uVar3 = local_30;
            puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (param_1,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0)
            ;
            _objc_retainAutoreleasedReturnValue();
            _objc_setAssociatedObject(uVar3,&DAT_028c9159,puVar2,1);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            local_40 = 1;
            _objc_storeStrong(&local_68);
            _objc_storeStrong(&local_60,0);
          }
        }
        goto LAB_001fa070;
      }
    }
    local_21 = 1;
    local_40 = 1;
  }
  else {
    local_21 = 0;
    local_40 = 1;
  }
LAB_001fa070:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

