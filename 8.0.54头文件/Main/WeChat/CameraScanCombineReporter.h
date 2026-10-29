@interface CameraScanCombineReporter : NSObject
+ (void)reportClientActionType:(unsigned int)arg1;
+ (void)reportClientActionType:(unsigned int)arg1 withExtraInfo:(id)arg2;
+ (void)reportStreamDetectAction:(unsigned int)arg1 itemVM:(id)arg2 itemIndex:(long long)arg3 itemCount:(unsigned long long)arg4 baseInfo:(id)arg5;
+ (void)reportStreamDetectFailed:(unsigned int)arg1 itemVM:(id)arg2 itemIndex:(long long)arg3 itemCount:(unsigned long long)arg4 baseInfo:(id)arg5;
+ (void)reportCardItemOpenWithItemVM:(id)arg1 itemIndex:(long long)arg2 itemCount:(unsigned long long)arg3 preload:(BOOL)arg4 baseInfo:(id)arg5;
+ (void)reportAlbumDetectAction:(unsigned int)arg1 itemVM:(id)arg2 baseInfo:(id)arg3;
+ (void)reportCombineAction:(unsigned int)arg1 itemVM:(id)arg2 itemIndex:(long long)arg3 itemCount:(unsigned long long)arg4 preload:(BOOL)arg5 errCode:(unsigned int)arg6 baseInfo:(id)arg7;
+ (void)reportDetectPerfWithItemVM:(id)arg1 modelVersion:(long long)arg2;
+ (unsigned int)cardResultTypeFromCombineSvrResultType:(long long)arg1;
@end

