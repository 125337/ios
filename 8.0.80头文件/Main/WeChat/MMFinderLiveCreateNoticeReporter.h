@interface MMFinderLiveCreateNoticeReporter : NSObject
{
    unsigned long long _sourceScene; // +0x8
    NSString * _sessionId; // +0x10
}
+ (id)commentAreaCreateNoticeActionJsonWithType:(unsigned long long)arg1 feedId:(id)arg2 requestJson:(id)arg3;
+ (void)reportCommentAreaCreateNoticeOperationWithType:(unsigned long long)arg1 feedId:(id)arg2 requestJson:(id)arg3 sourceScene:(unsigned long long)arg4 sessionId:(id)arg5;
- (id)initWithSourceScene:(unsigned long long)arg1 sessionId:(id)arg2;
- (void)reportProfileLiveNotice:(unsigned long long)arg1 withNoticeInfo:(id)arg2 actionJsonDictionary:(id)arg3;
- (void)reportProfileNoticeOk:(unsigned long long)arg1 withNoticeInfo:(id)arg2;
- (void)reportCommentAreaCreateNoticeOperationWithType:(unsigned long long)arg1 feedId:(id)arg2 requestJson:(id)arg3;
- (unsigned long long)sourceScene;
- (void)setSourceScene:(unsigned long long)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (void).cxx_destruct;
@end
