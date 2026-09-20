// OnSelectSession:SessionSelectController: @ 01a9d0dc

/* Function Stack Size: 0x20 bytes */

void WCRGroupSessionPickerBridge::OnSelectSession_SessionSelectController_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ID IVar2;
  undefined *local_68;
  undefined *local_48;
  undefined8 local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  long local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  IVar2 = local_28;
  bVar1 = local_38 == 0;
  if (bVar1) {
    local_68 = *(undefined **)PTR____NSArray0___02578280;
  }
  else {
    local_20 = local_38;
    local_68 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1
              );
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_68;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_finishWithValues_controller__026bdaa0,local_68,local_40);
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

