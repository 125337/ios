@interface WCFinderFansProfileViewController : MMUIHalfScreenViewController <WCFinderHalfProfileInfoViewDelegate, WCFinderHeadImageViewDelegate, WCFinderHalfProfileInteractionInfoViewDelegate>
{
    BOOL _hasShowFinderView; // +0x70
    BOOL _hasFetchedPreviewData; // +0x71
    id <WCFinderFansProfileViewControllerDelegate> _fansProfileDelegate; // +0x78
    WCFinderHeadImageView * _headImageView; // +0x80
    UIView * _bgInteractiveView; // +0x88
    RichTextView * _nickNameView; // +0x90
    RichTextView * _signatureView; // +0x98
    UIScrollView * _scrollView; // +0xa0
    UIButton * _privateMsgButton; // +0xa8
    UILabel * _sexLabel; // +0xb0
    UILabel * _cityLabel; // +0xb8
    WCFinderFansProfileParams * _params; // +0xc0
    CContact * _contact; // +0xc8
    WCFinderContact * _finderContact; // +0xd0
    WCFinderHalfProfileInfoView * _profileInfoView; // +0xd8
    NSString * _username; // +0xe0
    FinderContactExtRelationInfo * _relationInfo; // +0xe8
    WCFinderHalfProfileInteractionInfoView * _interactionView; // +0xf0
    UIView * _likePrivacyView; // +0xf8
    UIView * _likePrivacyTopSepLine; // +0x100
    WCFinderRichTextView * _likePrivacyTitleLabel; // +0x108
    WCFinderRichTextView * _likePrivacyStatusLabel; // +0x110
    UIImageView * _likePrivacyArrowImageView; // +0x118
    UIView * _blacklistStatusView; // +0x120
    UIView * _blacklistStatusTopSepLine; // +0x128
    UIImageView * _blacklistIconView; // +0x130
    UILabel * _blacklistStatusLabel; // +0x138
    MMUIButton * _exitButton; // +0x140
    MMUIButton * _moreButton; // +0x148
    FinderBlackListInfo * _blacklistInfo; // +0x150
    WCFinderGetContactListCGI * _contactCGI; // +0x158
}
- (id)initWithParams:(id)arg1;
- (unsigned long long)profileRefScene;
- (id)comment;
- (id)listenBuffer;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)isHideCloseButton;
- (void)viewWillLayoutSubviews;
- (void)layoutTextSubviews;
- (void)reportPrivateMsgButtonExpouse;
- (void)_updateUI;
- (id)fansProfileReportParamsWithPreviewData:(id)arg1;
- (void)updateFansContact;
- (void)updateContentHeightWithContact:(id)arg1 animation:(BOOL)arg2;
- (void)updateContentWithContact:(id)arg1;
- (void)updateMoreBtnAndLikePrivacySection;
- (void)layoutUI;
- (id)headImageView;
- (BOOL)canShowMainPage;
- (BOOL)isShowMainPage;
- (void)setUpUI;
- (void)tapScrollView:(id)arg1;
- (void)clickComplaintOrPrivacySettingAction;
- (void)clickPrivateMsgAction;
- (void)clickExitButton;
- (void)clickMoreButton;
- (BOOL)shouldShowContentRecommendationSetting;
- (void)clickContentRecommendationSetting;
- (void)setupBlacklistStatusView;
- (BOOL)supportsBlacklistForAllIdentity;
- (BOOL)shouldShowBlacklistStatus;
- (void)addToBlackList;
- (void)removeFromBlackList;
- (void)modifyBlacklist:(BOOL)arg1;
- (void)updateBlacklistStatusLayoutWithTop:(double)arg1;
- (id)currentWxUsername;
- (id)currentPreviewData;
- (BOOL)shouldShowHalfScreenFinderProfile;
- (void)finderHalfProfileInfoView:(id)arg1 didClickContact:(id)arg2;
- (void)interactionInfoView:(id)arg1 didTapItem:(id)arg2;
- (int)feedViewControllerScene;
- (BOOL)showAddToBlackListButton;
- (void)setContact:(id)arg1;
- (BOOL)isAuthorScene;
- (BOOL)isFromFinderMentionScene;
- (BOOL)currentSceneIsMemberQA;
- (unsigned long long)userpagePreviewScene;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)registerYReportSdk;
- (void)viewDidLayoutSubviews;
- (void)layoutScrollView;
- (void)setupLikePrivacyView;
- (void)updateLikePrivacyStatusLabel;
- (BOOL)isLikePrivacySectionForbidden;
- (void)clickLikePrivacyAction;
- (void)dismissModalVCAction;
- (id)fansProfileDelegate;
- (void)setFansProfileDelegate:(id)arg1;
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
- (id)params;
- (id)contact;
- (id)finderContact;
- (void)setFinderContact:(id)arg1;
- (id)profileInfoView;
- (void)setProfileInfoView:(id)arg1;
- (BOOL)hasShowFinderView;
- (void)setHasShowFinderView:(BOOL)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)relationInfo;
- (void)setRelationInfo:(id)arg1;
- (id)interactionView;
- (void)setInteractionView:(id)arg1;
- (id)likePrivacyView;
- (void)setLikePrivacyView:(id)arg1;
- (id)likePrivacyTopSepLine;
- (void)setLikePrivacyTopSepLine:(id)arg1;
- (id)likePrivacyTitleLabel;
- (void)setLikePrivacyTitleLabel:(id)arg1;
- (id)likePrivacyStatusLabel;
- (void)setLikePrivacyStatusLabel:(id)arg1;
- (id)likePrivacyArrowImageView;
- (void)setLikePrivacyArrowImageView:(id)arg1;
- (id)blacklistStatusView;
- (void)setBlacklistStatusView:(id)arg1;
- (id)blacklistStatusTopSepLine;
- (void)setBlacklistStatusTopSepLine:(id)arg1;
- (id)blacklistIconView;
- (void)setBlacklistIconView:(id)arg1;
- (id)blacklistStatusLabel;
- (void)setBlacklistStatusLabel:(id)arg1;
- (id)exitButton;
- (void)setExitButton:(id)arg1;
- (id)moreButton;
- (void)setMoreButton:(id)arg1;
- (BOOL)hasFetchedPreviewData;
- (void)setHasFetchedPreviewData:(BOOL)arg1;
- (id)blacklistInfo;
- (void)setBlacklistInfo:(id)arg1;
- (id)contactCGI;
- (void)setContactCGI:(id)arg1;
- (void).cxx_destruct;
@end
