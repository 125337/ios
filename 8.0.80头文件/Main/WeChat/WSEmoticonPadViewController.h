@interface WSEmoticonPadViewController : MMUIViewController <UIGestureRecognizerDelegate>
{
    BOOL _emoticonBoardUp; // +0x70
    id <EmoticonBoardViewDelegate><BaseEmoticonViewDelegate> _delegate; // +0x78
    UIView * _contentBGView; // +0x80
    EmoticonBoardView * _emoticonPad; // +0x88
    UIView * _guideView; // +0x90
}
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initViews;
- (void)animatShowOnView:(id)arg1 refFrame:(CGRect)arg2 exterInfo:(id)arg3;
- (void)touchDownInsideMask:(id)arg1;
- (void)animateHideWithCompleteBlock:(id /* block */)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentBGView;
- (void)setContentBGView:(id)arg1;
- (id)emoticonPad;
- (void)setEmoticonPad:(id)arg1;
- (id)guideView;
- (void)setGuideView:(id)arg1;
- (BOOL)isEmoticonBoardUp;
- (void)setEmoticonBoardUp:(BOOL)arg1;
- (void).cxx_destruct;
@end
