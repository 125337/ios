@interface WCFinderPersonalCenterCollectionViewCell : UICollectionViewCell
{
    id <WCFinderPersonalCenterCollectionViewCellDelegate> _delegate; // +0x8
    WCFinderPersonalCenterContactData * _contactData; // +0x10
    WCFinderPersonalCenterContactView * _contactView; // +0x18
    UILabel * _createTipsLabel; // +0x20
    UIView * _arrangeBottomLine; // +0x28
    WCFinderPersonalCenterSidesButton * _memberMsgBtn; // +0x30
    WCFinderPersonalCenterSidesButton * _finderMsgBtn; // +0x38
    WCFinderPersonalCenterSidesButton * _finderPrivateMsgBtn; // +0x40
    WCFinderPersonalCenterSidesButton * _creatorCenterBtn; // +0x48
    WCFinderPersonalCenterPostActionView * _postActionView; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (id)finderPrepare;
- (id)contact;
- (id)cameraBtn;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)layoutElements;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (id)createTipsLabel;
- (id)createActionButton:(id)arg1 action:(SEL)arg2;
- (void)setCameraHandle:(id)arg1;
- (id)cameraHandle;
- (void)setLiveHandle:(id)arg1;
- (id)liveHandle;
- (void)setupContact:(id)arg1;
- (void)applyLayout;
- (id)msgButtonAssibilityLabelWithMainString:(id)arg1 msgCount:(long long)arg2;
- (BOOL)isShowRedDot;
- (void)setupSubviews;
- (id)contactContainer;
- (void)clickMemberMsgAction;
- (void)clickMentionAction;
- (void)clickPrivateMSGAction;
- (void)clickCreatorCenterBtn;
- (BOOL)checkAccountLogout;
- (void)reportExposeAfterSetupSubviews;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contactData;
- (void)setContactData:(id)arg1;
- (id)contactView;
- (void)setContactView:(id)arg1;
- (void)setCreateTipsLabel:(id)arg1;
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
- (id)postActionView;
- (void)setPostActionView:(id)arg1;
- (void).cxx_destruct;
@end
