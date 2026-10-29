@interface FSDSMModelPreparer : NSObject <DSMMatcherDelegate>
{
    BOOL _isPreparing; // +0x8
    BOOL _isPrepared; // +0x9
    int _keywordCount; // +0xc
    NSString * _searchModelVersion; // +0x10
    NSMutableSet * _whiteSet; // +0x18
    NSMutableSet * _whiteInfoSet; // +0x20
    NSMutableSet * _blackSet; // +0x28
    NSObject<OS_dispatch_queue> * _buildingQueue; // +0x30
}
- (id)init;
- (void)cleanCacheSet;
- (void)cleanSearchModel;
- (id)getKeywordContentVersion;
- (unsigned int)loadRealtimeData;
- (void)startBuildSearchModel;
- (void)tryBuildSearchModel:(unsigned int)arg1;
- (BOOL)startBuilding;
- (void)enumerateItemUsingBlock:(id /* block */)arg1;
- (BOOL)isPreparing;
- (void)setIsPreparing:(BOOL)arg1;
- (BOOL)isPrepared;
- (void)setIsPrepared:(BOOL)arg1;
- (int)keywordCount;
- (void)setKeywordCount:(int)arg1;
- (id)searchModelVersion;
- (void)setSearchModelVersion:(id)arg1;
- (id)whiteSet;
- (void)setWhiteSet:(id)arg1;
- (id)whiteInfoSet;
- (void)setWhiteInfoSet:(id)arg1;
- (id)blackSet;
- (void)setBlackSet:(id)arg1;
- (id)buildingQueue;
- (void)setBuildingQueue:(id)arg1;
- (void).cxx_destruct;
@end

