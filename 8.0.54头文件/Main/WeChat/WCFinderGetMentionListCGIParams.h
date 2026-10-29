@interface WCFinderGetMentionListCGIParams : NSObject
{
    long long _mentionType; // +0x8
    unsigned long long _scene; // +0x10
    NSString * _finderUsername; // +0x18
    NSData * _lastBuffer; // +0x20
    NSData * _pageBuffer; // +0x28
    unsigned long long _fetchMode; // +0x30
    unsigned long long _aggregatedRootMentionID; // +0x38
}
+ (id)paramsWithMentionType:(long long)arg1 scene:(unsigned long long)arg2 finderUsername:(id)arg3;
- (long long)mentionType;
- (void)setMentionType:(long long)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)pageBuffer;
- (void)setPageBuffer:(id)arg1;
- (unsigned long long)fetchMode;
- (void)setFetchMode:(unsigned long long)arg1;
- (unsigned long long)aggregatedRootMentionID;
- (void)setAggregatedRootMentionID:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

