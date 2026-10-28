@interface CameraScanBaseContentView : MMUIView
{
    id <CameraScanBaseContentViewDelegate> _delegate; // +0x8
    UILabel * _centerLabel; // +0x10
    UIButton * _closeButton; // +0x18
    UILabel * _infoLabel; // +0x20
    UIButton * _torchButton; // +0x28
    UILabel * _torchLabel; // +0x30
    UIView * _albumButtonWrapView; // +0x38
    CameraScanTabView * _tabView; // +0x40
}
- (id)init;
- (void)setupCenterLabel:(id)arg1;
- (void)setCenterLabelHidden:(BOOL)arg1 bAnim:(BOOL)arg2;
- (void)layoutSubviews;
- (CGSize)areaSizeAboveTabView;
- (CGPoint)areaCenterAboveTabView;
- (double)getTabViewHeight;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)centerLabel;
- (void)setCenterLabel:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)infoLabel;
- (void)setInfoLabel:(id)arg1;
- (id)torchButton;
- (void)setTorchButton:(id)arg1;
- (id)torchLabel;
- (void)setTorchLabel:(id)arg1;
- (id)albumButtonWrapView;
- (void)setAlbumButtonWrapView:(id)arg1;
- (id)tabView;
- (void)setTabView:(id)arg1;
- (void).cxx_destruct;
@end
