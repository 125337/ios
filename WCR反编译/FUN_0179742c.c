// FUN_0179742c @ 0179742c

byte FUN_0179742c(double param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  char *local_68;
  char *local_60;
  ulong local_58;
  ulong local_50;
  undefined4 local_48;
  long local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  uVar2 = local_30;
  local_38 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_21 = 1;
    local_48 = 1;
  }
  else {
    FUN_01797b18();
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar2;
    FUN_01797c48();
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
    if ((uVar2 == 0) ||
       (uVar2 = local_58,
       (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,local_30),
       (uVar2 & 1) == 0)) {
      if (DAT_028e4088 == (char *)0x0) {
        pcVar3 = "MMServiceCenter";
        _objc_getClass();
        DAT_028e4088 = pcVar3;
      }
      pcVar3 = DAT_028e4088;
      _objc_retainAutoreleaseReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      if (DAT_028e4090 == (char *)0x0) {
        pcVar4 = "CContactMgr";
        _objc_getClass();
        DAT_028e4090 = pcVar4;
      }
      pcVar4 = DAT_028e4090;
      _objc_retainAutoreleaseReturnValue();
      pcVar5 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_getService__0269d170,pcVar4);
      _objc_retainAutoreleasedReturnValue();
      local_60 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_getContactByName__0269d178,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_68 = pcVar3;
      if (pcVar3 == (char *)0x0) {
        local_21 = 0;
      }
      else {
        lVar6 = local_38;
        FUN_017971a4();
        if (lVar6 + -1 == 0) {
          uVar2 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
          if (uVar2 == 0) {
            pcVar3 = local_68;
            FUN_017983fc(0,local_68,local_30,local_38);
            local_21 = (byte)pcVar3 & 1;
          }
          else {
            bVar1 = true;
            if (local_50 != 0) {
              uVar2 = local_50;
              (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_navigationController_0269d458);
              _objc_retainAutoreleasedReturnValue();
              bVar1 = uVar2 == 0;
              (*(code *)PTR__objc_release_02578630)(uVar2);
            }
            if (bVar1) {
              local_21 = 0;
            }
            else {
              FUN_0179810c(local_68,local_50,local_38);
              local_21 = 1;
            }
          }
        }
        else {
          uVar2 = local_30;
          FUN_01798780(lVar6 + -1);
          if ((uVar2 & 1) == 0) {
            local_21 = 0;
          }
          else {
            _CFAbsoluteTimeGetCurrent();
            uVar2 = DAT_028e4038;
            (*(code *)PTR__objc_msgSend_02578628)(DAT_028e4038,PTR_s_length_0269cca0);
            bVar1 = false;
            if (uVar2 != 0) {
              uVar2 = DAT_028e4038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (DAT_028e4038,PTR_s_isEqualToString__0269ccc8,local_30);
              bVar1 = false;
              if ((uVar2 & 1) != 0) {
                bVar1 = param_1 - DAT_028e4070 < 0.25;
              }
            }
            if (bVar1) {
              local_21 = 1;
            }
            else {
              pcVar3 = local_68;
              FUN_01798afc();
              if (((ulong)pcVar3 & 1) == 0) {
                local_21 = 0;
              }
              else {
                uVar7 = local_30;
                (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
                uVar2 = DAT_028e4038;
                DAT_028e4038 = uVar7;
                (*(code *)PTR__objc_release_02578630)(uVar2);
                local_21 = 1;
                DAT_028e4070 = param_1;
              }
            }
          }
        }
      }
      local_48 = 1;
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_60,0);
    }
    else {
      local_21 = 1;
      local_48 = 1;
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

