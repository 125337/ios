@interface WCFinderPersonalCenterViewModel : NSObject <WCFinderContactExt, WCFinderSelfContactExt>
{
    BOOL _isCreateLivePrepareChecked; // +0x8
    BOOL _logoutCacheFlag; // +0x9
    int _refCommentScene; // +0xc
    id <WCFinderPersonalCenterViewModelDelegate> _delegate; // +0x10
    FinderNewUserPrepareResponse * _userPrepareResponse; // +0x18
    WCFinderContact * _contact; // +0x20
    NSMutableArray * _otherContacts; // +0x28
    WCFinderContactPreviewData * _previewData; // +0x30
    NSString * _refObjectid; // +0x38
    WCFinderDataItem * _fromDataItem; // +0x40
    NSString * _finderPrivateMsgTailText; // +0x48
}
- (id)init;
- (void)setContact:(id)arg1;
- (BOOL)canPost;
- (id)unAuthFinderInfo;
- (BOOL)haveFinderContact;
- (BOOL)isContactBlocked;
- (BOOL)isContactSilent;
- (BOOL)isForeignerContact;
- (BOOL)forbidenForeignerFinder;
- (BOOL)showTakePhotoForRealName;
- (id)takePhotoRealNameUrl;
- (void)setUserPrepareResponse:(id)arg1;
- (unsigned long long)getWechatUnreadMentionCount;
- (unsigned long long)getFinderUnreadMentionCount;
- (unsigned long long)getMemberUnreadMentionCount;
- (void)clearCameraRedPoint;
- (BOOL)accountLogout;
- (BOOL)isAccountFreezing;
- (id)accountLogoutUrl;
- (void)changeSelectedContact:(id)arg1;
- (void)_fetchPreviewData;
- (void)refreshPrivateMsgText;
- (void)cleanPrivateMsgText;
- (void)onFinderContactUpdate:(id)arg1;
- (void)reloadContact;
- (void)updateContactFromUserPrepare:(id)arg1 prepareFinders:(id)arg2;
- (void)onChangeSelectedFinderUsername:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)userPrepareResponse;
- (id)contact;
- (BOOL)isCreateLivePrepareChecked;
- (id)otherContacts;
- (void)setOtherContacts:(id)arg1;
- (id)previewData;
- (void)setPreviewData:(id)arg1;
- (id)refObjectid;
- (void)setRefObjectid:(id)arg1;
- (int)refCommentScene;
- (void)setRefCommentScene:(int)arg1;
- (id)fromDataItem;
- (void)setFromDataItem:(id)arg1;
- (id)finderPrivateMsgTailText;
- (void)setFinderPrivateMsgTailText:(id)arg1;
- (BOOL)logoutCacheFlag;
- (void)setLogoutCacheFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end

