// FUN_018e00fc @ 018e00fc

void FUN_018e00fc(long param_1)

{
  ulong uVar1;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar1 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,
             PTR_s_actionSheet_clickedButtonAtIndex_026a1170);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_actionSheet_clickedButtonAtIndex_026a1170,0,1);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

