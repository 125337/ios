// FUN_01b2fe8c @ 01b2fe8c

byte FUN_01b2fe8c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  byte local_34;
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
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638);
      local_34 = 1;
      if ((uVar2 & 1) == 0) {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsNickName_0269d758);
        local_34 = 1;
        if ((uVar2 & 1) == 0) {
          uVar2 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsRemark_0269d760);
          local_34 = 1;
          if ((uVar2 & 1) == 0) {
            uVar2 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_20,PTR_s_respondsToSelector__026ca818,
                       PTR_s_getContactDisplayName_0269d160);
            local_34 = (byte)uVar2;
          }
        }
      }
      local_11 = local_34 & 1;
      goto LAB_01b2ffec;
    }
  }
  local_11 = 0;
LAB_01b2ffec:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

