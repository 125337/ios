@interface WCFinderLiveHomePageInitialParams : NSObject <WCFinderNavLiveStreamL2CacheKeyProtocol>
{
    int _fromScene; // +0x8
    unsigned long long _scene; // +0x10
    NSString * _fromSceneStr; // +0x18
    unsigned long long _relatedObjectId; // +0x20
    NSData * _jumpNavliveBuffer; // +0x28
    NSDictionary * _reportRefJson; // +0x30
}
- (id)prefetchL2CacheKey;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (int)fromScene;
- (void)setFromScene:(int)arg1;
- (id)fromSceneStr;
- (void)setFromSceneStr:(id)arg1;
- (unsigned long long)relatedObjectId;
- (void)setRelatedObjectId:(unsigned long long)arg1;
- (id)jumpNavliveBuffer;
- (void)setJumpNavliveBuffer:(id)arg1;
- (id)reportRefJson;
- (void)setReportRefJson:(id)arg1;
- (void).cxx_destruct;
@end

