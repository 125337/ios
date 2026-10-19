// setPage:totalPage: @0x84f38

/* Function Stack Size: 0x20 bytes */

void WCMYBIBTopView::setPage_totalPage_(ID param_1,SEL param_2,long_long param_3,long_long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  long_long local_58;
  long_long local_50;
  SEL local_48;
  ID local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  lVar1 = param_4 - 1;
  local_58 = param_4;
  local_50 = param_3;
  local_48 = param_2;
  local_40 = param_1;
  if (lVar1 == 0 || (long)param_4 < 1) {
    _objc_msgSend_pageLabel(lVar1,param_1,local_a8);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setHidden_(uVar2,local_a8,1);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  else {
    _objc_msgSend_pageLabel(lVar1,param_1,local_a8);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setHidden_(uVar2,local_a8,0);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_a8,&cf__ld__ld);
    local_60 = _objc_retainAutoreleasedReturnValue();
    local_68 = _objc_opt_new(&_OBJC_CLASS___NSShadow);
    _objc_msgSend_setShadowBlurRadius_(0x4010000000000000,local_68,local_a8);
    uVar2 = 0x3ff0000000000000;
    local_90 = _CGSizeMake(0);
    uStack_88 = uVar2;
    local_78 = local_90;
    uStack_70 = uVar2;
    _objc_msgSend_setShadowOffset_(local_90,uVar2,local_68,local_a8);
    _objc_msgSend_darkGrayColor(&_OBJC_CLASS___UIColor,local_a8);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setShadowColor_(local_68,local_a8);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    uVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableAttributedString);
    uVar2 = local_60;
    local_38 = *(undefined8 *)PTR__NSShadowAttributeName_00110060;
    local_30 = local_68;
    _objc_msgSend_dictionaryWithObjects_forKeys_count_
              (&_OBJC_CLASS___NSDictionary,local_a8,&local_30,&local_38,1);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    local_98 = _objc_msgSend_initWithString_attributes_(uVar3,local_a8,uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    uVar2 = local_98;
    _objc_msgSend_pageLabel(local_40,local_a8);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setAttributedText_(uVar3,local_a8,uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
  }
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
  }
  return;
}

