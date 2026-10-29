@interface CircleToSearchScanItem : NSObject
{
    ScanSearchItem * _scanItem; // +0x8
    CGRect _normalizedRect; // +0x10
}
- (id)initWithScanItem:(id)arg1 andNormalizedRect:(CGRect)arg2;
- (id)scanItem;
- (void)setScanItem:(id)arg1;
- (CGRect)normalizedRect;
- (void)setNormalizedRect:(CGRect)arg1;
- (void).cxx_destruct;
@end
