// prepareForReuse @0x6b804

/* Function Stack Size: 0x10 bytes */

void WCMYBIBImageCell::prepareForReuse(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 local_38;
  ID local_30;
  class_t *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSend_wcm_yb_cellData(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setDelegate_(uVar1,local_38,0);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_imageScrollView(local_18,local_38);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_reset(uVar1,local_38);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_hideTailoringImageView(local_18,local_38);
  _objc_msgSend_hideAuxiliaryView(local_18,local_38);
  local_30 = local_18;
  local_28 = &objc::class_t::WCMYBIBImageCell;
  _objc_msgSendSuper2(&local_30,"prepareForReuse");
  return;
}

