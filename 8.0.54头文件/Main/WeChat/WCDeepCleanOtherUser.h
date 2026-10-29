@interface WCDeepCleanOtherUser : NSObject <IDeepCleanClassProtocol>
{
    BOOL bCleanning; // +0x8
    BOOL bStop; // +0x9
    float progressLevel; // +0xc
    NSArray * _otherUserPaths; // +0x10
    NSArray * _otherUserMapids; // +0x18
    unsigned long long _totalSize; // +0x20
}
- (void)stop;
- (void)refreshState;
- (unsigned long long)getClassSize;
- (void)cleanData;
- (float)progressLevel;
- (void)setProgressLevel:(float)arg1;
- (BOOL)bCleanning;
- (void)setBCleanning:(BOOL)arg1;
- (BOOL)bStop;
- (void)setBStop:(BOOL)arg1;
- (id)otherUserPaths;
- (void)setOtherUserPaths:(id)arg1;
- (id)otherUserMapids;
- (void)setOtherUserMapids:(id)arg1;
- (unsigned long long)totalSize;
- (void)setTotalSize:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

