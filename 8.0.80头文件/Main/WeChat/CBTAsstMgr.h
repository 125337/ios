@interface CBTAsstMgr : MMUserService <MMActionNotifyCommBizExt, MMServiceProtocol>
{
    BOOL _pendingSystemPopForReddot; // +0x8
    BOOL _legalAlertOpeningLink; // +0x9
    int _pendingScrollLocalId; // +0xc
    long long _pendingScrollAnswerId; // +0x10
    long long _pendingScrollSvrId; // +0x18
    CBTAsstViewController * _activeAsstVC; // +0x20
    MMFlutterInstance * _legalAlertFlutterInstance; // +0x28
    CBTAsstConfirmSheetPlugin * _legalAlertPlugin; // +0x30
    MMFlutterViewController * _legalAlertFlutterVC; // +0x38
    id /* block */ _legalAlertConfirmBlock; // +0x40
    id /* block */ _legalAlertCancelBlock; // +0x48
    long long _legalAlertPendingCopySource; // +0x50
}
- (BOOL)isReferMessageEnabled;
- (BOOL)isRecallPushTopicModeEnabled;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onGetBizId1:(long long)arg1 data:(id)arg2;
- (void)fetchLegalData;
- (void)fetchPrivateNoticeWithType:(int)arg1 titleKey:(id)arg2 contentKey:(id)arg3 userAgreedKey:(id)arg4;
- (void)fetchPrivateNoticeListAndSaveToKey:(id)arg1;
- (id)handleHomePageMenuItemClickEvent:(id)arg1 voipSessionID:(id)arg2;
- (void)handleHomePageMenuItemExposureEvent:(id)arg1;
- (void)getVoiceListAsync:(id /* block */)arg1;
- (void)updateVoiceAsync:(id)arg1 type:(int)arg2 name:(id)arg3 completion:(id /* block */)arg4;
- (void)getModelListAsync:(id /* block */)arg1;
- (void)updateModelAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)compressImageForMultimodal:(id)arg1 completion:(id /* block */)arg2;
- (void)downloadAsstImage:(id)arg1 completion:(id /* block */)arg2;
- (id)transcodeImageToJPG:(id)arg1 quality:(double)arg2;
- (BOOL)shouldShowLegalAlertWithSource:(long long)arg1;
- (long long)legalAlertCopySourceWithSource:(long long)arg1;
- (id)legalAlertTitleForCopySource:(long long)arg1;
- (id)legalAlertContentForCopySource:(long long)arg1;
- (void)showLegalAlertWithHostViewController:(id)arg1 source:(long long)arg2 confirmBlock:(id /* block */)arg3 cancelBlock:(id /* block */)arg4;
- (void)handleLegalAlertResult:(unsigned long long)arg1 hostVC:(id)arg2;
- (void)hideLegalAlert;
- (BOOL)isLegalAlertPresenting;
- (void)restoreLegalAlertViewAfterReturnFromLink;
- (id)usageNoticeKVKey;
- (void)clearUsageNoticeReadFlag;
- (long long)reportAuthorizationWinValueForCopySource:(long long)arg1;
- (long long)reportAuthorizationWinValue;
- (id)reportSessionCommonParamsWithHostVC:(id)arg1;
- (void)reportLegalAlertExposureWithHostVC:(id)arg1;
- (void)reportLegalAlertExposureWithHostVC:(id)arg1 copySource:(long long)arg2;
- (void)reportLegalAlertConfirmClickWithHostVC:(id)arg1;
- (void)reportLegalAlertConfirmClickWithHostVC:(id)arg1 copySource:(long long)arg2;
- (void)reportLegalAlertCancelClickWithHostVC:(id)arg1;
- (void)reportLegalAlertCancelClickWithHostVC:(id)arg1 copySource:(long long)arg2;
- (void)reportFullScreenLegalPageExposureWithHostVC:(id)arg1;
- (void)reportFullScreenLegalPageConfirmClickWithHostVC:(id)arg1;
- (void)reportFullScreenLegalPageCancelClickWithHostVC:(id)arg1;
- (void)reportLegalAgreedFromFullScreenLegalPage;
- (void)reportLegalAgreedFromPrivacyNoticeBubbleWithSource:(long long)arg1;
- (void)reportPrivacyNoticeBubbleExposureWithHostVC:(id)arg1;
- (void)reportPrivacyNoticeBubbleImplicitAgreeWithHostVC:(id)arg1 trigger:(long long)arg2;
- (void)reportLegalAgreedForCopySource:(long long)arg1;
- (long long)pendingScrollAnswerId;
- (void)setPendingScrollAnswerId:(long long)arg1;
- (int)pendingScrollLocalId;
- (void)setPendingScrollLocalId:(int)arg1;
- (long long)pendingScrollSvrId;
- (void)setPendingScrollSvrId:(long long)arg1;
- (BOOL)pendingSystemPopForReddot;
- (void)setPendingSystemPopForReddot:(BOOL)arg1;
- (id)activeAsstVC;
- (void)setActiveAsstVC:(id)arg1;
- (id)legalAlertFlutterInstance;
- (void)setLegalAlertFlutterInstance:(id)arg1;
- (id)legalAlertPlugin;
- (void)setLegalAlertPlugin:(id)arg1;
- (id)legalAlertFlutterVC;
- (void)setLegalAlertFlutterVC:(id)arg1;
- (BOOL)legalAlertOpeningLink;
- (void)setLegalAlertOpeningLink:(BOOL)arg1;
- (id /* block */)legalAlertConfirmBlock;
- (void)setLegalAlertConfirmBlock:(id /* block */)arg1;
- (id /* block */)legalAlertCancelBlock;
- (void)setLegalAlertCancelBlock:(id /* block */)arg1;
- (long long)legalAlertPendingCopySource;
- (void)setLegalAlertPendingCopySource:(long long)arg1;
- (void).cxx_destruct;
@end
