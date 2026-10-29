@interface WCFinderContactListCell : MMMultiMenuTableViewCell
{
    id <WCFinderContactListCellDelegate> _delegate; // +0x40
    WCFinderHeadImageView * _headImageView; // +0x48
    UIImageView * _liveCircle; // +0x50
    UILabel * _liveTipsLabel; // +0x58
    UILabel * _nickName; // +0x60
    WCFinderAuthInfoIconView * _authIconView; // +0x68
    UILabel * _brandTipsLabel; // +0x70
    UILabel * _descLabel; // +0x78
    UIView * _separator; // +0x80
    WCFinderContact * _contact; // +0x88
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)onRemoveAllMenu;
- (void)setupMenu;
- (void)updateWithContact:(id)arg1;
- (void)drawNormalSeparator;
- (void)removeSeparator;
- (void)onLiveCircleDidClick;
- (id)nickName;
- (id)headImageView;
- (id)liveCircle;
- (id)liveTipsLabel;
- (id)authIconView;
- (id)brandTipsLabel;
- (id)descLabel;
- (id)separator;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setHeadImageView:(id)arg1;
- (void)setLiveCircle:(id)arg1;
- (void)setLiveTipsLabel:(id)arg1;
- (void)setNickName:(id)arg1;
- (void)setAuthIconView:(id)arg1;
- (void)setBrandTipsLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setSeparator:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (void).cxx_destruct;
@end

