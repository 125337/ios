@interface MMFinderLiveConnectMicFocusMaskContext : NSObject <CALayerDelegate>
{
    BOOL _sorted; // +0x8
    NSMutableArray * _items; // +0x10
    unsigned long long _maxIndex; // +0x18
    CGSize _size; // +0x20
}
- (id)initWithSize:(CGSize)arg1;
- (id)init;
- (void)addRect:(CGRect)arg1;
- (void)addRect:(CGRect)arg1 atIndex:(unsigned long long)arg2;
- (void)removeRect:(CGRect)arg1;
- (void)removeRect:(CGRect)arg1 atIndex:(unsigned long long)arg2;
- (id)maskLayer;
- (id)maskCoreImage;
- (void)drawLayer:(id)arg1 inContext:(CGContext *)arg2;
- (void)sortItems;
- (void)drawInContext:(CGContext *)arg1 size:(CGSize)arg2;
- (id)items;
- (void)setItems:(id)arg1;
- (CGSize)size;
- (void)setSize:(CGSize)arg1;
- (unsigned long long)maxIndex;
- (void)setMaxIndex:(unsigned long long)arg1;
- (BOOL)sorted;
- (void)setSorted:(BOOL)arg1;
- (void).cxx_destruct;
@end
