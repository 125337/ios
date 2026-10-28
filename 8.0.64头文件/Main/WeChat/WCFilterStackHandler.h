@interface WCFilterStackHandler : NSObject
{
    WCStackFeatPool * _stackFeatPool; // +0x8
}
- (id)init;
- (void)loadStackFeat;
- (void)saveStackFeat;
- (unsigned long long)addStackFeat:(unsigned long long)arg1;
- (id)stackFeatPool;
- (void)setStackFeatPool:(id)arg1;
- (void).cxx_destruct;
@end
