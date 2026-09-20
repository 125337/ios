// applyBadgeUnread:asRedDot:show: @ 01af2c68

/* Function Stack Size: 0x20 bytes */

void WCRefineHomeAvatarStripCellView::applyBadgeUnread_asRedDot_show_
               (ID param_1,SEL param_2,unsigned_long_long param_3,bool param_4,bool param_5)

{
  bool bVar1;
  ID IVar2;
  undefined *local_38;
  
  if (((param_5 & 1) == 0) || (param_3 == 0)) {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_badgeLabel_026aa858);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_badgeLabel_026aa858);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  else {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_badgeLabel_026aa858);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    bVar1 = false;
    if (((param_4 & 1) == 0) && (bVar1 = param_3 < 100, bVar1)) {
      local_38 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__lu);
      _objc_retainAutoreleasedReturnValue();
    }
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_badgeLabel_026aa858);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setNeedsLayout_0269deb8);
  return;
}

