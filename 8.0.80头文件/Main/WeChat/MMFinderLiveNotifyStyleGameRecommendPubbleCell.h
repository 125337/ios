@interface MMFinderLiveNotifyStyleGameRecommendPubbleCell : MMFinderLiveNotifyStyleCommentPubbleCell
{
    MMWebImageView * _imageView; // +0x8
    UILabel * _titleLabel; // +0x10
    UIImageView * _iconView; // +0x18
    MMLiveCommentGameJumpInfo * _gameJumpInfo; // +0x20
}
+ (double)horizontalMargin;
+ (CGSize)preferSizeForCellFrame:(id)arg1;
+ (double)preferDisplayDurationWithComment:(id)arg1;
- (id)initWithCellFrame:(id)arg1;
- (void)layoutUI;
- (id)gameRecommendInfo;
- (id)getGameJumpInfo;
- (id)getGamePreInjectInfo;
- (id)getGameRecommendReason;
- (long long)getGameRecommendMessageType;
- (id)getGameRecommendReportData;
- (double)rightIconLeftMargin;
- (void)didMoveToWindow;
- (void)onTap;
- (void)runCustomEnterAnimation;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)gameJumpInfo;
- (void)setGameJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end
