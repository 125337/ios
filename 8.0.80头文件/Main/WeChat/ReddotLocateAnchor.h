@interface ReddotLocateAnchor : NSObject
{
    int _localId; // +0x8
    unsigned long long _timestamp; // +0x10
    unsigned long long _source; // +0x18
    long long _answerId; // +0x20
}
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)source;
- (void)setSource:(unsigned long long)arg1;
- (int)localId;
- (void)setLocalId:(int)arg1;
- (long long)answerId;
- (void)setAnswerId:(long long)arg1;
@end
