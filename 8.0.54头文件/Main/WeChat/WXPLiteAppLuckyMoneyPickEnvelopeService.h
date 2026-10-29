@interface WXPLiteAppLuckyMoneyPickEnvelopeService : NSObject <WCRedEnvelopesGetShowResourcesCgiDelegate, WCRedEnvelopesSelectSkinViewControllerDelegate, WCRedEnvelopesConfirmShowResourcesCgiDelegate>
{
    id /* block */ _luckyMoneyPickEnvelopeCallback; // +0x8
    WCRedEnvelopesGetShowResourcesCgi * _getShowResourcesCgi; // +0x10
    WCRedEnvelopesSelectSkinViewController * _selectSkinViewController; // +0x18
    WCRedEnvelopesConfirmShowResourcesCgi * _confirmShowResourcesCgi; // +0x20
    NSString * _sessionId; // +0x28
    WCRedEnvelopesDeleteResourceCgi * _deleteShowResourceCgi; // +0x30
    HbEnvelopSource * _currHbEnvelopSource; // +0x38
    MMUIViewController * _currVc; // +0x40
}
- (void)pickEnvelope:(id)arg1 callback:(id /* block */)arg2;
- (void)onWCRedEnvelopesGetShowResourcesCgiResponseOK:(id)arg1 type:(unsigned int)arg2;
- (void)onWCRedEnvelopesGetShowResourcesCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCRedEnvelopesConfirmShowResourcesCgiResponseOK:(id)arg1;
- (void)onWCRedEnvelopesConfirmShowResourcesCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnWCRedEnvelopesSelectSkinViewControllerConfirm:(id)arg1;
- (void)OnWCRedEnvelopesSelectSkinViewControllerBack;
- (void)OnWCRedEnvelopesSelectSkinViewControllerCheckAndUseDone;
- (void)OnWCRedEnvelopesSelectSkinViewControllerClickExpiredEntry;
- (void)OnWCRedEnvelopesSelectSkinViewControllerDelete:(id)arg1;
- (void)OnWCRedEnvelopesSelectSkinViewControllerNeedRefresh;
- (id)dictionaryFromObject:(id)arg1;
- (id /* block */)luckyMoneyPickEnvelopeCallback;
- (void)setLuckyMoneyPickEnvelopeCallback:(id /* block */)arg1;
- (id)getShowResourcesCgi;
- (void)setGetShowResourcesCgi:(id)arg1;
- (id)selectSkinViewController;
- (void)setSelectSkinViewController:(id)arg1;
- (id)confirmShowResourcesCgi;
- (void)setConfirmShowResourcesCgi:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)deleteShowResourceCgi;
- (void)setDeleteShowResourceCgi:(id)arg1;
- (id)currHbEnvelopSource;
- (void)setCurrHbEnvelopSource:(id)arg1;
- (id)currVc;
- (void)setCurrVc:(id)arg1;
- (void).cxx_destruct;
@end

