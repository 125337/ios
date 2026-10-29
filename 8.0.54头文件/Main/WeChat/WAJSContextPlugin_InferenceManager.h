@interface WAJSContextPlugin_InferenceManager : WAJSContextPluginBase
{
    NSMutableDictionary * _dicSessionId2Session; // +0x8
}
- (id)createInferenceSessionWithModel:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)runInferenceSession:(id)arg1 dicInput:(id)arg2 error:(id *)arg3;
- (BOOL)releaseInferenceSession:(id)arg1;
- (void)dealloc;
- (BOOL)isSessionIdValid:(id)arg1;
- (unsigned int)GenSessionID;
- (id)getXNetSDKVersion;
- (id)dicSessionId2Session;
- (void)setDicSessionId2Session:(id)arg1;
- (void).cxx_destruct;
@end

