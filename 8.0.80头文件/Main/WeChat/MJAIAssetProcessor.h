@interface MJAIAssetProcessor : NSObject <MJCdnUploadManagerExt, MJCdnDownloadManagerExt>
{
    BOOL _manuallyReportsWhileFinished; // +0x8
    BOOL _manuallyReportsWhileFailed; // +0x9
    BOOL _manuallyReportsWhileCancelled; // +0xa
    NSString * _sessionKey; // +0x10
    unsigned long long _reportScene; // +0x18
    NSArray * _originalAssetInfos; // +0x20
    MJAITemplateAssetOptions * _options; // +0x28
    long long _state; // +0x30
    long long _phase; // +0x38
    NSData * _aigcBuffer; // +0x40
    unsigned long long _aiGenType; // +0x48
    NSString * _templateId; // +0x50
    id /* block */ _progressHandler; // +0x58
    id /* block */ _completionHandler; // +0x60
    NSArray * _AIAssetInfos; // +0x68
    NSData * _wevisonMusicBuffer; // +0x70
    NSError * _error; // +0x78
    NSArray * _assetTaskInfos; // +0x80
    NSMutableArray * _assetFilePaths; // +0x88
    NSDate * _assetPreparationStartTime; // +0x90
    NSDate * _assetPreparationEndTime; // +0x98
    NSMutableArray * _cdnUploadTaskKeys; // +0xa0
    NSMutableDictionary * _cdnUploadRequests; // +0xa8
    NSMutableDictionary * _cdnUploadResults; // +0xb0
    NSDate * _cdnUploadStartTime; // +0xb8
    NSDate * _cdnUploadEndTime; // +0xc0
    NSMutableArray * _cdnDownloadTaskKeys; // +0xc8
    NSMutableDictionary * _cdnDownloadRequests; // +0xd0
    NSMutableDictionary * _cdnDownloadResults; // +0xd8
    NSDate * _cdnDownloadStartTime; // +0xe0
    NSDate * _cdnDownloadEndTime; // +0xe8
    MJAIAssetGenerateTask * _aiAssetGenerateTask; // +0xf0
    MJAIAssetGenerateResult * _aiAssetGenerateResult; // +0xf8
    NSDate * _aiAssetGeneratingStartTime; // +0x100
    NSDate * _aiAssetGeneratingEndTime; // +0x108
    unsigned long long _totalTaskCount; // +0x110
    unsigned long long _finishedTaskCount; // +0x118
}
+ (long long)errorTypeForError:(id)arg1;
- (id)initWithSessionKey:(id)arg1 originalAssetInfos:(id)arg2 options:(id)arg3;
- (void)dealloc;
- (void)start;
- (void)cancel;
- (void)initProgressComponents;
- (void)updateProgressWithFinishedTaskCount:(unsigned long long)arg1;
- (float)progress;
- (void)didFinish;
- (void)didFailWithError:(id)arg1;
- (void)callCompletionHandler;
- (void)prepareOriginalAssetFiles;
- (void)recursivelyPrepareOriginalAssetFilesAtIndex:(unsigned long long)arg1;
- (void)_dealMedaiTypeImage:(id)arg1 filePath:(id)arg2 index:(unsigned long long)arg3;
- (void)_dealMediaTypeVideo:(id)arg1 filePath:(id)arg2 index:(unsigned long long)arg3;
- (id)resizedImageWithOriginalImage:(id)arg1;
- (id)originalAssetFilePathAtIndex:(unsigned long long)arg1;
- (id)assetFileKeyForFileAtIndex:(unsigned long long)arg1;
- (id)assetFileKeyForPHAsset:(id)arg1;
- (BOOL)saveOriginalAssetWithImage:(id)arg1 atFilePath:(id)arg2;
- (void)uploadOriginalAssetFiles;
- (void)checkUploadFinished;
- (void)uploadOriginalAssetFileWithTaskKey:(id)arg1 filePath:(id)arg2;
- (void)cancelUploadingOriginalAssetFiles;
- (void)MJCdnUploadManager:(id)arg1 uploadTaskDidComplete:(id)arg2;
- (id)serverTaskID;
- (void)generateAIAssets;
- (void)dealImage2ImageAITaskResult:(id)arg1;
- (void)dealAutoCutGenTaskResult:(id)arg1;
- (BOOL)_checkToSetMusicAIClientBuffer;
- (void)cancelGeneratingAIAssets;
- (void)downloadAIAssetFiles;
- (void)cancelDownloadingAIAssetFiles;
- (void)checkDownloadFinished;
- (void)downloadAIAssetFileWithTaskKey:(id)arg1 cdnURL:(id)arg2 filePath:(id)arg3;
- (id)AIAssetFilePathAtIndex:(unsigned long long)arg1;
- (void)MJCdnDownloadManager:(id)arg1 downloadTaskDidComplete:(id)arg2;
- (void)createAIAssetInfos;
- (id)generateReporter;
- (void)reportIfNeeded;
- (id)sessionKey;
- (unsigned long long)reportScene;
- (void)setReportScene:(unsigned long long)arg1;
- (id)originalAssetInfos;
- (id)options;
- (long long)state;
- (void)setState:(long long)arg1;
- (long long)phase;
- (void)setPhase:(long long)arg1;
- (id)aigcBuffer;
- (void)setAigcBuffer:(id)arg1;
- (unsigned long long)aiGenType;
- (void)setAiGenType:(unsigned long long)arg1;
- (id)templateId;
- (void)setTemplateId:(id)arg1;
- (id /* block */)progressHandler;
- (void)setProgressHandler:(id /* block */)arg1;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (id)AIAssetInfos;
- (void)setAIAssetInfos:(id)arg1;
- (id)wevisonMusicBuffer;
- (void)setWevisonMusicBuffer:(id)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (BOOL)manuallyReportsWhileFinished;
- (void)setManuallyReportsWhileFinished:(BOOL)arg1;
- (BOOL)manuallyReportsWhileFailed;
- (void)setManuallyReportsWhileFailed:(BOOL)arg1;
- (BOOL)manuallyReportsWhileCancelled;
- (void)setManuallyReportsWhileCancelled:(BOOL)arg1;
- (id)assetTaskInfos;
- (void)setAssetTaskInfos:(id)arg1;
- (id)assetFilePaths;
- (void)setAssetFilePaths:(id)arg1;
- (id)assetPreparationStartTime;
- (void)setAssetPreparationStartTime:(id)arg1;
- (id)assetPreparationEndTime;
- (void)setAssetPreparationEndTime:(id)arg1;
- (id)cdnUploadTaskKeys;
- (void)setCdnUploadTaskKeys:(id)arg1;
- (id)cdnUploadRequests;
- (void)setCdnUploadRequests:(id)arg1;
- (id)cdnUploadResults;
- (void)setCdnUploadResults:(id)arg1;
- (id)cdnUploadStartTime;
- (void)setCdnUploadStartTime:(id)arg1;
- (id)cdnUploadEndTime;
- (void)setCdnUploadEndTime:(id)arg1;
- (id)cdnDownloadTaskKeys;
- (void)setCdnDownloadTaskKeys:(id)arg1;
- (id)cdnDownloadRequests;
- (void)setCdnDownloadRequests:(id)arg1;
- (id)cdnDownloadResults;
- (void)setCdnDownloadResults:(id)arg1;
- (id)cdnDownloadStartTime;
- (void)setCdnDownloadStartTime:(id)arg1;
- (id)cdnDownloadEndTime;
- (void)setCdnDownloadEndTime:(id)arg1;
- (id)aiAssetGenerateTask;
- (void)setAiAssetGenerateTask:(id)arg1;
- (id)aiAssetGenerateResult;
- (void)setAiAssetGenerateResult:(id)arg1;
- (id)aiAssetGeneratingStartTime;
- (void)setAiAssetGeneratingStartTime:(id)arg1;
- (id)aiAssetGeneratingEndTime;
- (void)setAiAssetGeneratingEndTime:(id)arg1;
- (unsigned long long)totalTaskCount;
- (void)setTotalTaskCount:(unsigned long long)arg1;
- (unsigned long long)finishedTaskCount;
- (void)setFinishedTaskCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
