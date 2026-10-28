@interface WCFinderRichTextRenderedStyle : NSObject
{
    NSMutableArray * _styles; // +0x8
    long long _line; // +0x10
    CGSize _size; // +0x18
}
+ (id)empty;
+ (id)renderWithConfig:(id)arg1;
- (BOOL)isNotEmpty;
- (id)styles;
- (void)setStyles:(id)arg1;
- (long long)line;
- (void)setLine:(long long)arg1;
- (CGSize)size;
- (void)setSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
