@interface WCFinderFeedLikeMilestoneView : UIView
{
    BOOL _isAnimating; // +0x8
    BOOL _doingAvatarsAnimation; // +0x9
    int _commentScene; // +0xc
    WCFinderFeedLikeMilestoneInfo * _milestoneInfo; // +0x10
    id <WCFinderFeedLikeMilestoneViewDelegate> _delegate; // +0x18
    UIImage * _authorAvatarThumbImage; // +0x20
    id /* block */ _dismissAction; // +0x28
    unsigned long long _unExposeType; // +0x30
    double _layoutWidth; // +0x38
    UIView * _cardContainerView; // +0x40
    UIImageView * _finderIconViewInCard; // +0x48
    UILabel * _finderTitleLabelInCard; // +0x50
    UILabel * _likeDateLabelInCard; // +0x58
    UIView * _selfAvatarViewInCard; // +0x60
    MMHeadImageView * _imageViewForSelfAvatar; // +0x68
    UIView * _authorAvatarViewInCard; // +0x70
    MMHeadImageView * _imageViewForAuthorAvatar; // +0x78
    UIImageView * _bgImageViewInCard; // +0x80
    WCFinderSizingRichTextView * _likeTypeLabelInCard; // +0x88
    UIImageView * _authIconViewInCard; // +0x90
    WCFinderSizingRichTextView * _likeCountLabelInCard; // +0x98
    WCFinderRichTextView * _bottomLabelInCard; // +0xa0
    UIButton * _cancelButton; // +0xa8
    UIButton * _saveToAlbumButton; // +0xb0
    PAGView * _celebratePAGView; // +0xb8
    UIView * _bgMaskView; // +0xc0
    CGSize _bottomBtnsSize; // +0xc8
}
- (id)initWithFrame:(CGRect)arg1 milestoneInfo:(id)arg2;
- (void)setupUI;
- (id)createButtonWithTitle:(id)arg1 icon:(id)arg2 action:(SEL)arg3;
- (void)adjustUILayout;
- (void)layoutSubviews;
- (double)getCardContainerWidth;
- (double)getCardContainerHeight;
- (double)getFinderIconWH;
- (double)getAvatarsWH;
- (double)getAvatarsMixSpacing;
- (double)getAuthIconWH;
- (double)getMaxWidthForLikeTypeLabel;
- (double)getLikeTypeAndCountVerMargin;
- (double)getAuthorAvatarAndLikeTypeVerMargin;
- (double)getTopMarginForAuthorAvatar;
- (double)getDesHorMarginForAvatars;
- (double)getFontSizeForTopOrBottomLabelsInCard;
- (double)getFontSizeForLikeTypeLabelInCard;
- (double)getFontSizeForLikeCountLabelInCard;
- (void)doShowCardAnimation;
- (void)doShowExperienceSpeedModeAnimation;
- (void)dismissSelf;
- (void)generateCardImageAndSaveToAlbum:(id /* block */)arg1;
- (void)cancelAction:(id)arg1;
- (void)saveToAlbumAction:(id)arg1;
- (void)showAnimated:(BOOL)arg1;
- (void)resetUIViewState;
- (id)commonReportParams;
- (id)milestoneInfo;
- (void)setMilestoneInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)authorAvatarThumbImage;
- (void)setAuthorAvatarThumbImage:(id)arg1;
- (id /* block */)dismissAction;
- (void)setDismissAction:(id /* block */)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (unsigned long long)unExposeType;
- (void)setUnExposeType:(unsigned long long)arg1;
- (double)layoutWidth;
- (void)setLayoutWidth:(double)arg1;
- (id)cardContainerView;
- (void)setCardContainerView:(id)arg1;
- (id)finderIconViewInCard;
- (void)setFinderIconViewInCard:(id)arg1;
- (id)finderTitleLabelInCard;
- (void)setFinderTitleLabelInCard:(id)arg1;
- (id)likeDateLabelInCard;
- (void)setLikeDateLabelInCard:(id)arg1;
- (BOOL)doingAvatarsAnimation;
- (void)setDoingAvatarsAnimation:(BOOL)arg1;
- (id)selfAvatarViewInCard;
- (void)setSelfAvatarViewInCard:(id)arg1;
- (id)imageViewForSelfAvatar;
- (void)setImageViewForSelfAvatar:(id)arg1;
- (id)authorAvatarViewInCard;
- (void)setAuthorAvatarViewInCard:(id)arg1;
- (id)imageViewForAuthorAvatar;
- (void)setImageViewForAuthorAvatar:(id)arg1;
- (id)bgImageViewInCard;
- (void)setBgImageViewInCard:(id)arg1;
- (id)likeTypeLabelInCard;
- (void)setLikeTypeLabelInCard:(id)arg1;
- (id)authIconViewInCard;
- (void)setAuthIconViewInCard:(id)arg1;
- (id)likeCountLabelInCard;
- (void)setLikeCountLabelInCard:(id)arg1;
- (id)bottomLabelInCard;
- (void)setBottomLabelInCard:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)saveToAlbumButton;
- (void)setSaveToAlbumButton:(id)arg1;
- (CGSize)bottomBtnsSize;
- (void)setBottomBtnsSize:(CGSize)arg1;
- (id)celebratePAGView;
- (void)setCelebratePAGView:(id)arg1;
- (id)bgMaskView;
- (void)setBgMaskView:(id)arg1;
- (void).cxx_destruct;
@end
