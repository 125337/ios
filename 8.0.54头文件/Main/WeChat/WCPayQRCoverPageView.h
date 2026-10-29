@interface WCPayQRCoverPageView : UIView
{
    BOOL _bottomCorner; // +0x8
    BOOL _hasMchQrcode; // +0x9
    int _saveNotifyType; // +0xc
    CoverInfo * _coverInfo; // +0x10
    UIView * _contentView; // +0x18
    UIView * _topbarView; // +0x20
    UIImageView * _topLeftIcon; // +0x28
    UILabel * _topLeftTitle; // +0x30
    UIImageView * _centerIcon; // +0x38
    UILabel * _centerDescription; // +0x40
    UIView * _footerView; // +0x48
    UIButton * _firstButton; // +0x50
    UIButton * _secondButton; // +0x58
    WCPayCss * _css; // +0x60
    id <WCPayQRCoverPageViewDelegate> _delegate; // +0x68
    double _applyMashV2DesclabelHeight; // +0x70
}
- (id)initWithCoverInfo:(id)arg1 delegate:(id)arg2;
- (void)updateCoverInfo:(id)arg1 hasMchQrcode:(BOOL)arg2;
- (void)layoutSubviews;
- (void)updateContentView;
- (void)updateTopBarView;
- (void)updateTopLeftIcon;
- (void)updateTopLeftTitle;
- (void)updateCenterIcon;
- (void)updateCenterDescription;
- (id)generatePointView;
- (void)updateFooterView;
- (void)updateFirstButton;
- (void)updateSecondButton;
- (BOOL)shouldShowApplyMaskV2;
- (double)getDesvLabelHeight;
- (void)onClickFirstButton;
- (void)onClickSecondButton;
- (int)saveNotifyType;
- (void)setSaveNotifyType:(int)arg1;
- (BOOL)bottomCorner;
- (void)setBottomCorner:(BOOL)arg1;
- (BOOL)hasMchQrcode;
- (void)setHasMchQrcode:(BOOL)arg1;
- (id)coverInfo;
- (void)setCoverInfo:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)topbarView;
- (void)setTopbarView:(id)arg1;
- (id)topLeftIcon;
- (void)setTopLeftIcon:(id)arg1;
- (id)topLeftTitle;
- (void)setTopLeftTitle:(id)arg1;
- (id)centerIcon;
- (void)setCenterIcon:(id)arg1;
- (id)centerDescription;
- (void)setCenterDescription:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)firstButton;
- (void)setFirstButton:(id)arg1;
- (id)secondButton;
- (void)setSecondButton:(id)arg1;
- (id)css;
- (void)setCss:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)applyMashV2DesclabelHeight;
- (void)setApplyMashV2DesclabelHeight:(double)arg1;
- (void).cxx_destruct;
@end

