// ___37+[WCMYBIBCopywriter_sharedCopywriter]_block_invoke @0x829b0

void ___37__WCMYBIBCopywriter_sharedCopywriter__block_invoke(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_opt_new(&objc::class_t::WCMYBIBCopywriter);
  uVar1 = _sharedCopywriter_copywriter;
  _sharedCopywriter_copywriter = uVar2;
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

