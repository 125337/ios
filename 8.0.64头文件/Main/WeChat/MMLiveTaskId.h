@interface MMLiveTaskId : NSObject <MMLiveBeautyLogicProvider, NSCopying, MMLiveUniqueTaskId>
{
    BOOL _isInitialAudience; // +0x8
    BOOL _isPrimitiveLive; // +0x9
    unsigned long long _liveId; // +0x10
    NSString * _anchorIdentityId; // +0x18
    NSString * _exportId; // +0x20
}
- (id)beautyLogic;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)taskKey;
- (BOOL)isValid;
- (BOOL)isAnchor;
- (BOOL)isAudience;
- (BOOL)checkTaskIdValid:(Class)arg1;
- (BOOL)checkTaskIdType:(Class)arg1;
- (id)tryTransferToFinderTaskId;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (BOOL)isInitialAudience;
- (void)setIsInitialAudience:(BOOL)arg1;
- (id)anchorIdentityId;
- (void)setAnchorIdentityId:(id)arg1;
- (id)exportId;
- (void)setExportId:(id)arg1;
- (BOOL)isPrimitiveLive;
- (void)setIsPrimitiveLive:(BOOL)arg1;
- (void).cxx_destruct;
@end
