// FUN_000ea990 @ 000ea990

void FUN_000ea990(undefined8 param_1,uint param_2)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_setM_bInteractivePopEnabled__0269ea48
            );
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setM_bInteractivePopEnabled__0269ea48,param_2 & 1);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

