@interface WCFinderMSActionToolBarCell : WCFinderMSActivityBaseCell <WCFinderFeedContentVMExt, WCFinderDataItemExt>
{
    UIView * _progressView; // +0x8
    CAShapeLayer * _ovalShapeLayer; // +0x10
    UILabel * _tipsLabel; // +0x18
    UIStackView * _normalStackView; // +0x20
    UILabel * _timeLabel; // +0x28
    UIImageView * _stickyTopIcon; // +0x30
    MMUIButton * _moreButton; // +0x38
    UIStackView * _actionStackView; // +0x40
    MMUIButton * _likeButton; // +0x48
    MMUIButton * _commentButton; // +0x50
}
+ (id)cellIdentifier;
+ (CGSize)calculateDisplaySize:(CGSize)arg1 forVM:(id)arg2 cellIdentifier:(id)arg3 showSceneIntroduce:(BOOL)arg4;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupUploadingStackView;
- (void)setupNormalStackView;
- (void)setupActionStackView;
- (id)createAcitonButton:(id)arg1 iconSize:(double)arg2 iconColor:(id)arg3 action:(SEL)arg4;
- (void)prepareForReuse;
- (void)setupLayout;
- (void)onContentVMChanged;
- (void)updateProgress:(double)arg1;
- (void)onClickLike;
- (void)onClickComment;
- (void)onClickMore;
- (void)onFeedContent:(id)arg1 favDataChanged:(id)arg2;
- (void)onFeedContent:(id)arg1 commentDataChanged:(id)arg2;
- (id)favCount:(id)arg1;
- (id)commentCount:(id)arg1;
- (void)onLongPress:(id)arg1;
- (void)onFinderDataItemPostProgressWithTid:(id)arg1 progress:(id)arg2;
- (void)onFeedContentStickyTopStatueChanged:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (id)ovalShapeLayer;
- (void)setOvalShapeLayer:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)normalStackView;
- (void)setNormalStackView:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)stickyTopIcon;
- (void)setStickyTopIcon:(id)arg1;
- (id)moreButton;
- (void)setMoreButton:(id)arg1;
- (id)actionStackView;
- (void)setActionStackView:(id)arg1;
- (id)likeButton;
- (void)setLikeButton:(id)arg1;
- (id)commentButton;
- (void)setCommentButton:(id)arg1;
- (void).cxx_destruct;
@end
