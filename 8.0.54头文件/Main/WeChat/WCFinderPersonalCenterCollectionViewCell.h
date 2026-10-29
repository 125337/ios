@interface WCFinderPersonalCenterCollectionViewCell : UICollectionViewCell
{
    id <WCFinderPersonalCenterCollectionViewCellDelegate> _delegate; // +0x8
    MMUIButton * _cameraBtn; // +0x10
    WCFinderPersonalCenterContactData * _contactData; // +0x18
    WCFinderPersonalCenterContactView * _contactView; // +0x20
    UILabel * _createTipsLabel; // +0x28
    MMUIButton * _liveBtn; // +0x30
    UIView * _postSeparatorLine; // +0x38
    MMBadgeView * _liveRedDotLabel; // +0x40
    MMBadgeView * _cameraRedDotLabel; // +0x48
    UIView * _arrangeBottomLine; // +0x50
    WCFinderPersonalCenterSidesButton * _memberMsgBtn; // +0x58
    WCFinderPersonalCenterSidesButton * _finderMsgBtn; // +0x60
    WCFinderPersonalCenterSidesButton * _finderPrivateMsgBtn; // +0x68
    WCFinderPersonalCenterSidesButton * _creatorCenterBtn; // +0x70
}
- (id)initWithFrame:(CGRect)arg1;
- (id)finderPrepare;
- (id)contact;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)layoutElements;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (id)createTipsLabel;
- (id)createActionButton:(id)arg1 action:(SEL)arg2;
- (id)cameraBtn;
- (id)liveBtn;
- (void)setupLiveBtn:(long long)arg1;
- (id)postSeparatorLine;
- (id)liveRedDotLabel;
- (id)cameraRedDotLabel;
- (void)setupContact:(id)arg1;
- (void)applyLayout;
- (id)msgButtonAssibilityLabelWithMainString:(id)arg1 msgCount:(long long)arg2;
- (BOOL)isShowRedDot;
- (void)setupSubviews;
- (id)contactContainer;
- (void)clickMemberMsgAction;
- (void)clickMentionAction;
- (void)clickPrivateMSGAction;
- (void)clickCamera;
- (void)clickLive;
- (void)clickCreatorCenterBtn;
- (BOOL)checkAccountLogout;
- (void)reportExposeAfterSetupSubviews;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setCameraBtn:(id)arg1;
- (id)contactData;
- (void)setContactData:(id)arg1;
- (id)contactView;
- (void)setContactView:(id)arg1;
- (void)setCreateTipsLabel:(id)arg1;
- (void)setLiveBtn:(id)arg1;
- (void)setPostSeparatorLine:(id)arg1;
- (void)setLiveRedDotLabel:(id)arg1;
- (void)setCameraRedDotLabel:(id)arg1;
- (id)arrangeBottomLine;
- (void)setArrangeBottomLine:(id)arg1;
- (id)memberMsgBtn;
- (void)setMemberMsgBtn:(id)arg1;
- (id)finderMsgBtn;
- (void)setFinderMsgBtn:(id)arg1;
- (id)finderPrivateMsgBtn;
- (void)setFinderPrivateMsgBtn:(id)arg1;
- (id)creatorCenterBtn;
- (void)setCreatorCenterBtn:(id)arg1;
- (void).cxx_destruct;
@end

