@interface UIScrollViewDelegateHooker : NSObject <UIScrollViewDelegate>
{
    id _originalDelegate; // +0x8
    FavBrowseDetailData * _browseData; // +0x10
}
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)originalDelegate;
- (void)setOriginalDelegate:(id)arg1;
- (id)browseData;
- (void)setBrowseData:(id)arg1;
- (void).cxx_destruct;
@end

