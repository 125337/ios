// layoutSubviews @0x87168

/* Function Stack Size: 0x10 bytes */

void WCMYBIBSheetCell::layoutSubviews(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  double dVar2;
  double in_d2;
  double dVar3;
  double in_d3;
  undefined8 uVar4;
  undefined8 local_138;
  ID local_40;
  class_t *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = &objc::class_t::WCMYBIBSheetCell;
  local_40 = param_1;
  local_30 = param_2;
  local_28 = param_1;
  _objc_msgSendSuper2(&local_40,"layoutSubviews");
  _objc_msgSend_contentView(local_28,local_138);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_bounds(uVar1,local_138);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_contentView(local_28,local_138);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_bounds(uVar1,local_138);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  dVar2 = in_d3 - 0.5;
  uVar4 = 0x3fe0000000000000;
  dVar3 = in_d2;
  uVar1 = _CGRectMake();
  _objc_msgSend_setFrame_(uVar1,dVar2,dVar3,uVar4,*(undefined8 *)(local_28 + (long)_line),local_138)
  ;
  uVar4 = 0;
  in_d2 = in_d2 - 30.0;
  uVar1 = _CGRectMake(0x402e000000000000);
  _objc_msgSend_setFrame_
            (uVar1,uVar4,in_d2,in_d3,*(undefined8 *)(local_28 + (long)_titleLabel),local_138);
  return;
}

