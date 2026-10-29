@interface WCFinderMinimizeLiveContentView : WCFinderMinimizeDisplayContentBaseView
{
    CGSize _originSize; // +0x38
}
- (void)pausePlay;
- (void)resumePlay;
- (id)animatingSnapView;
- (CGSize)originSize;
- (void)setOriginSize:(CGSize)arg1;
@end

