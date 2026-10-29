@interface WCFinderFeedbackView : UIView <WCFinderSimpleFeedbackViewDelegate, WCFinderFeedbackReasonViewDelegate>
{
    id <WCFinderFeedbackViewDelegate> _delegate; // +0x8
    unsigned long long _section; // +0x10
    NSArray * _optionList; // +0x18
    UIButton * _backgroundMaskView; // +0x20
    UIView * _triangleView; // +0x28
    WCFinderSimpleFeedbackView * _simpleFeedbackView; // +0x30
    WCFinderFeedbackReasonView * _reasonView; // +0x38
    CGRect _anchorRect; // +0x40
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1 anchorRect:(CGRect)arg2;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setDescriptionJumpInfo:(id)arg1;
- (void)changeAnchorRect:(CGRect)arg1;
- (void)changeToFeedbackReasonView:(id)arg1;
- (void)configTitle:(id)arg1;
- (void)layoutSubview:(id)arg1 anchorRect:(CGRect)arg2;
- (void)onClickBackgroundMaskView:(id)arg1;
- (void)handleBackgroundMaskPanGesture:(id)arg1;
- (id)backgroundMaskView;
- (id)triangleView;
- (id)simpleFeedbackView;
- (id)reasonView;
- (void)onFinderSimpleFeedbackViewLikeButtonDidClick;
- (void)onFinderSimpleFeedbackViewDislikeButtonDidClick;
- (void)onFinderSimpleFeedbackViewComplainButtonDidClick;
- (void)onFinderSimpleFeedbackViewDescriptionJumpInfoDidClick:(id)arg1;
- (void)onFinderFeedbackReasonViewShouldCloseWithSelectedReason:(id)arg1;
- (void)onFinderFeedbackReasonView:(id)arg1 didClickReason:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)section;
- (void)setSection:(unsigned long long)arg1;
- (id)optionList;
- (void)setOptionList:(id)arg1;
- (CGRect)anchorRect;
- (void)setAnchorRect:(CGRect)arg1;
- (void)setBackgroundMaskView:(id)arg1;
- (void)setTriangleView:(id)arg1;
- (void)setSimpleFeedbackView:(id)arg1;
- (void)setReasonView:(id)arg1;
- (void).cxx_destruct;
@end
