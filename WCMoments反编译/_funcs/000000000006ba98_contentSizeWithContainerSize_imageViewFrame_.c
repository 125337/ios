// contentSizeWithContainerSize:imageViewFrame: @0x6ba98

/* Function Stack Size: 0x40 bytes */

CGSize WCMYBIBImageCell::contentSizeWithContainerSize_imageViewFrame_
                 (ID param_1,SEL param_2,CGSize param_3,CGRect param_4)

{
  CGSize CVar1;
  double dVar2;
  double local_a8;
  double local_98;
  
  local_a8 = param_3.field1_0x8;
  local_98 = param_3.field0_0x0;
  if (local_98 < param_4.field1_0x10.field0_0x0) {
    local_98 = param_4.field1_0x10.field0_0x0;
  }
  if (local_a8 < param_4.field1_0x10.field1_0x8) {
    local_a8 = param_4.field1_0x10.field1_0x8;
  }
  dVar2 = (double)_CGSizeMake(local_98);
  CVar1.field1_0x8 = local_a8;
  CVar1.field0_0x0 = dVar2;
  return CVar1;
}

