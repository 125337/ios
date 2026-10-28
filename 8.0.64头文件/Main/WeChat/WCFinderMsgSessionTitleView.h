@interface WCFinderMsgSessionTitleView : UIView
{
    WCFinderMsgSessionBadgeGroupView * _badgeGroupView; // +0x8
    WCFinderAuthInfoIconView * _iconView; // +0x10
    MMUILabel * _titleLabel; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViewsWithTitle:(id)arg1 titleColor:(id)arg2 authInfo:(id)arg3 sessionId:(id)arg4;
- (CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)badgeGroupView;
- (void)setBadgeGroupView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
