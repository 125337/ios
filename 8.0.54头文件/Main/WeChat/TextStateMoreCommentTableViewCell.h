@interface TextStateMoreCommentTableViewCell : UITableViewCell
{
    UILabel * _moreInfoLabel; // +0x8
    WCFinderAnimationLoadingView * _loadingView; // +0x10
    unsigned long long _moreType; // +0x18
    UIButton * _iconView; // +0x20
    UIView * _bottomView; // +0x28
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setSubMoreType:(unsigned long long)arg1 commentMoreCount:(unsigned long long)arg2 authorType:(unsigned long long)arg3;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setUpUI;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (id)moreInfoLabel;
- (void)setMoreInfoLabel:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (unsigned long long)moreType;
- (void)setMoreType:(unsigned long long)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)bottomView;
- (void)setBottomView:(id)arg1;
- (void).cxx_destruct;
@end

