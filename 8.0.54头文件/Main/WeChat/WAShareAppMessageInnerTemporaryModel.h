@interface WAShareAppMessageInnerTemporaryModel : NSObject
{
    BOOL _bSpecificContact; // +0x8
    BOOL _bNoCapture; // +0x9
    BOOL _shouldUseDynamicShare; // +0xa
    BOOL _forNativeApp; // +0xb
    BOOL _waitingShare; // +0xc
    unsigned long long _shareCallType; // +0x10
    id <IWAWebViewPluginDelegate> _resultDelegate; // +0x18
    NSArray * _arrSpecificSendToContacts; // +0x20
    id _userInfo; // +0x28
    WAShareAppMessageContextModel * _shareContextModel; // +0x30
    WaReportMessageVideoActionItem * _waMessageVideoReport; // +0x38
    unsigned long long _shareImageType; // +0x40
    WAShareAppMessageCommonParamsModel * _shareCommonParamsModel; // +0x48
    NSMutableDictionary * _scrollOffset; // +0x50
}
+ (id)model;
- (unsigned long long)shareCallType;
- (void)setShareCallType:(unsigned long long)arg1;
- (id)resultDelegate;
- (void)setResultDelegate:(id)arg1;
- (BOOL)bSpecificContact;
- (void)setBSpecificContact:(BOOL)arg1;
- (BOOL)bNoCapture;
- (void)setBNoCapture:(BOOL)arg1;
- (id)arrSpecificSendToContacts;
- (void)setArrSpecificSendToContacts:(id)arg1;
- (BOOL)shouldUseDynamicShare;
- (void)setShouldUseDynamicShare:(BOOL)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)shareContextModel;
- (void)setShareContextModel:(id)arg1;
- (id)waMessageVideoReport;
- (void)setWaMessageVideoReport:(id)arg1;
- (unsigned long long)shareImageType;
- (void)setShareImageType:(unsigned long long)arg1;
- (id)shareCommonParamsModel;
- (void)setShareCommonParamsModel:(id)arg1;
- (id)scrollOffset;
- (void)setScrollOffset:(id)arg1;
- (BOOL)forNativeApp;
- (void)setForNativeApp:(BOOL)arg1;
- (BOOL)waitingShare;
- (void)setWaitingShare:(BOOL)arg1;
- (void).cxx_destruct;
@end

