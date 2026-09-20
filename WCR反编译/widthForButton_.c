// widthForButton: @ 01e568a4

/* Function Stack Size: 0x18 bytes */

double __thiscall
WCRefineTelegramTabStripView::widthForButton_
          (WCRefineTelegramTabStripView *this,ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  double in_d0;
  double local_b8;
  cfstringStruct *local_80;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  SEL local_38;
  ID local_30;
  undefined8 local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  pcVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_titleForState__026a2208,0);
  _objc_retainAutoreleasedReturnValue();
  local_80 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_80 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_80;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_48;
  puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  local_28 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_titleFontSize_026c6970);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_systemFontOfSize_weight__026cab60);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_20 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_20,&local_28,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_sizeWithAttributes__026cab08);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_b8 = (double)(long)in_d0 + 28.0;
  if (local_b8 <= 44.0) {
    local_b8 = 44.0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return local_b8;
}

