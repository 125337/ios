// FUN_0050d6b8 @ 0050d6b8

byte FUN_0050d6b8(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte local_74;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_contact_026a0b68);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_isSelf_0269ff30);
  if ((uVar1 & 1) != 0) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isSelf_0269ff30);
    if ((uVar1 & 1) != 0) {
      local_11 = 1;
      local_38 = 1;
      goto LAB_0050d8f4;
    }
  }
  uVar1 = local_28;
  FUN_0050e284(local_28,&cf_m_nsUsrName);
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar1;
  FUN_0050e638();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_40;
  local_48 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  local_74 = 0;
  if (uVar2 != 0) {
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    local_74 = 0;
    if (uVar1 != 0) {
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,local_48);
      local_74 = (byte)uVar1;
    }
  }
  local_11 = local_74 & 1;
  local_38 = 1;
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
LAB_0050d8f4:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

