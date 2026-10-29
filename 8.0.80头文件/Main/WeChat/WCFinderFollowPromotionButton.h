@interface WCFinderFollowPromotionButton : UIView
{
    id /* block */ _onClickBlock; // +0x8
    UIImageView * _iconImageView; // +0x10
    UILabel * _titleLabel; // +0x18
    WCFinderComment * _comment; // +0x20
    NSString * _feedId; // +0x28
    long long _commentScene; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (void)handleTap;
- (void)setTitle:(id)arg1;
- (void)configureReportParams:(id)arg1 feedId:(id)arg2 commentScene:(long long)arg3;
- (id)reportParamsDict;
- (long long)commentContentType;
- (id)commentContent;
- (id /* block */)onClickBlock;
- (void)setOnClickBlock:(id /* block */)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)comment;
- (void)setComment:(id)arg1;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (long long)commentScene;
- (void)setCommentScene:(long long)arg1;
- (void).cxx_destruct;
@end
