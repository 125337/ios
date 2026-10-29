@interface QBBeaconDataPersistQueue : NSObject
{
    NSMutableArray * tailList; // +0x8
    int maxSize; // +0x10
    int currSize; // +0x14
}
+ (id)sharedInstance;
- (id)init;
- (void)setMaxSize:(int)arg1;
- (int)getMaxSize;
- (int)getCurrSize;
- (void)addObject:(id)arg1;
- (void)addToTailList:(id)arg1;
- (id)fetchAllObjectsAndClean;
- (void)dealloc;
- (void).cxx_destruct;
@end
