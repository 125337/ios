@interface CBTWeAppAuthViewModel : CBTAuthBaseViewModel <WCAccountBindPhoneControlLogicDelegate>
{
    BOOL _activeSnapshotPersisted; // +0x8
    BOOL _isRequestingMobileTicket; // +0x9
    NSString * _authorizeCardId; // +0x10
    id /* block */ _onDisplayStateDidChange; // +0x18
    id /* block */ _onContentDidChange; // +0x20
    NSDictionary * _statusActions; // +0x28
    WAAgentAuthCardSnapshot * _snapshot; // +0x30
    WAAgentAuthCardSession * _cachedSession; // +0x38
    WAAgentAuthCardView * _cachedRenderView; // +0x40
    CBTWeAppAuthAutoPhoneCardRequest * _autoPhoneRequest; // +0x48
    WCAccountBindPhoneControlLogic * _bindPhoneLogic; // +0x50
}
+ (id)viewModelWithCardData:(id)arg1 cardWrap:(id)arg2 delegate:(id)arg3;
+ (void)parseRightIcon:(id)arg1 intoViewModel:(id)arg2;
- (void)attachSnapshotFromExtraSaveInfoIfNeeded;
- (void)setExtraSaveInfo:(id)arg1;
- (id)generateActiveSnapshotJSONIfNeeded;
- (void)cancelActiveSessionForDeactivation;
- (void)prepareAutoPhoneCardIfNeeded;
- (void)startBindPhoneFlow;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (void)bindReportContextToSession:(id)arg1;
- (void)reportExposureIfNeeded;
- (void)configWithStorageInfo:(id)arg1;
- (void)refreshReportContextForActiveSession;
- (id)renderView;
- (id)resultCodeForStatus:(unsigned long long)arg1;
- (id)actionKeyForStatus:(unsigned long long)arg1;
- (id)getCellReuseId;
- (double)contentHeightForWidth:(double)arg1 maxHeight:(double)arg2;
- (id)buildUserInputForm;
- (id)buildAuthCardData;
- (void)reportFinishActionForActionKey:(id)arg1 userInputForm:(id)arg2;
- (void)populateTailsFromCachedSessionIfNeeded;
- (void)populateTailsFromCardType:(unsigned long long)arg1;
- (unsigned long long)statusForResultCode:(id)arg1;
- (id)authorizeCardId;
- (void)setAuthorizeCardId:(id)arg1;
- (id /* block */)onDisplayStateDidChange;
- (void)setOnDisplayStateDidChange:(id /* block */)arg1;
- (id /* block */)onContentDidChange;
- (void)setOnContentDidChange:(id /* block */)arg1;
- (id)statusActions;
- (void)setStatusActions:(id)arg1;
- (id)snapshot;
- (void)setSnapshot:(id)arg1;
- (BOOL)activeSnapshotPersisted;
- (void)setActiveSnapshotPersisted:(BOOL)arg1;
- (id)cachedSession;
- (void)setCachedSession:(id)arg1;
- (id)cachedRenderView;
- (void)setCachedRenderView:(id)arg1;
- (id)autoPhoneRequest;
- (void)setAutoPhoneRequest:(id)arg1;
- (id)bindPhoneLogic;
- (void)setBindPhoneLogic:(id)arg1;
- (BOOL)isRequestingMobileTicket;
- (void)setIsRequestingMobileTicket:(BOOL)arg1;
- (void).cxx_destruct;
@end
