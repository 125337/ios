@interface WCFinderFansProfileViewController : MMUIHalfScreenViewController <WCFinderHalfProfileInfoViewDelegate, WCFinderHeadImageViewDelegate, WCFinderHalfProfileInteractionInfoViewDelegate>
{
    BOOL _showMsgButton; // +0x70
    BOOL _hasShowFinderView; // +0x71
    BOOL _hasFetchedPreviewData; // +0x72
    int _contactType; // +0x74
    id <WCFinderFansProfileViewControllerDelegate> _fansProfileDelegate; // +0x78
    unsigned long long _fromSceneType; // +0x80
    unsigned long long _profileRefScene; // +0x88
    NSString * _fansId; // +0x90
    unsigned long long _actionType; // +0x98
    unsigned long long _controlType; // +0xa0
    NSString * _providerFinderUsername; // +0xa8
    WCFinderComment * _comment; // +0xb0
    WCFinderMention * _mention; // +0xb8
    NSData * _listenBuffer; // +0xc0
    WCFinderHeadImageView * _headImageView; // +0xc8
    UIView * _bgInteractiveView; // +0xd0
    RichTextView * _nickNameView; // +0xd8
    RichTextView * _signatureView; // +0xe0
    UIScrollView * _scrollView; // +0xe8
    UIButton * _privateMsgButton; // +0xf0
    UILabel * _sexLabel; // +0xf8
    UILabel * _cityLabel; // +0x100
    CContact * _contact; // +0x108
    WCFinderContact * _finderContact; // +0x110
    WCFinderHalfProfileInfoView * _profileInfoView; // +0x118
    NSString * _sessionId; // +0x120
    NSString * _username; // +0x128
    FinderContactExtRelationInfo * _relationInfo; // +0x130
    WCFinderHalfProfileInteractionInfoView * _interactionView; // +0x138
    MMUIButton * _exitButton; // +0x140
    MMUIButton * _moreButton; // +0x148
    FinderGetContactListReq * _contactListReq; // +0x150
}
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)isHideCloseButton;
- (void)viewWillLayoutSubviews;
- (void)layoutTextSubviews;
- (void)reportPrivateMsgButtonExpouse;
- (void)updateContact:(id)arg1 actionType:(unsigned long long)arg2 comment:(id)arg3 finderContact:(id)arg4;
- (void)updatePrivateMsgContact:(id)arg1 actionType:(unsigned long long)arg2 sessionId:(id)arg3 finderContact:(id)arg4;
- (void)_updateView;
- (void)_updateUI;
- (id)fansProfileReportParamsWithPreviewData:(id)arg1;
- (void)updateFansContact;
- (void)updateContentHeightWithContact:(id)arg1 animation:(BOOL)arg2;
- (void)updateContentWithContact:(id)arg1;
- (void)updateMoreBtn;
- (void)layoutUI;
- (id)headImageView;
- (BOOL)canShowMainPage;
- (BOOL)isShowMainPage;
- (void)setUpUI;
- (void)tapScrollView:(id)arg1;
- (void)clickBlackListButtonAction;
- (void)clickPrivateMsgAction;
- (void)clickExitButton;
- (void)clickMoreButton;
- (id)currentWxUsername;
- (id)currentPreviewData;
- (void)finderHalfProfileInfoView:(id)arg1 didClickContact:(id)arg2;
- (void)interactionInfoView:(id)arg1 didTapItem:(id)arg2;
- (int)feedViewControllerScene;
- (BOOL)showAddToBlackListButton;
- (void)updateContact:(id)arg1;
- (void)updateContact:(id)arg1 mention:(id)arg2;
- (void)updateContact:(id)arg1 objectId:(unsigned long long)arg2 likeId:(unsigned long long)arg3;
- (void)updateContact:(id)arg1 objectId:(unsigned long long)arg2 comment:(id)arg3;
- (void)updateContact:(id)arg1 objectId:(unsigned long long)arg2 favId:(id)arg3;
- (void)updateContact:(id)arg1 fansId:(id)arg2;
- (void)setContact:(id)arg1;
- (void)updateContact:(id)arg1 relationInfo:(id)arg2;
- (void)updateContact:(id)arg1 contactListReq:(id)arg2;
- (BOOL)isAuthorScene;
- (BOOL)isFromFinderMentionScene;
- (BOOL)currentSceneIsMemberQA;
- (unsigned long long)userpagePreviewScene;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)registerYReportSdk;
- (void)viewDidLayoutSubviews;
- (void)layoutScrollView;
- (id)fansProfileDelegate;
- (void)setFansProfileDelegate:(id)arg1;
- (unsigned long long)fromSceneType;
- (void)setFromSceneType:(unsigned long long)arg1;
- (unsigned long long)profileRefScene;
- (void)setProfileRefScene:(unsigned long long)arg1;
- (id)fansId;
- (void)setFansId:(id)arg1;
- (BOOL)showMsgButton;
- (void)setShowMsgButton:(BOOL)arg1;
- (unsigned long long)actionType;
- (void)setActionType:(unsigned long long)arg1;
- (unsigned long long)controlType;
- (void)setControlType:(unsigned long long)arg1;
- (id)providerFinderUsername;
- (void)setProviderFinderUsername:(id)arg1;
- (int)contactType;
- (void)setContactType:(int)arg1;
- (id)comment;
- (void)setComment:(id)arg1;
- (id)mention;
- (void)setMention:(id)arg1;
- (id)listenBuffer;
- (void)setListenBuffer:(id)arg1;
- (void)setHeadImageView:(id)arg1;
- (id)bgInteractiveView;
- (void)setBgInteractiveView:(id)arg1;
- (id)nickNameView;
- (void)setNickNameView:(id)arg1;
- (id)signatureView;
- (void)setSignatureView:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)privateMsgButton;
- (void)setPrivateMsgButton:(id)arg1;
- (id)sexLabel;
- (void)setSexLabel:(id)arg1;
- (id)cityLabel;
- (void)setCityLabel:(id)arg1;
- (id)contact;
- (id)finderContact;
- (void)setFinderContact:(id)arg1;
- (id)profileInfoView;
- (void)setProfileInfoView:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (BOOL)hasShowFinderView;
- (void)setHasShowFinderView:(BOOL)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)relationInfo;
- (void)setRelationInfo:(id)arg1;
- (id)interactionView;
- (void)setInteractionView:(id)arg1;
- (id)exitButton;
- (void)setExitButton:(id)arg1;
- (id)moreButton;
- (void)setMoreButton:(id)arg1;
- (BOOL)hasFetchedPreviewData;
- (void)setHasFetchedPreviewData:(BOOL)arg1;
- (id)contactListReq;
- (void)setContactListReq:(id)arg1;
- (void).cxx_destruct;
@end
