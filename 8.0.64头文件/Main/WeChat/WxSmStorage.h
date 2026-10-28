@interface WxSmStorage : NSObject
{
    struct baseCtx; // +0x8
    int gErrorCode; // +0x2d0
}
- (id)initWithRootPath:(id)arg1 deviceId:(id)arg2 businessId:(id)arg3 userId:(id)arg4;
- (BOOL)setWxValue:(id)arg1 value:(id)arg2;
- (id)getWxValue:(id)arg1;
- (BOOL)hasWxValue:(id)arg1;
- (BOOL)clearWxValue:(id)arg1;
- (BOOL)clearWxAllValue;
@end
