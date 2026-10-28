@interface WCFinderNativeDramaDetailCGIParams : NSObject
{
    int _consumerMode; // +0x8
    unsigned long long _dramaId; // +0x10
    unsigned long long _fromObjectId; // +0x18
}
- (unsigned long long)dramaId;
- (void)setDramaId:(unsigned long long)arg1;
- (unsigned long long)fromObjectId;
- (void)setFromObjectId:(unsigned long long)arg1;
- (int)consumerMode;
- (void)setConsumerMode:(int)arg1;
@end
