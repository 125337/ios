@interface WCFinderScrollViewLimitSize : NSObject
{
    UIScrollView * _scrollView; // +0x8
    CGSize _minsize; // +0x10
}
- (void)configScrollView:(id)arg1;
- (void)_onScrollViewSetContentSize:(CGSize)arg1 originImp:(void * *)arg2;
- (void)setMinsize:(CGSize)arg1;
- (CGSize)minsize;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (void).cxx_destruct;
@end
