@interface WCFinderRealTimeSyncFeedInfoCGIParam : NSObject
{
    unsigned long long _objectId; // +0x8
    NSData * _lastBuffer; // +0x10
    long long _exposeTimeStamp; // +0x18
}
- (id)fullDescription;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (long long)exposeTimeStamp;
- (void)setExposeTimeStamp:(long long)arg1;
- (void).cxx_destruct;
@end
