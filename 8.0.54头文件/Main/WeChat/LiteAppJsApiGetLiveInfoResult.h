@interface LiteAppJsApiGetLiveInfoResult : NSObject
{
    BOOL _isLiving; // +0x8
    BOOL _isCharge; // +0x9
    NSString * _objectID; // +0x10
}
- (BOOL)isLiving;
- (void)setIsLiving:(BOOL)arg1;
- (BOOL)isCharge;
- (void)setIsCharge:(BOOL)arg1;
- (id)objectID;
- (void)setObjectID:(id)arg1;
- (void).cxx_destruct;
@end

