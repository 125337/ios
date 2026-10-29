@interface CBTAsstDartToNativeCallerImpl : NSObject <CBTAsstDartToNativeCallerBase>
{
    BOOL _scanContinueCameraPresenting; // +0x8
    CBTAsstDartToNativeCallerCallback * _callback; // +0x10
}
+ (id)sharedImpl;
+ (id)saveTempImageForScanContinueCamera:(id)arg1;
- (void)setCallback:(id)arg1;
- (void)openImageFullScreenViewAsync:(unsigned long long)arg1 imgList:(id)arg2 index:(int)arg3 originRectX:(double)arg4 originRectY:(double)arg5 originRectWidth:(double)arg6 originRectHeight:(double)arg7 listOrder:(int)arg8 sessionId:(id)arg9 query:(id)arg10 senderType:(int)arg11 upContextBytes:(id)arg12 downContextBytes:(id)arg13;
- (void)openHistoryDialogueDetailViewAsync:(unsigned long long)arg1 bubbleExtraInfo:(id)arg2;
- (void)performMicUpdateWithTaskId:(unsigned long long)arg1 isOpen:(BOOL)arg2 uiState:(int)arg3 isFullDuplex:(BOOL)arg4 responseState:(int)arg5 imagePaths:(id)arg6 forbidSendMicStatus:(BOOL)arg7 filePaths:(id)arg8 fileNames:(id)arg9 chatUsernames:(id)arg10 voipSessionID:(id)arg11 halfScreenCacheKey:(id)arg12 micBizInfo:(id)arg13;
- (void)requestUpdateMicStatusForDart2IosAsync:(unsigned long long)arg1 isOpen:(BOOL)arg2 uiState:(int)arg3 isFullDuplex:(BOOL)arg4 switchToFullDuplex:(BOOL)arg5 responseState:(int)arg6 imagePaths:(id)arg7 forbidSendMicStatus:(BOOL)arg8 voipSessionID:(id)arg9 halfScreenCacheKey:(id)arg10 filePaths:(id)arg11 fileNames:(id)arg12 chatUsernames:(id)arg13 micBizInfo:(id)arg14;
- (void)performMicUpdateWithPreCheck:(unsigned long long)arg1 isOpen:(BOOL)arg2 uiState:(int)arg3 isFullDuplex:(BOOL)arg4 responseState:(int)arg5 imagePaths:(id)arg6 forbidSendMicStatus:(BOOL)arg7 filePaths:(id)arg8 fileNames:(id)arg9 chatUsernames:(id)arg10 voipSessionID:(id)arg11 halfScreenCacheKey:(id)arg12 micBizInfo:(id)arg13;
- (void)askXiaoweiButtonClkedAsync:(unsigned long long)arg1 enterScene:(int)arg2 bizInfo:(id)arg3;
- (void)askXiaoweiButtonLongPressDownAsync:(unsigned long long)arg1 enterScene:(int)arg2 bizInfo:(id)arg3;
- (void)askXiaoweiButtonLongPressUpAsync:(unsigned long long)arg1 enterScene:(int)arg2 bizInfo:(id)arg3;
- (void)openScanContinueCameraAsync:(unsigned long long)arg1 sourceId:(id)arg2 negScreenSessionId:(id)arg3 enterScene:(int)arg4;
- (id)callback;
- (BOOL)scanContinueCameraPresenting;
- (void)setScanContinueCameraPresenting:(BOOL)arg1;
- (void).cxx_destruct;
@end
