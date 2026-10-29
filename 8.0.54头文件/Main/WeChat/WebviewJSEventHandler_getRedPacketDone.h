@interface WebviewJSEventHandler_getRedPacketDone : WebviewJSEventHandlerBase <WCRedEnvelopesGetShowResourcesCgiDelegate, WCRedEnvelopesSelectSkinViewControllerDelegate, WCRedEnvelopesConfirmShowResourcesCgiDelegate, WCRedEnvelopesDeleteResourceCgiDelegate, GetDefaultRedPacketSkinCgiDelegate>
{
    BOOL _bIsFromLoadingMoreInvalidData; // +0x8
    WCRedEnvelopesGetShowResourcesCgi * _getShowResourcesCgi; // +0x10
    WCRedEnvelopesSelectSkinViewController * _selectSkinViewController; // +0x18
    WCRedEnvelopesExpiredSkinViewController * _expiredSkinViewController; // +0x20
    WCRedEnvelopesControlData * _m_data; // +0x28
    JSEvent * _m_event; // +0x30
    WCRedEnvelopesConfirmShowResourcesCgi * _confirmShowResourcesCgi; // +0x38
    NSString * _selectedPacketId; // +0x40
    WCRedEnvelopesDeleteResourceCgi * _deleteShowResourceCgi; // +0x48
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)startGetDefualtRedPacketSkinCgi;
- (void)onWCRedEnvelopesGetShowResourcesCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCRedEnvelopesGetShowResourcesCgiResponseOK:(id)arg1 type:(unsigned int)arg2;
- (void)handleSourceListTypeInvalidResponse:(id)arg1;
- (void)pushWCRedEnvelopesExpiredSkinViewController;
- (void)appendShowSourceResp:(id)arg1;
- (void)OnWCRedEnvelopesSelectSkinViewControllerBack;
- (void)OnWCRedEnvelopesSelectSkinViewControllerConfirm:(id)arg1;
- (void)onWCRedEnvelopesConfirmShowResourcesCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCRedEnvelopesConfirmShowResourcesCgiResponseOK:(id)arg1;
- (void)OnWCRedEnvelopesSelectSkinViewControllerDelete:(id)arg1;
- (void)onWCRedEnvelopesDeleteResourceCgiResponseOK:(id)arg1;
- (BOOL)isHbEnvelopSourceValid:(id)arg1;
- (void)onWCRedEnvelopesDeleteResourceCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnWCRedEnvelopesSelectSkinViewControllerClickExpiredEntry;
- (void)OnWCRedEnvelopesExpireSkinGetNextPage:(id)arg1;
- (void)OnWCRedEnvelopesExpiredSkinViewControllerBack;
- (void)OnWCRedEnvelopesExpiredSkinViewControllerDelete:(id)arg1;
- (id)getShowResourcesCgi;
- (void)setGetShowResourcesCgi:(id)arg1;
- (id)selectSkinViewController;
- (void)setSelectSkinViewController:(id)arg1;
- (id)expiredSkinViewController;
- (void)setExpiredSkinViewController:(id)arg1;
- (id)m_data;
- (void)setM_data:(id)arg1;
- (id)m_event;
- (void)setM_event:(id)arg1;
- (id)confirmShowResourcesCgi;
- (void)setConfirmShowResourcesCgi:(id)arg1;
- (id)selectedPacketId;
- (void)setSelectedPacketId:(id)arg1;
- (id)deleteShowResourceCgi;
- (void)setDeleteShowResourceCgi:(id)arg1;
- (BOOL)bIsFromLoadingMoreInvalidData;
- (void)setBIsFromLoadingMoreInvalidData:(BOOL)arg1;
- (void).cxx_destruct;
@end

