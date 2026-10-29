@interface WCMomentsInputAreaReportInfo : NSObject
{
    unsigned long long _contextType; // +0x8
    NSString * _sessionID; // +0x10
    NSString * _feedID; // +0x18
    NSString * _commentID; // +0x20
    unsigned long long _opResult; // +0x28
    unsigned long long _wordCount; // +0x30
    unsigned long long _lineCount; // +0x38
    double _contextScreenHeightRatio; // +0x40
    unsigned long long _wordLimiedToastCount; // +0x48
}
- (id)initWithContextType:(unsigned long long)arg1;
- (id)genReportString;
- (void)report;
- (unsigned long long)contextType;
- (void)setContextType:(unsigned long long)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (id)feedID;
- (void)setFeedID:(id)arg1;
- (id)commentID;
- (void)setCommentID:(id)arg1;
- (unsigned long long)opResult;
- (void)setOpResult:(unsigned long long)arg1;
- (unsigned long long)wordCount;
- (void)setWordCount:(unsigned long long)arg1;
- (unsigned long long)lineCount;
- (void)setLineCount:(unsigned long long)arg1;
- (double)contextScreenHeightRatio;
- (void)setContextScreenHeightRatio:(double)arg1;
- (unsigned long long)wordLimiedToastCount;
- (void)setWordLimiedToastCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
