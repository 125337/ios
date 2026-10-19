// shouldCompressWithImageSize:scale: @0x7a504

/* Function Stack Size: 0x28 bytes */

bool WCMYBIBImageData::shouldCompressWithImageSize_scale_
               (ID param_1,SEL param_2,CGSize param_3,double param_4)

{
  double dVar1;
  
  dVar1 = (double)_objc_msgSend_compressingSize(param_1);
  return (bool)(dVar1 < param_3.field0_0x0 * param_4 * param_3.field1_0x8 * param_4);
}

