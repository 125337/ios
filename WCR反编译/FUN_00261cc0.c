// FUN_00261cc0 @ 00261cc0

void FUN_00261cc0(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = PTR_s_setNewXmlFlag__026a11f8;
  uVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_setNewXmlFlag__026a11f8);
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,puVar1,1);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

