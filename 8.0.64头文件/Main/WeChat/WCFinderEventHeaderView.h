@interface WCFinderEventHeaderView : UICollectionReusableView <WCFinderFeedContentTextClickActionDelegate, RichTextLayoutDelegate, ILinkEventExt, WCFinderEventMiniTaskViewDelegate>
{
    BOOL _hiddenNumber; // +0x8
    id <WCFinderEventHeaderViewDelegate> _delegate; // +0x10
    UIView * _miniAppView; // +0x18
    FinderEventInfo * _eventInfo; // +0x20
    UIView * _initiatorView; // +0x28
    WCFinderHeadImageView * _avatarImageView; // +0x30
    UILabel * _nicknameLabel; // +0x38
    UILabel * _titleLabel; // +0x40
    WCFinderFittingWidthRichView * _sizeableDescTextView; // +0x48
    MMUIButton * _rightArrowButton; // +0x50
    UILabel * _timeTipsLabel; // +0x58
    UIView * _descriptionContactleadLine; // +0x60
    UIView * _descriptionContactView; // +0x68
    WCFinderHeadImageView * _descriptionContactImageView; // +0x70
    UILabel * _descriptionContactLabel; // +0x78
    MMWebImageView * _miniAppIconView; // +0x80
    UILabel * _miniAppNameLabel; // +0x88
    UIImageView * _rightArrowIconView; // +0x90
    UILabel * _memberNumTipsLabel; // +0x98
    MMUIButton * _joinButton; // +0xa0
    WCFinderEventMiniTaskView * _miniTaskContainer; // +0xa8
}
+ (double)heightWithEventInfo:(id)arg1 andViewWidth:(double)arg2;
+ (CGSize)joinButtonSizeWithEventInfo:(id)arg1;
+ (id)getDescriptionWithEventInfo:(id)arg1;
+ (BOOL)shouldShowExpiredTimeWithEventInfo:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)prepareForReuse;
- (void)updateLayout;
- (void)layoutSubviews;
- (void)updateWithEventInfo:(id)arg1 showJoinButton:(BOOL)arg2;
- (void)updateJoinButtonWithEventInfo:(id)arg1;
- (id)getMemberNumberTextWithEventInfo:(id)arg1;
- (void)setToNormalMode;
- (BOOL)hasShowMoreDescriptionButton;
- (BOOL)hasShowDescriptionContact;
- (BOOL)hasShowJoinButton;
- (id)initiatorView;
- (id)avatarImageView;
- (id)nicknameLabel;
- (id)titleLabel;
- (id)sizeableDescTextView;
- (id)rightArrowButton;
- (id)timeTipsLabel;
- (id)descriptionContactleadLine;
- (id)descriptionContactView;
- (id)descriptionContactImageView;
- (id)descriptionContactLabel;
- (id)miniAppView;
- (id)miniAppIconView;
- (id)miniAppNameLabel;
- (id)rightArrowIconView;
- (id)memberNumTipsLabel;
- (id)joinButton;
- (id)miniTaskContainer;
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 richTextView:(id)arg3;
- (void)onTextClicked:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)eventMiniTaskEntranceDidClick;
- (void)onClickAuthorInfoAction;
- (void)displayMoreDescription;
- (void)onClickDescriptionContactAction;
- (void)joinButtonClicked;
- (void)openEventMiniApp;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setMiniAppView:(id)arg1;
- (BOOL)hiddenNumber;
- (void)setHiddenNumber:(BOOL)arg1;
- (id)eventInfo;
- (void)setEventInfo:(id)arg1;
- (void)setInitiatorView:(id)arg1;
- (void)setAvatarImageView:(id)arg1;
- (void)setNicknameLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSizeableDescTextView:(id)arg1;
- (void)setRightArrowButton:(id)arg1;
- (void)setTimeTipsLabel:(id)arg1;
- (void)setDescriptionContactleadLine:(id)arg1;
- (void)setDescriptionContactView:(id)arg1;
- (void)setDescriptionContactImageView:(id)arg1;
- (void)setDescriptionContactLabel:(id)arg1;
- (void)setMiniAppIconView:(id)arg1;
- (void)setMiniAppNameLabel:(id)arg1;
- (void)setRightArrowIconView:(id)arg1;
- (void)setMemberNumTipsLabel:(id)arg1;
- (void)setJoinButton:(id)arg1;
- (void)setMiniTaskContainer:(id)arg1;
- (void).cxx_destruct;
@end
