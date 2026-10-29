@interface WCDeepCleanResource : NSObject <IDeepCleanClassProtocol>
{
    BOOL bCleanning; // +0x8
    BOOL bStop; // +0x9
    float progressLevel; // +0xc
    unsigned long long _totalSize; // +0x10
}
+ (BOOL)getShouldDeleteHeadImg;
- (id)init;
- (unsigned long long)getClassSize;
- (void)cleanData;
- (void)stop;
- (void)refreshState;
- (float)progressLevel;
- (void)setProgressLevel:(float)arg1;
- (BOOL)bCleanning;
- (void)setBCleanning:(BOOL)arg1;
- (BOOL)bStop;
- (void)setBStop:(BOOL)arg1;
- (unsigned long long)totalSize;
- (void)setTotalSize:(unsigned long long)arg1;
@end

