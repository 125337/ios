@interface WCFinderPostEditEntryMgr : NSObject <WCFinderPostViewControllerDelegate, WCSightVideoCompositeTaskDelegate, WCEditImageViewControllerDelegate, WCFinderTemplateProcessViewControllerDelegate>
{
    id <WCFinderPostEditEntrySnsProtocol> _snsEditDelegate; // +0x8
    id <WCFinderPostEditEntrySnsProtocol> _postDelegate; // +0x10
    NSMutableDictionary * _feedIdTaskIdDic; // +0x18
    NSMutableDictionary * _compressTaskIdDic; // +0x20
    NSMutableDictionary * _encodeTaskDic; // +0x28
    NSMutableSet * _resumingCompositionTaskIds; // +0x30
    NSString * _content; // +0x38
    FinderLocation * _location; // +0x40
    MMUIViewController * _fromVC; // +0x48
    unsigned long long _postFromScene; // +0x50
    id /* block */ _completionHandler; // +0x58
    NSString * _sessionId; // +0x60
}
+ (unsigned long long)getPostSceneByFromScene:(unsigned long long)arg1;
- (id)feedIdTaskIdDic;
- (id)compressTaskIdDic;
- (id)encodeTaskDic;
- (id)resumingCompositionTaskIds;
- (void)enterPostPageEditVideoBySrcPHAsset:(id)arg1 editVideoAttr:(id)arg2 compositionAttr:(id)arg3 sightDraft:(id)arg4 content:(id)arg5 location:(id)arg6 fromVC:(id)arg7 outputVideoPath:(id)arg8 postFromScene:(unsigned long long)arg9 templateInfo:(id)arg10 completionHandler:(id /* block */)arg11;
- (void)enterPostPageOriginalVideoBySrcPHAsset:(id)arg1 content:(id)arg2 location:(id)arg3 postFromScene:(unsigned long long)arg4 fromVC:(id)arg5 outputVideoPath:(id)arg6 templateInfo:(id)arg7 completionHandler:(id /* block */)arg8;
- (void)_encodeOriginalVideoByUrl:(id)arg1 forDataItem:(id)arg2 doneBlock:(id /* block */)arg3;
- (void)enterPostPageByVideoPath:(id)arg1 content:(id)arg2 location:(id)arg3 postFromScene:(unsigned long long)arg4 fromVC:(id)arg5 templateInfo:(id)arg6 completionHandler:(id /* block */)arg7;
- (void)presentFinderPostViewControllerWithPostSession:(id)arg1 presentAnimated:(BOOL)arg2 fromVC:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)postViewControllerFromVC:(id)arg1 postSession:(id)arg2;
- (void)postViewControllerSaveDraftAndOpenProfile:(id)arg1;
- (void)postViewControllerCancelPostWithModel:(id)arg1;
- (void)recordCanceledCompressMetricsForDataItem:(id)arg1;
- (void)removeCompressProgressFromDataItem:(id)arg1;
- (BOOL)checkHadEncodingForDataItem:(id)arg1;
- (void)recoverLocalUploadDataItem;
- (void)registerCompressCallbackFromDraftScene:(id /* block */)arg1 withPostSession:(id)arg2;
- (void)registerCompressCallback:(id /* block */)arg1 fromPostSession:(id)arg2;
- (void)sightVideoCompositeTask:(id)arg1 didFinish:(BOOL)arg2 withSightDraft:(id)arg3;
- (id)getMaterialArrayFromImageModels:(id)arg1;
- (id)convertImageModelsToImageArrayPromise:(id)arg1;
- (void)enterPostPageByImageModels:(id)arg1 content:(id)arg2 location:(id)arg3 fromVC:(id)arg4 postFromScene:(unsigned long long)arg5 completionHandler:(id /* block */)arg6;
- (void)editImageViewController:(id)arg1 didFinishEditingImage:(id)arg2;
- (void)editImageViewControllerDidCancel:(id)arg1;
- (void)finderTemplateProcessVC:(id)arg1 didExportFinishWithPath:(id)arg2 outputParams:(id)arg3;
- (void)sendVideoWithDraft:(id)arg1;
- (void)addCompositionTask:(id)arg1 fromPostSession:(id)arg2;
- (unsigned long long)postCompressCodecFromTargetCodec:(unsigned long long)arg1;
- (unsigned long long)postCompressEncoderTypeFromTargetType:(unsigned long long)arg1;
- (id)postCompressMetricsWithFinderTask:(id)arg1 success:(BOOL)arg2 error:(id)arg3;
- (unsigned long long)actualCodecFromVideoTrack:(id)arg1;
- (void)fillActualOutputMetrics:(id)arg1 asset:(id)arg2;
- (void)discardCompositionTaskForDirectUpload:(id)arg1 fromPostSession:(id)arg2;
- (BOOL)isDeferredDirectUploadCompositionTask:(id)arg1;
- (BOOL)registerDeferredDirectUploadCompositionTaskWithCompletion:(id /* block */)arg1 postSession:(id)arg2;
- (void)resumeDeferredCompositionTask:(id)arg1 forDataItem:(id)arg2;
- (id)snsEditDelegate;
- (void)setSnsEditDelegate:(id)arg1;
- (id)postDelegate;
- (void)setPostDelegate:(id)arg1;
- (void)setFeedIdTaskIdDic:(id)arg1;
- (void)setCompressTaskIdDic:(id)arg1;
- (void)setEncodeTaskDic:(id)arg1;
- (void)setResumingCompositionTaskIds:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (id)fromVC;
- (void)setFromVC:(id)arg1;
- (unsigned long long)postFromScene;
- (void)setPostFromScene:(unsigned long long)arg1;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (void).cxx_destruct;
@end
