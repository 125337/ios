// FUN_007562d0 @ 007562d0

byte FUN_007562d0(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  char *pcVar3;
  byte local_6c;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  if (local_20 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) == 0) {
      if (DAT_028cc820 == (char *)0x0) {
        pcVar3 = "CContact";
        _objc_getClass();
        DAT_028cc820 = pcVar3;
      }
      pcVar3 = DAT_028cc820;
      _objc_retainAutoreleaseReturnValue();
      if ((pcVar3 == (char *)0x0) ||
         (uVar2 = local_20,
         (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,pcVar3),
         (uVar2 & 1) != 0)) {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638);
        local_6c = 1;
        if ((uVar2 & 1) == 0) {
          uVar2 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsNickName_0269d758);
          local_6c = 1;
          if ((uVar2 & 1) == 0) {
            uVar2 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsRemark_0269d760);
            local_6c = 1;
            if ((uVar2 & 1) == 0) {
              uVar2 = local_20;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_20,PTR_s_respondsToSelector__026ca818,
                         PTR_s_getContactDisplayName_0269d160);
              local_6c = (byte)uVar2;
            }
          }
        }
        local_11 = local_6c & 1;
      }
      else {
        local_11 = 0;
      }
      goto LAB_00756538;
    }
  }
  local_11 = 0;
LAB_00756538:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

