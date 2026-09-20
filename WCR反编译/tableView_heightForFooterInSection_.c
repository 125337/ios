// tableView:heightForFooterInSection: @ 01e3f750

/* Function Stack Size: 0x20 bytes */

double WCRTGTabReorderViewController::tableView_heightForFooterInSection_
                 (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 in_d1;
  double in_d3;
  double local_128;
  ID local_60;
  long_long local_58;
  undefined8 local_50;
  SEL local_48;
  ID local_40;
  undefined8 local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  local_48 = param_2;
  local_40 = param_1;
  _objc_storeStrong(&local_50,param_3);
  IVar1 = local_40;
  local_58 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_tableView_titleForFooterInSectio_026bdbe8,local_50,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x3ff0000000000000;
  local_60 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_bounds_026ca548);
  _CGRectGetWidth(uVar4,in_d1);
  IVar1 = local_60;
  FUN_01e3fa04();
  local_38 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
  puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_preferredFontForTextStyle__026ae4f0,
             *(undefined8 *)PTR__UIFontTextStyleFootnote_02578138);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_30,&local_38);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_boundingRectWithSize_options_att_0269e550,1,puVar3,0);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_128 = (double)(long)in_d3 + 24.0;
  if (local_128 <= 64.0) {
    local_128 = 64.0;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_128;
}

