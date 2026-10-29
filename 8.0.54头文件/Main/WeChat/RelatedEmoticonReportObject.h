@interface RelatedEmoticonReportObject : NSObject
{
    NSString * _sessionId; // +0x8
    NSString * _chatID; // +0x10
    NSString * _searchID; // +0x18
    CEmoticonWrap * _sourceEmoticonWrap; // +0x20
    unsigned long long _maxRowCount; // +0x28
}
+ (void)reportLongPressMessageMenuFromMessageWrap:(id)arg1;
+ (void)reportSessionId:(id)arg1 action:(unsigned int)arg2 sourcePid:(id)arg3 sourceMd5:(id)arg4 pid:(id)arg5 md5:(id)arg6 index:(unsigned int)arg7 maxRowCount:(unsigned int)arg8 isFree:(id)arg9 type:(id)arg10 isLocal:(id)arg11 chatID:(id)arg12 searchID:(id)arg13;
- (void)reportTapRelatedEmoticonMenuItem;
- (void)reportEmoticonExporsureWithEmojiInfos:(id)arg1;
- (void)reportTapEmoticonWithEmojiInfo:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)reportTabWeSearchMoreEmoticon;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)chatID;
- (void)setChatID:(id)arg1;
- (id)searchID;
- (void)setSearchID:(id)arg1;
- (id)sourceEmoticonWrap;
- (void)setSourceEmoticonWrap:(id)arg1;
- (unsigned long long)maxRowCount;
- (void)setMaxRowCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

