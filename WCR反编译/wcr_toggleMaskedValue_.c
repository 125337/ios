// wcr_toggleMaskedValue: @ 015556e0

/* Function Stack Size: 0x18 bytes */

void WCRefineTopBarProfileCardPresenter::wcr_toggleMaskedValue_(ID param_1,SEL param_2,ID param_3)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long local_70;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar3 = local_28;
  _objc_getAssociatedObject(local_28,DAT_028c5ef8);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = local_28;
  local_30 = lVar3;
  _objc_getAssociatedObject(local_28,DAT_028c5e68);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  FUN_01528c84();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar3;
  (*(code *)PTR__objc_release_02578630)(lVar4);
  lVar3 = local_28;
  _objc_getAssociatedObject(local_28,DAT_028c5e60);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  FUN_01528c84();
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar4;
  (*(code *)PTR__objc_release_02578630)(lVar3);
  if (((local_30 != 0) &&
      (lVar3 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
      lVar3 != 0)) &&
     (lVar3 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     lVar3 != 0)) {
    lVar3 = local_28;
    _objc_getAssociatedObject(local_28,DAT_028c5e70);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar3);
    bVar1 = ((byte)lVar4 ^ 1) & 1;
    if (bVar1 == 0) {
      local_70 = local_40;
    }
    else {
      local_70 = local_38;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setText__026caa88,local_70);
    lVar3 = local_28;
    uVar2 = DAT_028c5e70;
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,bVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar3,uVar2,puVar5,1);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    FUN_01555510();
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

