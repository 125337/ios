@interface WCFinderVideoProducerBaseSheetView : UIView
{
    id <WCFinderVideoProducerBaseSheetViewDelegate> _delegate; // +0x8
    UIView * _topView; // +0x10
    UIButton * _leftButton; // +0x18
    UIButton * _rightButton; // +0x20
    UIView * _contentView; // +0x28
    UIView * _bottomView; // +0x30
    WCFinderVideoProducerBaseSheetViewConfig * _viewConfig; // +0x38
    UIView * _containerView; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 viewConfig:(id)arg2;
- (void)_loadViewConfig:(id)arg1;
- (double)getContentHeight;
- (void)_onClickLeftButton;
- (void)_onClickRightButton;
- (void)_relayoutViews;
- (void)layoutSubviews;
- (void)_initView;
- (void)_initContainerView;
- (void)_initTopBarView;
- (void)_initBottomView;
- (void)_initContentView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)topView;
- (void)setTopView:(id)arg1;
- (id)leftButton;
- (void)setLeftButton:(id)arg1;
- (id)rightButton;
- (void)setRightButton:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)bottomView;
- (void)setBottomView:(id)arg1;
- (id)viewConfig;
- (void)setViewConfig:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (void).cxx_destruct;
@end
