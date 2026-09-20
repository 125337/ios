// FUN_001f4530 @ 001f4530

byte FUN_001f4530(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  ulong local_48;
  ulong local_40 [3];
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
    goto LAB_001f4a14;
  }
  uVar1 = local_20;
  _WCRNameplateViewIsProtected();
  uVar3 = local_20;
  if ((uVar1 & 1) != 0) {
    local_11 = 1;
    local_24 = 1;
    goto LAB_001f4a14;
  }
  local_40[0] = 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = uVar3;
  do {
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_nextResponder_0269d0d8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_48;
    local_48 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_48;
    if (uVar1 == 0) goto LAB_001f46b0;
    puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  } while ((uVar3 & 1) == 0);
  _objc_storeStrong(local_40,local_48);
LAB_001f46b0:
  uVar3 = local_40[0];
  if (local_40[0] == 0) {
LAB_001f4720:
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tag_026cab98);
    if ((((((uVar3 == 999) || (uVar3 == 0x3e6)) || (uVar3 == 0x24f6de)) ||
         ((uVar3 == 0x3e4 || (uVar3 == 0x768)))) ||
        (((uVar3 == 0x76b || ((uVar3 == 0x76a || (uVar3 == 1999)))) || (uVar3 == 0x7cc)))) ||
       ((((uVar3 == 0x24f6df || (uVar3 == 0x24f6e4)) || (uVar3 == 0x24f6e5)) ||
        (((uVar3 == 0x24f6f8 || (uVar3 == 0x24f6f9)) ||
         ((uVar3 == 0x24f6fa || ((uVar3 == 0x24f6fb || (uVar3 == 0x24f705)))))))))) {
      local_11 = 1;
    }
    else {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if ((((long)uVar3 < 0x250b98) || (0x4a0d07 < (long)uVar3)) &&
         (((long)uVar5 < 0x250b98 || (0x4a0d07 < (long)uVar5)))) {
        local_11 = 0;
      }
      else {
        local_11 = 1;
      }
    }
  }
  else {
    pcVar4 = &cf_MoreViewController;
    _NSClassFromString();
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,pcVar4);
    if ((uVar3 & 1) == 0) goto LAB_001f4720;
    local_11 = 1;
  }
  local_24 = 1;
  _objc_storeStrong(&local_48);
  _objc_storeStrong(local_40,0);
LAB_001f4a14:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

