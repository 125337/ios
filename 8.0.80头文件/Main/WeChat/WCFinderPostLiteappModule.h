@interface WCFinderPostLiteappModule : LiteAppModule <WCFinderPostMgrDelegate, WCFinderFeedDraftKeyExt, WCFinderPostDataItemExt, MJShootComposingVoiceInputDetectorDelegate, MJShootComposingImageInputDetectorDelegate>
{
    WCFinderPostMgr * _postMgr; // +0x8
    NSString * _draftId; // +0x10
    MJShootComposingVoiceInputDetector * _voiceInputDetector; // +0x18
    MJShootComposingImageInputDetector * _imageInputDetector; // +0x20
}
+ (id)liteapp_export_method_async_56_;
+ (id)liteapp_export_method_async_59_;
+ (id)liteapp_export_method_async_60_;
+ (id)liteapp_export_method_async_61_;
+ (id)liteapp_export_method_async_62_;
+ (id)liteapp_export_method_async_63_;
+ (id)liteapp_export_method_async_64_;
- (void)openFinderPost:(id)arg1;
- (void)postMgrSaveDraft:(id)arg1;
- (void)onFinderFeedDraftUploadProgressChanged:(id)arg1;
- (void)onFinderDraftPostSessionSuccess:(id)arg1 draftId:(id)arg2;
- (void)onFinderDraftPostSessionFailedWithErrorType:(long long)arg1 draftId:(id)arg2;
- (void)startAudioMonitoring;
- (void)voiceDetect;
- (void)stopAudioMonitoring;
- (void)loadFaceDetectModel;
- (void)releaseFaceDetectModel;
- (void)faceDetect:(id)arg1;
- (void)voiceInputDetector:(id)arg1 didReceiveResultText:(id)arg2;
- (void)voiceInputDetectorDidStartRecord:(id)arg1;
- (void)voiceInputDetectorDidEndRecord:(id)arg1;
- (void)voiceInputDetector:(id)arg1 didFailWithError:(long long)arg2;
- (void)voiceInputDetector:(id)arg1 didUpdatePeakPower:(float)arg2;
- (void)imageInputDetector:(id)arg1 didDetectEulerAngles:(id)arg2;
- (void)imageInputDetector:(id)arg1 didFailWithError:(id)arg2;
- (void)imageInputDetectorDidNotDetectFace:(id)arg1;
- (void)imageInputDetector:(id)arg1 didFinishInitialization:(BOOL)arg2;
- (id)postMgr;
- (void)setPostMgr:(id)arg1;
- (id)draftId;
- (void)setDraftId:(id)arg1;
- (id)voiceInputDetector;
- (void)setVoiceInputDetector:(id)arg1;
- (id)imageInputDetector;
- (void)setImageInputDetector:(id)arg1;
- (void).cxx_destruct;
@end
