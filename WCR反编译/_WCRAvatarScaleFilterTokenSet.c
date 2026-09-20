// _WCRAvatarScaleFilterTokenSet @ 00939a5c

void _WCRAvatarScaleFilterTokenSet(undefined8 param_1)

{
  ushort uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_38;
  ulong local_28;
  undefined *local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar2 = PTR__OBJC_CLASS___NSMutableIndexSet_026ce398;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableIndexSet_026ce398,PTR_s_indexSet_0269fc90);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_18;
  local_20 = puVar2;
  FUN_00939c78();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
  for (local_38 = 0; local_38 < uVar3; local_38 = local_38 + 1) {
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_characterAtIndex__0269fa18,local_38);
    if ((int)uVar4 == 0x40) {
      if (uVar3 <= local_38 + 1) break;
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_characterAtIndex__0269fa18,local_38 + 1);
      uVar1 = (ushort)uVar4;
      if ((0x2f < uVar1) && (uVar1 < 0x36)) {
        if (local_38 + 2 < uVar3) {
          uVar4 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_characterAtIndex__0269fa18,local_38 + 2);
          if ((0x2f < (ushort)uVar4) && ((ushort)uVar4 < 0x3a)) goto LAB_00939c0c;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_addIndex__0269fc98,(long)(int)(uVar1 - 0x30));
      }
    }
LAB_00939c0c:
  }
  puVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar2);
  return;
}

