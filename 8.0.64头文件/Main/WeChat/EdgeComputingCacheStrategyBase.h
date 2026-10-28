@interface EdgeComputingCacheStrategyBase : NSObject <IEdgeComputingCacheStrategyProtocol>
{
    unsigned int _type; // +0x8
}
- (id)initWithType:(unsigned int)arg1;
- (void)reset;
- (void)close;
- (void)save:(id)arg1;
- (void)remove:(id)arg1;
- (void)clear;
- (void)deleteExpire:(unsigned long long)arg1;
- (void)migrate;
- (id)query:(id)arg1;
- (unsigned long long)count;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
@end
