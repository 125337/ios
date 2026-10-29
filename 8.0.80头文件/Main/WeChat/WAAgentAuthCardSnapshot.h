@interface WAAgentAuthCardSnapshot : NSObject <NSCopying>
{
    unsigned long long _type; // +0x8
    unsigned long long _finishedStatus; // +0x10
    NSDictionary * _payload; // +0x18
}
+ (id)snapshotFromJSONDict:(id)arg1;
+ (id)snapshotFromJSONData:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)toJSONDict;
- (id)toJSONData;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)finishedStatus;
- (void)setFinishedStatus:(unsigned long long)arg1;
- (id)payload;
- (void)setPayload:(id)arg1;
- (void).cxx_destruct;
@end
