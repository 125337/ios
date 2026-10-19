// ___35+[WCMYBIBIconManager_sharedManager]_block_invoke @0x81e4c

void ___35__WCMYBIBIconManager_sharedManager__block_invoke(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_opt_new(&objc::class_t::WCMYBIBIconManager);
  uVar1 = _sharedManager_manager;
  _sharedManager_manager = uVar2;
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

