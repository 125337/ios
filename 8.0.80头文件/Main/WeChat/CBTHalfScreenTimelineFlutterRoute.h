@interface CBTHalfScreenTimelineFlutterRoute : NSObject
+ (void)showFromVC:(id)arg1 options:(id)arg2 dismissCallback:(id /* block */)arg3;
+ (long long)p_sceneWithOptions:(id)arg1 item:(id)arg2;
+ (int)p_enterSceneWithOptions:(id)arg1 item:(id)arg2 scene:(long long)arg3;
+ (id)p_reuseKeyWithOptions:(id)arg1 item:(id)arg2 feedId:(id)arg3;
+ (id)p_reuseStates;
+ (id)p_reuseStateForKey:(id)arg1;
+ (BOOL)p_isInstanceAliveForReuseKey:(id)arg1;
+ (void)p_updateReuseState:(id)arg1 scene:(long long)arg2 options:(id)arg3 showPreviewCard:(BOOL)arg4 modifyId:(id)arg5 questionText:(id)arg6;
+ (id)p_firstMultimodalItemFromData:(id)arg1;
+ (id)p_bypassCardItemWithMultimodalType:(int)arg1 bypassDetailJson:(id)arg2 payloadXml:(id)arg3;
+ (id)p_timelineListBypassJson:(id)arg1 showPreviewCard:(BOOL)arg2;
+ (id)p_timelineEditBypassJson:(id)arg1;
+ (id)p_jsonStringFromObject:(id)arg1;
@end
