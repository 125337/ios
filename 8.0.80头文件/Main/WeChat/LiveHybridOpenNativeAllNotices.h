@interface LiveHybridOpenNativeAllNotices : NSObject
{
    NSString * _anchorFinderUsername; // +0x8
    NSString * _contextId; // +0x10
    NSNumber * _reserveScene; // +0x18
    NSNumber * _sourceType; // +0x20
}
+ (id)makeWithAnchorFinderUsername:(id)arg1 contextId:(id)arg2 reserveScene:(id)arg3 sourceType:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)anchorFinderUsername;
- (void)setAnchorFinderUsername:(id)arg1;
- (id)contextId;
- (void)setContextId:(id)arg1;
- (id)reserveScene;
- (void)setReserveScene:(id)arg1;
- (id)sourceType;
- (void)setSourceType:(id)arg1;
- (void).cxx_destruct;
@end
