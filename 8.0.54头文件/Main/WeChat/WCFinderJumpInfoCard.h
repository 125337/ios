@interface WCFinderJumpInfoCard : UIView <MMWebImageViewDelegate, WCFinderJumpInfoViewProtocol>
{
    int _showPosition; // +0x8
    id <WCFinderJumpInfoCardDelegate> _delegate; // +0x10
    WCFinderJumpInfo * _jumpInfo; // +0x18
    FinderJumpInfo_Style * _jumpInfoStyle; // +0x20
    FinderJumpInfo_CardStyle * _cardConfig; // +0x28
    unsigned long long _cardStyle; // +0x30
    MMWebImageView * _iconImageView; // +0x38
    UILabel * _titleLabel; // +0x40
    UILabel * _descLabel; // +0x48
    UILabel * _infoLabel; // +0x50
    MMWebImageView * _infoIconView; // +0x58
    MMUIButton * _actionButton; // +0x60
    double _maxWidth; // +0x68
    MMTimer * _timer; // +0x70
    unsigned long long _currentUIStyle; // +0x78
    CGRect _titleFrame; // +0x80
}
- (id)initWithCardStyle:(unsigned long long)arg1;
- (void)dealloc;
- (void)changeToAnimationStartStateWithTitleFrame:(CGRect)arg1 animated:(BOOL)arg2;
- (void)changeToAnimationFinishState;
- (void)setUIStyle:(unsigned long long)arg1;
- (void)updateActionButtonStyle;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (id)jumpInfo;
- (int)showPosition;
- (void)changeToShow:(BOOL)arg1;
- (void)showJumpInfoViewForCompletePlayIfNeeded;
- (void)startExposeAction;
- (void)endExposeAction;
- (void)onActionButtonDidClick;
- (void)updateUIInfo;
- (int)buttonType;
- (int)imageSizeType;
- (void)layoutUI;
- (void)notifyToShow;
- (double)maxWidth;
- (id)iconImageView;
- (id)titleLabel;
- (id)descLabel;
- (id)infoLabel;
- (id)actionButton;
- (id)infoIconView;
- (void)onLoadImageOK:(id)arg1;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setJumpInfo:(id)arg1;
- (void)setShowPosition:(int)arg1;
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
- (id)timer;
- (void)setTimer:(id)arg1;
- (CGRect)titleFrame;
- (void)setTitleFrame:(CGRect)arg1;
- (unsigned long long)currentUIStyle;
- (void)setCurrentUIStyle:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

