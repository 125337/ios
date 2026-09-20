// FUN_006aa4a8 @ 006aa4a8

long FUN_006aa4a8(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  double dVar4;
  long local_50;
  long local_48;
  long local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  lVar1 = local_48;
  FUN_006aa838();
  _objc_retainAutoreleasedReturnValue();
  local_50 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    _objc_storeStrong(&local_50,&cf__O);
  }
  lVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_attributedText_0269fcf8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar1);
  dVar4 = param_3;
  if (lVar2 != 0) {
    lVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_attributedText_0269fcf8);
    _objc_retainAutoreleasedReturnValue();
    FUN_006aaac8();
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_boundingRectWithSize_options_con_026a66f0,3,0)
    ;
    dVar4 = param_3;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    if (0.5 < param_3) {
      local_40 = (long)param_3;
      goto LAB_006aa7b4;
    }
  }
  lVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_font_0269ea00);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  lVar1 = local_50;
  if (lVar2 != 0) {
    FUN_006aaac8();
    local_38 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
    lVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_font_0269ea00);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar1,PTR_s_boundingRectWithSize_options_att_0269e550,3,puVar3,0);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(lVar2);
    if (0.5 < dVar4) {
      local_40 = (long)dVar4;
      goto LAB_006aa7b4;
    }
  }
  local_40 = 0;
LAB_006aa7b4:
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_40;
}

