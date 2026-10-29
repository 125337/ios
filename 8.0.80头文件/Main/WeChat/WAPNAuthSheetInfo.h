@interface WAPNAuthSheetInfo : WAAuthorizeSheetInfo
{
    BOOL _hidesPhoneManageEntry; // +0x8
    BOOL _showsBindWechatPhoneEntry; // +0x9
    NSString * _requestId; // +0x10
    WAPNAuthPhoneInfo * _wxPhone; // +0x18
    NSMutableArray * _customPhoneList; // +0x20
    WAPNAuthPrivacyInfo * _privacyInfoRaw; // +0x28
}
- (id)init;
- (BOOL)hasAnyPhone;
- (id)displayPhoneList;
- (id)autoAuthCandidate;
- (void)prepareForDisplay;
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (id)wxPhone;
- (void)setWxPhone:(id)arg1;
- (id)customPhoneList;
- (void)setCustomPhoneList:(id)arg1;
- (id)privacyInfoRaw;
- (void)setPrivacyInfoRaw:(id)arg1;
- (BOOL)hidesPhoneManageEntry;
- (void)setHidesPhoneManageEntry:(BOOL)arg1;
- (BOOL)showsBindWechatPhoneEntry;
- (void)setShowsBindWechatPhoneEntry:(BOOL)arg1;
- (void).cxx_destruct;
@end
