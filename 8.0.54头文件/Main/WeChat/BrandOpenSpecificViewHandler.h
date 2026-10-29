@interface BrandOpenSpecificViewHandler : MMObject <VerifyPhoneDelegate>
{
    NSMutableDictionary * m_urlToViewController; // +0x8
    id <BrandOpenSpecificViewHandlerDelegate> _delegate; // +0x10
    unsigned int uiScene; // +0x18
    unsigned int uiSponsorID; // +0x1c
    NSString * nsFromWhichUrl; // +0x20
    NSString * nsPublisherName; // +0x28
    NSString * nsExtInfo; // +0x30
}
- (id)initWithDelegate:(id)arg1;
- (BOOL)canHandleViewJump:(id)arg1;
- (void)handleViewJump:(id)arg1;
- (void)loadUrlToViewControllerArray;
- (void)handleJumpURL:(id)arg1;
- (void)jumpToRecoverDataViewController;
- (void)jumpToNewFriendViewController;
- (void)jumpToAddFriendViewController:(BOOL)arg1;
- (void)jumpToSearchBrandViewController;
- (void)jumpToTimeLineViewController;
- (void)jumpToScanViewController;
- (void)jumpToSettingViewController:(id)arg1;
- (void)jumpToExposeViewController;
- (void)jumpToCardListViewController;
- (void)jumpToShareCardListViewController;
- (void)jumpToLogViewController;
- (id)nsFromWhichUrl;
- (void)setNsFromWhichUrl:(id)arg1;
- (id)nsPublisherName;
- (void)setNsPublisherName:(id)arg1;
- (unsigned int)uiScene;
- (void)setUiScene:(unsigned int)arg1;
- (id)nsExtInfo;
- (void)setNsExtInfo:(id)arg1;
- (unsigned int)uiSponsorID;
- (void)setUiSponsorID:(unsigned int)arg1;
- (void).cxx_destruct;
@end

