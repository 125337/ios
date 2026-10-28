@interface GCClvMgrEasyInitConfig : NSObject
{
    BOOL _supportLongPress; // +0x8
    long long _scrollDirection; // +0x10
    CGSize _itemSize; // +0x18
    CGRect _scrollViewFrame; // +0x28
    UIEdgeInsets _sectionInset; // +0x48
}
+ (id)viewMgrWithInitConfig:(id)arg1 pagingNumItem:(int)arg2;
- (CGSize)itemSize;
- (void)setItemSize:(CGSize)arg1;
- (CGRect)scrollViewFrame;
- (void)setScrollViewFrame:(CGRect)arg1;
- (long long)scrollDirection;
- (void)setScrollDirection:(long long)arg1;
- (UIEdgeInsets)sectionInset;
- (void)setSectionInset:(UIEdgeInsets)arg1;
- (BOOL)supportLongPress;
- (void)setSupportLongPress:(BOOL)arg1;
@end
