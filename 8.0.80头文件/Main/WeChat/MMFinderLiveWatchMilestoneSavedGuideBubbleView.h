@interface MMFinderLiveWatchMilestoneSavedGuideBubbleView : UIView
{
    id <MMFinderLiveWatchMilestoneSavedGuideBubbleViewDelegate> _delegate; // +0x8
    id /* block */ _onDismissBlock; // +0x10
    UIImageView * _checkIconView; // +0x18
    UILabel * _savedLabel; // +0x20
    UILabel * _sendToCommentLabel; // +0x28
    UIImageView * _arrowIconView; // +0x30
    UIButton * _tapButton; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (void)layoutSubviews;
- (void)showInView:(id)arg1 aboveBottomButtonsTop:(double)arg2;
- (void)dismissAnimated:(BOOL)arg1;
- (void)autoDismiss;
- (void)onTapAction;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)onDismissBlock;
- (void)setOnDismissBlock:(id /* block */)arg1;
- (id)checkIconView;
- (void)setCheckIconView:(id)arg1;
- (id)savedLabel;
- (void)setSavedLabel:(id)arg1;
- (id)sendToCommentLabel;
- (void)setSendToCommentLabel:(id)arg1;
- (id)arrowIconView;
- (void)setArrowIconView:(id)arg1;
- (id)tapButton;
- (void)setTapButton:(id)arg1;
- (void).cxx_destruct;
@end
