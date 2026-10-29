@interface MJSpeechCgiHelper : NSObject
{
    NSMutableDictionary * _cgiByTaskIDs; // +0x8
}
+ (id)parseSTTScentencesFromTransResult:(id)arg1;
+ (unsigned long long)mapToAudioFormatFromEncodeType:(int)arg1;
- (id)init;
- (long long)generateNewTaskID;
- (long long)submitAsyncSTTRequestWithAudioID:(id)arg1 voiceIDForRequest:(id)arg2 audioSlice:(id)arg3 audioDurationMillis:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (long long)queryAsyncSTTRequestWithAudioID:(id)arg1 submitTaskID:(id)arg2 contextBuff:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)cancelRequest:(id)arg1;
- (void)cancelRequests:(id)arg1;
- (void)cancelAllRequests;
- (long long)reportCaptionInfo:(id)arg1 clientID:(id)arg2;
- (long long)requestSTTParamsWithCompletionHandler:(id /* block */)arg1;
- (id)cgiByTaskIDs;
- (void)setCgiByTaskIDs:(id)arg1;
- (void).cxx_destruct;
@end
