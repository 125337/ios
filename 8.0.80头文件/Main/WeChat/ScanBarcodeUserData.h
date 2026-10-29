@interface ScanBarcodeUserData : NSObject
{
    NSString * _barcode; // +0x8
    CameraScanCodesMarkDotInfo * _markDotInfo; // +0x10
}
- (id)barcode;
- (void)setBarcode:(id)arg1;
- (id)markDotInfo;
- (void)setMarkDotInfo:(id)arg1;
- (void).cxx_destruct;
@end
