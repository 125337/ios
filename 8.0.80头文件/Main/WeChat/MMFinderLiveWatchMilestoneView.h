@interface MMFinderLiveWatchMilestoneView : UIView
{
    BOOL _isAnimating; // +0x8
    BOOL _isAvatarAnimating; // +0x9
    MMFinderLiveWatchMilestoneInfo * _milestoneInfo; // +0x10
    id <MMFinderLiveWatchMilestoneViewDelegate> _delegate; // +0x18
    id /* block */ _dismissAction; // +0x20
    double _cardScale; // +0x28
    UIView * _overlayMaskView; // +0x30
    UIView * _cardView; // +0x38
    UIImageView * _cardBgImageView; // +0x40
    UILabel * _cardDateLabel; // +0x48
    UIView * _selfAvatarContainer; // +0x50
    MMHeadImageView * _selfHeadImageView; // +0x58
    UIView * _anchorAvatarContainer; // +0x60
    MMHeadImageView * _anchorHeadImageView; // +0x68
    UIImageView * _finderIconView; // +0x70
    UILabel * _finderTitleLabel; // +0x78
    UILabel * _prefixWordingLabel; // +0x80
    UILabel * _anchorNicknameLabel; // +0x88
    WCFinderAuthInfoIconView * _anchorAuthIconView; // +0x90
    UILabel * _suffixWordingLabel; // +0x98
    PAGView * _confettiPAGView; // +0xa0
    UIButton * _cancelButton; // +0xa8
    UIButton * _saveToAlbumButton; // +0xb0
    CGSize _layoutSize; // +0xb8
    CGSize _actionButtonsSize; // +0xc8
}
- (id)initWithFrame:(CGRect)arg1 milestoneInfo:(id)arg2;
- (void)setupUI;
- (id)makeActionButton:(id)arg1 icon:(id)arg2 action:(SEL)arg3;
- (double)cardWidth;
- (double)cardHeight;
- (double)avatarSize;
- (double)avatarOverlapOffset;
- (double)avatarHorizontalInset;
- (double)avatarTopOffset;
- (double)avatarToTextSpacing;
- (double)anchorAuthIconSize;
- (void)layoutAllSubviews;
- (void)layoutSubviews;
- (void)performShowAnimation;
- (void)showAnimated:(BOOL)arg1;
- (void)dismissSelf;
- (void)cancelAction:(id)arg1;
- (void)saveToAlbumAction:(id)arg1;
- (void)captureCardAndSave:(id /* block */)arg1;
- (id)milestoneInfo;
- (void)setMilestoneInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)dismissAction;
- (void)setDismissAction:(id /* block */)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (CGSize)layoutSize;
- (void)setLayoutSize:(CGSize)arg1;
- (double)cardScale;
- (void)setCardScale:(double)arg1;
- (id)overlayMaskView;
- (void)setOverlayMaskView:(id)arg1;
- (id)cardView;
- (void)setCardView:(id)arg1;
- (id)cardBgImageView;
- (void)setCardBgImageView:(id)arg1;
- (id)cardDateLabel;
- (void)setCardDateLabel:(id)arg1;
- (BOOL)isAvatarAnimating;
- (void)setIsAvatarAnimating:(BOOL)arg1;
- (id)selfAvatarContainer;
- (void)setSelfAvatarContainer:(id)arg1;
- (id)selfHeadImageView;
- (void)setSelfHeadImageView:(id)arg1;
- (id)anchorAvatarContainer;
- (void)setAnchorAvatarContainer:(id)arg1;
- (id)anchorHeadImageView;
- (void)setAnchorHeadImageView:(id)arg1;
- (id)finderIconView;
- (void)setFinderIconView:(id)arg1;
- (id)finderTitleLabel;
- (void)setFinderTitleLabel:(id)arg1;
- (id)prefixWordingLabel;
- (void)setPrefixWordingLabel:(id)arg1;
- (id)anchorNicknameLabel;
- (void)setAnchorNicknameLabel:(id)arg1;
- (id)anchorAuthIconView;
- (void)setAnchorAuthIconView:(id)arg1;
- (id)suffixWordingLabel;
- (void)setSuffixWordingLabel:(id)arg1;
- (id)confettiPAGView;
- (void)setConfettiPAGView:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)saveToAlbumButton;
- (void)setSaveToAlbumButton:(id)arg1;
- (CGSize)actionButtonsSize;
- (void)setActionButtonsSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
