@interface WCFinderItemEventReportInfo : NSObject
{
    int _commentScene; // +0x8
    int _refCommentScene; // +0xc
    long long _eventCode; // +0x10
    unsigned long long _eventTime; // +0x18
    NSString * _eId; // +0x20
    NSDictionary * _udfKV; // +0x28
    NSString * _finderContextID; // +0x30
    NSString * _finderTabContextID; // +0x38
}
- (void)setUdfKV:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (long long)eventCode;
- (void)setEventCode:(long long)arg1;
- (unsigned long long)eventTime;
- (void)setEventTime:(unsigned long long)arg1;
- (id)eId;
- (void)setEId:(id)arg1;
- (id)udfKV;
- (int)refCommentScene;
- (void)setRefCommentScene:(int)arg1;
- (id)finderContextID;
- (void)setFinderContextID:(id)arg1;
- (id)finderTabContextID;
- (void)setFinderTabContextID:(id)arg1;
- (void).cxx_destruct;
@end
