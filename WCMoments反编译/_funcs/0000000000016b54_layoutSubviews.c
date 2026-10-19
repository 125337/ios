// layoutSubviews @0x16b54

/* Function Stack Size: 0x10 bytes */

void WCMVideoCell::layoutSubviews(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double in_d1;
  double dVar11;
  double in_d2;
  double in_d3;
  double dVar12;
  double local_3b0;
  double local_3a0;
  double local_398;
  double local_370;
  undefined8 local_308;
  ID local_40;
  class_t *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = &objc::class_t::WCMVideoCell;
  local_40 = param_1;
  local_30 = param_2;
  local_28 = param_1;
  _objc_msgSendSuper2(&local_40,"layoutSubviews");
  _objc_msgSend_contentView(local_28,local_308);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar8 = _objc_msgSend_bounds(uVar1,local_308);
  _objc_msgSend_backdrop(local_28,local_308);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFrame_(uVar8,uVar2,local_308);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_contentView(local_28,local_308);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar8 = _objc_msgSend_bounds(uVar1,local_308);
  _objc_msgSend_blur(local_28,local_308);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFrame_(uVar8,uVar2,local_308);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_contentView(local_28,local_308);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar8 = _objc_msgSend_bounds(uVar1,local_308);
  _objc_msgSend_poster(local_28,local_308);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFrame_(uVar8,uVar2,local_308);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_poster(local_28,local_308);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_image(uVar1,local_308);
  lVar3 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  (*(code *)PTR__objc_release_00110458)(uVar1);
  if (lVar3 != 0) {
    _objc_msgSend_poster(local_28,local_308);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_layer(uVar1,local_308);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_poster(local_28,local_308);
    uVar8 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_image(uVar8,local_308);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    uVar9 = _objc_msgSend_size(uVar4,local_308);
    _objc_msgSend_poster(local_28,local_308);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    in_d2 = (double)_objc_msgSend_bounds(uVar5,local_308);
    uVar10 = _AVMakeRectWithAspectRatioInsideRect(uVar9);
    _objc_msgSend_poster(local_28,local_308);
    uVar9 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_bounds(uVar9,local_308);
    _WCMSoftenMediaEdges(uVar10,uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar9);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar8);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    in_d3 = in_d1;
  }
  _objc_msgSend_bounds(local_28,local_308);
  local_370 = in_d2 - 104.0;
  if (local_370 <= 0.0) {
    local_370 = 0.0;
  }
  _objc_msgSend_caption(local_28,local_308);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_text(uVar1,local_308);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  lVar3 = _objc_msgSend_length(uVar2,local_308);
  if (lVar3 == 0) {
    local_3a0 = 0.0;
  }
  else {
    _objc_msgSend_caption(local_28,local_308);
    uVar8 = _objc_retainAutoreleasedReturnValue();
    dVar7 = 70.0;
    uVar4 = _CGSizeMake(local_370);
    _objc_msgSend_sizeThatFits_(uVar4,uVar8,local_308);
    local_398 = (double)(long)dVar7;
    (*(code *)PTR__objc_release_00110458)(uVar8);
    if (70.0 < local_398) {
      local_398 = 70.0;
    }
    local_3a0 = local_398;
  }
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_safeAreaInsets(local_28,local_308);
  local_3b0 = in_d2;
  if (in_d2 <= 24.0) {
    local_3b0 = 24.0;
  }
  _objc_msgSend_bounds(local_28,local_308);
  dVar11 = (in_d3 - (local_3b0 + 58.0)) - local_3a0;
  dVar7 = local_370;
  dVar12 = local_3a0;
  uVar2 = _CGRectMake();
  _objc_msgSend_caption(local_28,local_308);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFrame_(uVar2,uVar1,local_308);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_caption(local_28,local_308);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_msgSend_frame(uVar1,local_308);
  dVar7 = (double)_CGRectGetMinY(uVar2,dVar11,dVar7,dVar12);
  uVar2 = 0x4046000000000000;
  iVar6 = 2;
  if (local_3a0 == 0.0) {
    iVar6 = 0;
  }
  dVar7 = (dVar7 - 44.0) - (double)iVar6;
  uVar4 = _CGRectMake(0x4034000000000000);
  _objc_msgSend_authorButton(local_28,local_308);
  uVar8 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFrame_(uVar4,dVar7,local_370,uVar2,uVar8,local_308);
  (*(code *)PTR__objc_release_00110458)(uVar8);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

