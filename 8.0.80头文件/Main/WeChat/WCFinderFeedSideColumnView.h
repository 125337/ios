@interface WCFinderFeedSideColumnView : UIView
{
    id <WCFinderFeedSideColumnViewDelegate> _delegate; // +0x8
    NSArray * _contentVMList; // +0x10
    UIView * _blurView; // +0x18
    UILabel * _titleLabel; // +0x20
    UIButton * _closeButton; // +0x28
    NSMutableArray * _feedViews; // +0x30
    CAShapeLayer * _maskLayer; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setContentVMList:(id)arg1;
- (void)sizeToFit;
- (double)maxHeight;
- (void)_onClickCloseButton;
- (void)layoutSubviews;
- (void)_onClickItemView:(id)arg1;
- (void)animateUnDisplayThenRemove;
- (void)animateDisplay;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentVMList;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)feedViews;
- (void)setFeedViews:(id)arg1;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg1;
- (void).cxx_destruct;
@end
