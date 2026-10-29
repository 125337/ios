@interface MPPageResourceDownloader : NSObject
{
    unsigned int _fileSequence; // +0x8
    NSString * _saveDirPath; // +0x10
    NSMutableDictionary * _contextDic; // +0x18
    NSURLSession * _urlSession; // +0x20
}
+ (id)downloadIdPrefixWithTemplateType:(unsigned int)arg1;
+ (id)downloadIdWithTemplateType:(unsigned int)arg1 version:(unsigned int)arg2 fullVersion:(id)arg3;
- (id)init;
- (void)dealloc;
- (void)downloadWithIdentifier:(id)arg1 url:(id)arg2 md5:(id)arg3 header:(id)arg4 templateType:(unsigned int)arg5 fullVersion2FilePathMap:(id)arg6 completionHandler:(id /* block */)arg7;
- (id)completionParamWithErrorCode:(unsigned int)arg1 errorMsg:(id)arg2;
- (id)generateCompletionParam:(id)arg1;
- (BOOL)hasDownloadingTaskWithIdentifier:(id)arg1;
- (void)cancelDownloadingTasksWithPrefix:(id)arg1;
- (id)errorWithCode:(long long)arg1 description:(id)arg2;
- (id)filePathWithIdentifier:(id)arg1;
- (void)downloadTaskWithContext:(id)arg1 identifier:(id)arg2 url:(id)arg3 md5:(id)arg4 header:(id)arg5 filePath:(id)arg6 fullVersion2FilePathMap:(id)arg7;
- (id)parseHeaderFields:(id)arg1 targetKey:(id)arg2;
- (void)setupURLSession;
- (void)mainThread_onResponseWithIdentifier:(id)arg1 completionParam:(id)arg2;
- (id)saveDirPath;
- (void)setSaveDirPath:(id)arg1;
- (id)contextDic;
- (void)setContextDic:(id)arg1;
- (id)urlSession;
- (void)setUrlSession:(id)arg1;
- (unsigned int)fileSequence;
- (void)setFileSequence:(unsigned int)arg1;
- (void).cxx_destruct;
@end
