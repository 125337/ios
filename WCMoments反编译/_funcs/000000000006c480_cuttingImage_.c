// cuttingImage_ @0x6c480

/* Function Stack Size: 0x10 bytes */

void WCMYBIBImageCell::cuttingImage_(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double in_d3;
  undefined8 local_160;
  undefined *local_150;
  undefined4 local_148;
  undefined4 local_144;
  code *local_140;
  undefined *local_138;
  undefined8 local_130;
  undefined1 auStack_128 [24];
  undefined8 local_110;
  double local_108;
  double local_100;
  double local_f8;
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  double local_e0;
  double local_d8;
  double local_c8;
  undefined8 local_c0;
  double local_b8;
  double local_b0;
  double local_a0;
  undefined8 local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_58;
  double local_48;
  uint local_3c;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  _objc_msgSend_wcm_yb_cellData(param_1);
  local_38 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_originImage(local_38,local_160);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  if (lVar1 != 0) {
    _objc_msgSend_originImage(local_38,local_160);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    dVar4 = (double)_objc_msgSend_size(uVar2,local_160);
    local_58 = dVar4;
    _objc_msgSend_imageScrollView(local_28,local_160);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    dVar5 = (double)_objc_msgSend_contentSize(uVar3,local_160);
    dVar4 = dVar4 / dVar5;
    dVar7 = dVar5;
    local_68 = dVar5;
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    local_48 = dVar4;
    _objc_msgSend_imageScrollView(local_28,local_160);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    local_80 = (double)_objc_msgSend_contentOffset(uVar2,local_160);
    dVar6 = local_80 * local_48;
    dVar4 = local_48;
    local_78 = dVar5;
    (*(code *)PTR__objc_release_00110458)(uVar2);
    local_70 = dVar6;
    _objc_msgSend_imageScrollView(local_28,local_160);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    local_98 = _objc_msgSend_contentOffset(uVar2,local_160);
    dVar6 = dVar4 * local_48;
    dVar5 = local_48;
    local_90 = dVar4;
    (*(code *)PTR__objc_release_00110458)(uVar2);
    local_88 = dVar6;
    _objc_msgSend_imageScrollView(local_28,local_160);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    local_c0 = _objc_msgSend_bounds(uVar2,local_160);
    dVar6 = dVar7 * local_48;
    dVar4 = local_48;
    local_b8 = dVar5;
    local_b0 = dVar7;
    (*(code *)PTR__objc_release_00110458)(uVar2);
    local_a0 = dVar6;
    _objc_msgSend_imageScrollView(local_28,local_160);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    local_e8 = _objc_msgSend_bounds(uVar2,local_160);
    in_d3 = in_d3 * local_48;
    local_e0 = dVar4;
    local_d8 = dVar7;
    (*(code *)PTR__objc_release_00110458)(uVar2);
    local_c8 = in_d3;
    _objc_initWeak(auStack_f0,local_28);
    uVar2 = local_38;
    dVar4 = local_88;
    dVar5 = local_a0;
    dVar7 = local_c8;
    local_110 = _CGRectMake(local_70);
    local_150 = PTR___NSConcreteStackBlock_001104f0;
    local_148 = 0xc2000000;
    local_144 = 0;
    local_140 = ___33__WCMYBIBImageCell_cuttingImage___block_invoke;
    local_138 = &___block_descriptor_48_e8_32s40w_e17_v16__0__UIImage_8l;
    local_108 = dVar4;
    local_100 = dVar5;
    local_f8 = dVar7;
    _objc_copyWeak(auStack_128,auStack_f0);
    local_130 = (*(code *)PTR__objc_retain_00110460)(local_38);
    _objc_msgSend_cuttingImageToRect_complete_
              (local_110,local_108,local_100,local_f8,uVar2,local_160,&local_150);
    _objc_storeStrong(&local_130,0);
    _objc_destroyWeak(auStack_128);
    _objc_destroyWeak(auStack_f0);
  }
  local_3c = (uint)(lVar1 == 0);
  _objc_storeStrong(&local_38,0);
  return;
}

