// FUN_00101338 @ 00101338

void FUN_00101338(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_3);
  puVar1 = PTR_s_scrollToMessage_highlight_margin_0269ec30;
  if ((local_18 != 0) && (local_20 != 0)) {
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,
               PTR_s_scrollToMessage_highlight_margin_0269ec30);
    puVar2 = PTR_s_scrollToMessage_highlight_margin_0269ec38;
    if ((uVar3 & 1) == 0) {
      uVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,
                 PTR_s_scrollToMessage_highlight_margin_0269ec38);
      if ((uVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(param_1,local_18,puVar2,local_20,0);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,local_18,puVar1,local_20,0,1);
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

