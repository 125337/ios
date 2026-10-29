@interface WSRecommendColikeStorage : NSObject <PBCoding>
{
    BOOL _hasRequestColikeHideData; // +0x8
    BOOL _hasRequestColikeBlockData; // +0x9
    NSMutableArray * _colikeHideList; // +0x10
    NSMutableArray * _colikeBlockList; // +0x18
    unsigned long long _hideVersion; // +0x20
    unsigned long long _blockVersion; // +0x28
}
+ (void)PBArrayAdd_colikeHideList;
+ (void)PBArrayAdd_colikeBlockList;
+ (void)PBArrayAdd_hideVersion;
+ (void)PBArrayAdd_blockVersion;
+ (void)PBArrayAdd_hasRequestColikeHideData;
+ (void)PBArrayAdd_hasRequestColikeBlockData;
+ (void)initialize;
+ (id)getRecommendColikeStoragePath;
+ (BOOL)saveRecommendColikeStorage:(id)arg1;
+ (id)loadRecommendColikeStorage;
- (id)getPBPropertyTable;
- (id)colikeHideList;
- (void)setColikeHideList:(id)arg1;
- (id)colikeBlockList;
- (void)setColikeBlockList:(id)arg1;
- (unsigned long long)hideVersion;
- (void)setHideVersion:(unsigned long long)arg1;
- (unsigned long long)blockVersion;
- (void)setBlockVersion:(unsigned long long)arg1;
- (BOOL)hasRequestColikeHideData;
- (void)setHasRequestColikeHideData:(BOOL)arg1;
- (BOOL)hasRequestColikeBlockData;
- (void)setHasRequestColikeBlockData:(BOOL)arg1;
- (void).cxx_destruct;
@end

