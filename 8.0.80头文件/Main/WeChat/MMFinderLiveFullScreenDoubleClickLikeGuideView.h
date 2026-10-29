@interface MMFinderLiveFullScreenDoubleClickLikeGuideView : UIView
{
    PAGView * _guideAnimatedView; // +0x8
    MMUILabel * _guideLabel; // +0x10
}
- (void)updateLayout;
- (void)createGuidePAGViewIfNeeded;
- (void)createGuideLabelIfNeeded;
- (id)loadLocalPAGFile;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)guideAnimatedView;
- (void)setGuideAnimatedView:(id)arg1;
- (id)guideLabel;
- (void)setGuideLabel:(id)arg1;
- (void).cxx_destruct;
@end
