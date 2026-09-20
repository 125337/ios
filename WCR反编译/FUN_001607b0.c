// FUN_001607b0 @ 001607b0

byte FUN_001607b0(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  char *pcVar3;
  byte local_64;
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
      pcVar3 = "CContact";
      _objc_getClass();
      if ((pcVar3 == (char *)0x0) ||
         (uVar2 = local_20,
         (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,pcVar3),
         (uVar2 & 1) != 0)) {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638);
        local_64 = 1;
        if ((uVar2 & 1) == 0) {
          uVar2 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsNickName_0269d758);
          local_64 = 1;
          if ((uVar2 & 1) == 0) {
            uVar2 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsRemark_0269d760);
            local_64 = 1;
            if ((uVar2 & 1) == 0) {
              uVar2 = local_20;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_20,PTR_s_respondsToSelector__026ca818,
                         PTR_s_getContactDisplayName_0269d160);
              local_64 = (byte)uVar2;
            }
          }
        }
        local_11 = local_64 & 1;
      }
      else {
        local_11 = 0;
      }
      goto LAB_001609e4;
    }
  }
  local_11 = 0;
LAB_001609e4:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

