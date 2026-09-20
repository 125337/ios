// FUN_000f4418 @ 000f4418

void FUN_000f4418(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  
  puVar1 = PTR_s_focusSearchBar_0269eaa8;
  uVar2 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_focusSearchBar_0269eaa8);
  if ((uVar2 & 1) != 0) {
    pcVar3 = *(code **)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_methodForSelector__0269e1d8,puVar1);
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(*(undefined8 *)(param_1 + 0x20),puVar1);
    }
  }
  return;
}

