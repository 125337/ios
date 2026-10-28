@interface WCFinderJumpInfoCard : WCFinderJumpInfoView <MMWebImageViewDelegate>
{
    FinderJumpInfo_Style * _jumpInfoStyle; // +0x8
    FinderJumpInfo_CardStyle * _cardConfig; // +0x10
    unsigned long long _cardStyle; // +0x18
    MMWebImageView * _iconImageView; // +0x20
    UILabel * _titleLabel; // +0x28
    UILabel * _descLabel; // +0x30
    UILabel * _infoLabel; // +0x38
    MMWebImageView * _infoIconView; // +0x40
    MMUIButton * _actionButton; // +0x48
    double _maxWidth; // +0x50
    unsigned long long _currentUIStyle; // +0x58
    unsigned long long _feedExposeTimestamp; // +0x60
    unsigned long long _viewExposeTimestamp; // +0x68
    CGRect _titleFrame; // +0x70
}
- (id)initWithCardStyle:(unsigned long long)arg1;
- (void)changeToAnimationStartStateWithTitleFrame:(CGRect)arg1 animated:(BOOL)arg2;
- (void)changeToAnimationFinishState;
- (void)setUIStyle:(unsigned long long)arg1;
- (void)updateActionButtonStyle;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)changeToShow:(BOOL)arg1;
- (void)onActionButtonDidClick;
- (void)updateUIInfo;
- (int)buttonType;
- (int)imageSizeType;
- (void)layoutUI;
- (double)maxWidth;
- (id)iconImageView;
- (id)titleLabel;
- (id)descLabel;
- (id)infoLabel;
- (id)actionButton;
- (id)infoIconView;
- (void)onLoadImageOK:(id)arg1;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (id)jumpInfoStyle;
- (void)setJumpInfoStyle:(id)arg1;
- (id)cardConfig;
- (void)setCardConfig:(id)arg1;
- (unsigned long long)cardStyle;
- (void)setCardStyle:(unsigned long long)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setInfoLabel:(id)arg1;
- (void)setInfoIconView:(id)arg1;
- (void)setActionButton:(id)arg1;
- (void)setMaxWidth:(double)arg1;
- (CGRect)titleFrame;
- (void)setTitleFrame:(CGRect)arg1;
- (unsigned long long)currentUIStyle;
- (void)setCurrentUIStyle:(unsigned long long)arg1;
- (unsigned long long)feedExposeTimestamp;
- (void)setFeedExposeTimestamp:(unsigned long long)arg1;
- (unsigned long long)viewExposeTimestamp;
- (void)setViewExposeTimestamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
