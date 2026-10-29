@interface PixelColorRequestTask : NSObject
{
    unsigned long long _format; // +0x8
    id /* block */ _callback; // +0x10
    NSArray * _coordinateList; // +0x18
    CGSize _fromSize; // +0x20
}
- (unsigned long long)format;
- (void)setFormat:(unsigned long long)arg1;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (id)coordinateList;
- (void)setCoordinateList:(id)arg1;
- (CGSize)fromSize;
- (void)setFromSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
