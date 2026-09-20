// text:fitsSingleLineWithFont:maxWidth: @ 00ff6ef8

/* Function Stack Size: 0x28 bytes */

bool WCRefineKeywordAlertDanmakuPresenter::text_fitsSingleLineWithFont_maxWidth_
               (ID param_1,SEL param_2,ID param_3,ID param_4,double param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  double in_d2;
  undefined8 local_50;
  long local_48;
  SEL local_40;
  ID local_38;
  bool local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_4);
  lVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  lVar1 = local_48;
  if (lVar2 == 0) {
    local_29 = true;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lineHeight_0269e7d8);
    FUN_00ff10f0();
    local_28 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
    local_20 = local_50;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_20,&local_28,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar1,PTR_s_boundingRectWithSize_options_att_0269e550,3,puVar3,0);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_29 = in_d2 <= param_5 + 0.5;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return local_29 & 1;
}

