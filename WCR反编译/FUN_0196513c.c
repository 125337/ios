// FUN_0196513c @ 0196513c

void FUN_0196513c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *local_50;
  undefined8 local_48;
  ulong local_40;
  long local_38;
  undefined *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = 0;
  _objc_storeStrong(&local_38,param_1);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_2);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_026ce3e8;
  _objc_alloc_init();
  lVar2 = local_38;
  local_50 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  puVar1 = local_50;
  if (lVar2 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = puVar1;
  }
  else {
    uVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_markup);
    if ((uVar3 & 1) == 0) {
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_style);
      if ((uVar3 & 1) == 0) {
        uVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_text);
        lVar2 = local_38;
        puVar1 = local_50;
        if ((uVar3 & 1) == 0) {
          uVar3 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_hash);
          lVar2 = local_38;
          puVar1 = local_50;
          if ((uVar3 & 1) == 0) {
            local_28 = &cf___;
            puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_28,1);
            _objc_retainAutoreleasedReturnValue();
            FUN_0197262c(puVar1,lVar2,puVar4,1,local_48);
            (*(code *)PTR__objc_release_02578630)(puVar4);
          }
          else {
            local_20 = &cf__;
            puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_20,1);
            _objc_retainAutoreleasedReturnValue();
            FUN_0197262c(puVar1,lVar2,puVar4,0,local_48);
            (*(code *)PTR__objc_release_02578630)(puVar4);
          }
        }
        else {
          FUN_01963e8c();
          _objc_retainAutoreleasedReturnValue();
          FUN_019735ac(puVar1,lVar2,uVar3,local_48,0);
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
      }
      else {
        FUN_0197262c(local_50,local_38,*(undefined8 *)PTR____NSArray0___02578280,1,local_48);
      }
    }
    else {
      FUN_0197203c(local_50,local_38,local_48);
    }
    puVar1 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = puVar1;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_18) {
    _objc_autoreleaseReturnValue(0,local_30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

