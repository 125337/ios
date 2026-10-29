@interface WCFinderMsgSessionNicknameTailView : UIView <MMWebImageViewDelegate>
{
    WCFinderContact * _contact; // +0x8
    id <WCFinderMsgSessionNicknameTailViewDelegate> _delegate; // +0x10
    WCFinderAuthInfoIconView * _authInfoIconView; // +0x18
    MMFinderLiveGlobalRankSignView * _rankSignView; // +0x20
    MMFinderLiveFansGroupSignView * _fansGroupSignView; // +0x28
    WCFinderMsgSessionBadgeLabel * _badgeLabel; // +0x30
    WCFinderMsgSessionUserTagLabel * _userTagLabel; // +0x38
    NSMutableArray * _contentViewItems; // +0x40
    WCFinderAuthInfo * _authInfo; // +0x48
}
+ (id)createNewTailView;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)setContact:(id)arg1;
- (void)setAuthInfo:(id)arg1;
- (void)updateContactExtInfo:(id)arg1;
- (void)layoutSubviews;
- (void)_initializeSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)onLoadImageOK:(id)arg1;
- (void)upateAuthInfoViewDisplay;
- (id)contact;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)authInfoIconView;
- (void)setAuthInfoIconView:(id)arg1;
- (id)rankSignView;
- (void)setRankSignView:(id)arg1;
- (id)fansGroupSignView;
- (void)setFansGroupSignView:(id)arg1;
- (id)badgeLabel;
- (void)setBadgeLabel:(id)arg1;
- (id)userTagLabel;
- (void)setUserTagLabel:(id)arg1;
- (id)contentViewItems;
- (void)setContentViewItems:(id)arg1;
- (id)authInfo;
- (void).cxx_destruct;
@end

