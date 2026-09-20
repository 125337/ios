// FUN_01500c04 @ 01500c04

byte FUN_01500c04(undefined8 param_1)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_40;
  byte local_37;
  byte local_35;
  ulong local_30;
  byte local_21;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar6 = local_30;
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
  if (((uVar6 & 1) == 0) ||
     (uVar6 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     uVar6 == 0)) {
    local_21 = 1;
  }
  else {
    local_18 = &DAT_028e37c8;
    local_20 = 0;
    _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02586338);
    if (*local_18 + 1 != 0) {
      _dispatch_once(*local_18 + 1,local_18,local_20);
    }
    _objc_storeStrong(&local_20,0);
    uVar6 = DAT_028e37c0;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e37c0,PTR_s_containsObject__0269cbb8,local_30);
    if ((uVar6 & 1) == 0) {
      uVar6 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf_wxid);
      if ((uVar6 & 1) == 0) {
        uVar6 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf__);
        if ((uVar6 & 1) == 0) {
          local_35 = 1;
          bVar3 = true;
          local_37 = 1;
          for (local_40 = 0; uVar6 = local_30,
              (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
              local_40 < uVar6; local_40 = local_40 + 1) {
            uVar6 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_characterAtIndex__0269fa18,local_40);
            uVar1 = (ushort)uVar6;
            if (0x7f < uVar1) {
              local_35 = 0;
            }
            if ((uVar1 < 0x30) || (0x39 < uVar1)) {
              bVar3 = false;
            }
            if ((uVar1 < 0x30) || (bVar2 = true, 0x39 < uVar1)) {
              bVar2 = 0x60 < uVar1 && uVar1 < 0x67;
            }
            if (!bVar2) {
              local_37 = 0;
            }
          }
          if (bVar3) {
            local_21 = 1;
          }
          else if ((local_35 == 0) ||
                  (uVar6 = local_30,
                  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0), 2 < uVar6))
          {
            uVar6 = (ulong)local_35;
            if ((local_35 != 0) && (uVar6 = (ulong)local_37, local_37 != 0)) {
              uVar5 = local_30;
              (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
              uVar6 = uVar5 - 8;
              if (7 < uVar5) {
                local_21 = 1;
                goto LAB_01500ff8;
              }
            }
            uVar5 = local_30;
            FUN_01501834(uVar6);
            if ((uVar5 & 1) == 0) {
              local_21 = 0;
            }
            else {
              local_21 = 1;
            }
          }
          else {
            local_21 = 1;
          }
        }
        else {
          local_21 = 1;
        }
      }
      else {
        local_21 = 1;
      }
    }
    else {
      local_21 = 1;
    }
  }
LAB_01500ff8:
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

