@interface EditImageXiaoWeiService : NSObject <ImageEditContinueEditHandler>
{
    BOOL _hasTriggeredDetection; // +0x8
    BOOL _isIntentDetecting; // +0x9
    id <EditImageXiaoWeiServiceHost> _host; // +0x10
    NSString * _xiaoweiSessionId; // +0x18
    UIImage * _pendingXiaoWeiImage; // +0x20
    NSArray * _pendingShortcuts; // +0x28
    id /* block */ _pendingTimeout; // +0x30
}
+ (BOOL)isAskXiaoWeiExptEnabled;
- (void)onEditorEnterWithEditSessionID:(unsigned long long)arg1 enterSource:(unsigned long long)arg2 originalImage:(id)arg3;
- (void)onEditorExitWithSource:(unsigned long long)arg1;
- (void)createReportHelperWithEditSessionID:(unsigned long long)arg1 enterSource:(unsigned long long)arg2;
- (void)setupReportHelperWithSessionID:(unsigned long long)arg1 enterSource:(unsigned long long)arg2;
- (void)resetSession;
- (void)setContinueEditSessionId:(id)arg1;
- (void)startImageIntentDetectionWithImage:(id)arg1;
- (void)updateReportImageMd5WithImage:(id)arg1;
- (void)onAskXiaoWeiWithImage:(id)arg1 buttonFrame:(CGRect)arg2;
- (void)onAskXiaoWeiWithImage:(id)arg1;
- (void)showXiaoWeiWithImage:(id)arg1 shortcutsList:(id)arg2 query:(id)arg3;
- (void)showXiaoWeiWithImage:(id)arg1 shortcutsList:(id)arg2;
- (void)applyContinueEditAiImage:(id)arg1 sessionId:(id)arg2;
- (id)host;
- (void)setHost:(id)arg1;
- (BOOL)hasTriggeredDetection;
- (void)setHasTriggeredDetection:(BOOL)arg1;
- (id)xiaoweiSessionId;
- (void)setXiaoweiSessionId:(id)arg1;
- (BOOL)isIntentDetecting;
- (void)setIsIntentDetecting:(BOOL)arg1;
- (id)pendingXiaoWeiImage;
- (void)setPendingXiaoWeiImage:(id)arg1;
- (id)pendingShortcuts;
- (void)setPendingShortcuts:(id)arg1;
- (id /* block */)pendingTimeout;
- (void)setPendingTimeout:(id /* block */)arg1;
- (void).cxx_destruct;
@end
