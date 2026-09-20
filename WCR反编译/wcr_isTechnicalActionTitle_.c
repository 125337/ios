// wcr_isTechnicalActionTitle: @ 01e29f74

/* Function Stack Size: 0x18 bytes */

bool WCRefineSuperFloatSettingsViewController::wcr_isTechnicalActionTitle_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *local_50;
  ulong local_40;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar4 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (uVar4 == 0) {
    local_11 = 1;
  }
  else {
    uVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf_wcr_sf_);
    if ((uVar4 & 1) == 0) {
      uVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_containsString__0269d0b0,&cf_ViewController);
      if ((uVar4 & 1) == 0) {
        uVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf__);
        if ((uVar4 & 1) == 0) {
          bVar2 = false;
          for (local_40 = 0; uVar4 = local_30,
              (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
              local_40 < uVar4; local_40 = local_40 + 1) {
            uVar4 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_characterAtIndex__0269fa18,local_40);
            if ((0x4dff < (ushort)uVar4) && ((ushort)uVar4 < 0xa000)) {
              bVar2 = true;
              break;
            }
          }
          bVar1 = false;
          bVar3 = false;
          if (!bVar2) {
            uVar5 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf__);
            uVar4 = local_30;
            bVar3 = true;
            bVar1 = (uVar5 & 1) == 0;
            if (bVar1) {
              local_50 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                         PTR_s_uppercaseLetterCharacterSet_026c6260);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              bVar3 = uVar4 != 0x7fffffffffffffff;
            }
          }
          if (bVar1) {
            (*(code *)PTR__objc_release_02578630)(local_50);
          }
          if ((bVar3) &&
             ((((uVar4 = local_30,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_30,PTR_s_containsString__0269d0b0,&::cf__), (uVar4 & 1) != 0 ||
                (uVar4 = local_30,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_30,PTR_s_hasSuffix__0269d018,&cf_Controller), (uVar4 & 1) != 0)) ||
               (uVar4 = local_30,
               (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf_set),
               (uVar4 & 1) != 0)) ||
              (uVar4 = local_30,
              (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf_on),
              (uVar4 & 1) != 0)))) {
            local_11 = 1;
          }
          else {
            local_11 = 0;
          }
        }
        else {
          local_11 = 1;
        }
      }
      else {
        local_11 = 1;
      }
    }
    else {
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

