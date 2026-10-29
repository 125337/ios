@interface WARootScrollViewInfo : NSObject
{
    long long _windowId; // +0x8
    CGPoint _contentOffset; // +0x10
    CGRect _scrollFrame; // +0x20
}
- (long long)windowId;
- (void)setWindowId:(long long)arg1;
- (CGRect)scrollFrame;
- (void)setScrollFrame:(CGRect)arg1;
- (CGPoint)contentOffset;
- (void)setContentOffset:(CGPoint)arg1;
@end
