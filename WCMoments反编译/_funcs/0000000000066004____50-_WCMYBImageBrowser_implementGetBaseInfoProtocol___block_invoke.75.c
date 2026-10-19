// ___50-[WCMYBImageBrowser_implementGetBaseInfoProtocol:]_block_invoke.75 @0x66004

bool ___50__WCMYBImageBrowser_implementGetBaseInfoProtocol___block_invoke_75
               (undefined1 param_1 [16],undefined1 param_2 [16],double param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double local_a0;
  undefined8 local_98;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = param_4;
  local_18 = param_4;
  local_28 = _objc_loadWeakRetained(param_4 + 0x20);
  _objc_msgSend_collectionView(local_28,local_98);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  dVar3 = (double)_objc_msgSend_contentOffset(uVar1,local_98);
  _objc_msgSend_collectionView(local_28,local_98);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_bounds(uVar2,local_98);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  local_a0 = dVar3 / param_3 - (double)(long)(dVar3 / param_3);
  if (local_a0 < 0.0) {
    local_a0 = -local_a0;
  }
  _objc_storeStrong(&local_28,0);
  return local_a0 <= 0.001;
}

