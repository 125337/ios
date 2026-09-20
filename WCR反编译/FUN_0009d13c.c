// FUN_0009d13c @ 0009d13c

void FUN_0009d13c(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  code *local_18;
  
  local_18 = (code *)0x0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = PTR_s_wcr_reapplyAvatarDecorationsAfte_0269de88;
  if (((local_18 != (code *)0x0) &&
      (pcVar2 = local_18,
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,
                 PTR_s_wcr_reapplyAvatarDecorationsAfte_0269de88), ((ulong)pcVar2 & 1) != 0)) &&
     (pcVar2 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_methodForSelector__0269e1d8,puVar1),
     pcVar2 != (code *)0x0)) {
    (*pcVar2)(local_18,puVar1);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

