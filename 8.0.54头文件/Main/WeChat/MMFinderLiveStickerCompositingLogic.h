@interface MMFinderLiveStickerCompositingLogic : NSObject
{
    MMFinderLiveTaskId * _taskId; // +0x8
    unsigned long long _maxStickerCount; // +0x10
    OrderedDictionary * _compositingStickerDict; // +0x18
    NSObject<OS_dispatch_semaphore> * _stickerDictLock; // +0x20
}
+ (id)createStickerCompositingLogic:(unsigned long long)arg1 taskId:(id)arg2;
+ (id)createStickerCompositingLogic:(unsigned long long)arg1 maxStickerCount:(unsigned long long)arg2 taskId:(id)arg3;
+ (id)createStickerTransmitCompositingLogicWithTaskId:(id)arg1;
+ (id)createStickerTransmitCompositingLogicWithMaxStickerCount:(unsigned long long)arg1 taskId:(id)arg2;
- (id)initWithMaxCount:(unsigned long long)arg1 taskId:(id)arg2;
- (void)initDefaultData;
- (unsigned long long)addStickerItem:(id)arg1;
- (unsigned long long)insertStickerItemToBack:(id)arg1;
- (unsigned long long)removeStickerItem:(id)arg1;
- (unsigned long long)removeStickerItemWithId:(id)arg1;
- (id)getCompositingStickerList;
- (id)liveTask;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned long long)maxStickerCount;
- (void)setMaxStickerCount:(unsigned long long)arg1;
- (id)compositingStickerDict;
- (void)setCompositingStickerDict:(id)arg1;
- (id)stickerDictLock;
- (void)setStickerDictLock:(id)arg1;
- (void).cxx_destruct;
@end

