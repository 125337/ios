@interface WAAgentAuthCardFlutterPlugin : NSObject <WAAgentAuthCardExpiredNotifying, CountryCodePickerDelegate, MMFlutterPlugin>
{
    BOOL _audioPlaying; // +0x8
    FlutterMethodChannel * _channel; // +0x10
    NSMutableDictionary * _facePendingActions; // +0x18
    NSMutableArray * _pendingGatewayRequests; // +0x20
    WAAuthCardOnceResult * _pendingAreaCodeResult; // +0x28
}
+ (id)actionResultJsonWithStatus:(id)arg1 errMsg:(id)arg2;
- (id)init;
- (void)dealloc;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)cancelAllPhoneNumberPendingRequests;
- (void)handleMethodCall:(id)arg1 result:(id /* block */)arg2;
- (void)handleGetAuthCardData:(id)arg1 result:(id /* block */)arg2;
- (BOOL)isFlutterRenderableType:(unsigned long long)arg1;
- (void)handleUserAction:(id)arg1 result:(id /* block */)arg2;
- (void)handleAcceptForSession:(id)arg1 cardId:(id)arg2 once:(id)arg3;
- (void)handleFaceAuthAcceptForSession:(id)arg1 cardId:(id)arg2 once:(id)arg3;
- (void)resolveFacePendingActionForCardId:(id)arg1 cardStatus:(unsigned long long)arg2;
- (void)failAllFacePendingActionsWithErrMsg:(id)arg1;
- (void)handleRegisterPhoneNumberAuthHost:(id)arg1 result:(id /* block */)arg2;
- (void)handleUnregisterPhoneNumberAuthHost:(id)arg1 result:(id /* block */)arg2;
- (void)handleFetchPhoneGatewayResponses:(id)arg1 result:(id /* block */)arg2;
- (void)handleChoosePhoneAreaCode:(id)arg1 result:(id /* block */)arg2;
- (void)handleOpenPhoneWebView:(id)arg1 result:(id /* block */)arg2;
- (void)CountryCodePickerDidPickCountryCode:(id)arg1;
- (void)CountryCodePickerQuitWithoutPick;
- (void)handlePlayTemplateAudio:(id)arg1 result:(id /* block */)arg2;
- (void)stopTemplateAudioIfNeeded;
- (void)handleOpenWeApp:(id)arg1 result:(id /* block */)arg2;
- (void)notifyAuthCardExpiredWithCardId:(id)arg1;
- (unsigned long long)cardStatusFromDartStatus:(id)arg1;
- (id)actionResultJsonWithStatus:(id)arg1 errMsg:(id)arg2;
- (id)channel;
- (void)setChannel:(id)arg1;
- (id)facePendingActions;
- (void)setFacePendingActions:(id)arg1;
- (BOOL)audioPlaying;
- (void)setAudioPlaying:(BOOL)arg1;
- (id)pendingGatewayRequests;
- (void)setPendingGatewayRequests:(id)arg1;
- (id)pendingAreaCodeResult;
- (void)setPendingAreaCodeResult:(id)arg1;
- (void).cxx_destruct;
@end
