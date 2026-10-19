// ___48-[WCMYBIBImageData_cuttingImageToRect:complete:]_block_invoke @0x78690

bool ___48__WCMYBIBImageData_cuttingImageToRect_complete___block_invoke(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 local_40;
  bool local_11;
  
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 1) == 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    iVar2 = _objc_msgSend_value(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),local_40);
    local_11 = iVar1 != iVar2;
  }
  else {
    local_11 = true;
  }
  return local_11;
}

