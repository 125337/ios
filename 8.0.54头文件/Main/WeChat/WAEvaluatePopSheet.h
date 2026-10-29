@interface WAEvaluatePopSheet : MMObject
{
    NSString * _appId; // +0x8
    NSString * _weAppName; // +0x10
    MMUIView * _interactView; // +0x18
    WAProfileRatingView * _ratingView; // +0x20
    MMUIView * _evaluteWhiteView; // +0x28
    MMUIView * _wechatLogoView; // +0x30
    MMUILabel * _descLabel; // +0x38
    MMUILabel * _ratingTipsLabel; // +0x40
    MMUIButton * _commitButton; // +0x48
    BOOL _bScoreChanged; // +0x50
    id <WAEvaluatePopSheetDelegate> _delegate; // +0x58
    UIView * _parentView; // +0x60
}
- (id)initWithAppid:(id)arg1 WeAppName:(id)arg2;
- (void)_releaseViews;
- (void)relayoutWhenResize;
- (void)resetEvaluateViewCornerRadius;
- (double)evaluateViewWidth;
- (void)showInView:(id)arg1;
- (void)dismissWithWithoutAnimation;
- (void)genEvaluateWhiteView;
- (id)genWechatLogoView;
- (void)addInteractView;
- (void)onEvaluateScoreChanged:(id)arg1;
- (id)getInviteTextWithTruncateWithFont:(id)arg1;
- (void)onCloseButtonClick;
- (void)onInteractViewTap;
- (void)onCommitButtonClicked;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)parentView;
- (void)setParentView:(id)arg1;
- (void).cxx_destruct;
@end

