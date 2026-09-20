// FUN_0087b4e4 @ 0087b4e4

/* WARNING: Removing unreachable block (ram,0x0087b9c0) */
/* WARNING: Removing unreachable block (ram,0x0087b800) */
/* WARNING: Removing unreachable block (ram,0x0087bb30) */
/* WARNING: Removing unreachable block (ram,0x0087b9a0) */

byte FUN_0087b4e4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_68;
  byte local_5a;
  byte local_59;
  ulong local_58 [3];
  undefined4 local_3c;
  undefined8 local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  if (local_30 == 0) {
    local_21 = 0;
    local_3c = 1;
  }
  else {
    uVar2 = local_30;
    _objc_getAssociatedObject(local_30,&DAT_028cd88f);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar2 == 0) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_30;
      local_58[0] = uVar2;
      FUN_0087bb34(local_30,uVar2);
      if ((uVar3 & 1) == 0) {
        local_21 = 0;
      }
      else {
        local_59 = 0;
        uVar2 = local_58[0];
        FUN_0087bdc8();
        if ((uVar2 & 1) == 0) {
          uVar2 = local_58[0];
          FUN_0087d28c();
          _objc_retainAutoreleasedReturnValue();
          local_68 = uVar2;
          if ((uVar2 != 0) &&
             ((*(code *)PTR__objc_msgSend_02578628)
                        (uVar2,PTR_s_isEqualToString__0269ccc8,local_58[0]), uVar3 = local_30,
             (uVar2 & 1) == 0)) {
            puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
            _objc_retainAutoreleasedReturnValue();
            _objc_setAssociatedObject(uVar3,&DAT_028cd88f,puVar4,1);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setText__026caa88,local_68);
            local_3c = 0;
            _objc_setAssociatedObject(local_30,&DAT_028cd88f,0,1);
            local_3c = 0;
            FUN_0087c13c(local_30,local_38);
            local_59 = 1;
          }
          _objc_storeStrong(&local_68,0);
        }
        else {
          FUN_0087c02c(local_30);
          uVar2 = local_30;
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(uVar2,&DAT_028cd88f,puVar4,1);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          local_5a = 0;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setHidden__026ca970,1);
          (*(code *)PTR__objc_msgSend_02578628)(0,local_30,PTR_s_setAlpha__026ca860);
          uVar2 = local_58[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_length_0269cca0);
          if (uVar2 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setText__026caa88,&cf___);
          }
          local_3c = 0;
          _objc_setAssociatedObject(local_30,&DAT_028cd88f,0,1);
          if ((local_5a & 1) != 0) {
            _objc_exception_rethrow();
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x87b7f0);
            (*pcVar1)();
          }
          local_3c = 0;
          FUN_0087c13c(local_30,local_38);
          local_59 = 1;
        }
        local_21 = local_59 & 1;
      }
      local_3c = 1;
      _objc_storeStrong(local_58,0);
    }
    else {
      local_21 = 0;
      local_3c = 1;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

