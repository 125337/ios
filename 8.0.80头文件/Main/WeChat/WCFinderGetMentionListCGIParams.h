@interface WCFinderGetMentionListCGIParams : NSObject
{
    int _notificationSubscene; // +0x8
    long long _mentionType; // +0x10
    unsigned long long _scene; // +0x18
    NSString * _finderUsername; // +0x20
    NSData * _pageBuffer; // +0x28
    unsigned long long _aggregatedRootMentionID; // +0x30
    NSString * _wxUsername; // +0x38
    NSNumber * _redDotUnreadCount; // +0x40
}
+ (id)paramsWithMentionType:(long long)arg1 scene:(unsigned long long)arg2 finderUsername:(id)arg3;
- (long long)mentionType;
- (void)setMentionType:(long long)arg1;
- (int)notificationSubscene;
- (void)setNotificationSubscene:(int)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)pageBuffer;
- (void)setPageBuffer:(id)arg1;
- (unsigned long long)aggregatedRootMentionID;
- (void)setAggregatedRootMentionID:(unsigned long long)arg1;
- (id)wxUsername;
- (void)setWxUsername:(id)arg1;
- (id)redDotUnreadCount;
- (void)setRedDotUnreadCount:(id)arg1;
- (void).cxx_destruct;
@end
