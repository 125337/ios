@interface MeTabWeAppJumpInfo : NSObject
{
    NSNumber * _bizType; // +0x8
    NSString * _biz; // +0x10
    NSNumber * _isInit; // +0x18
    NSNumber * _draftType; // +0x20
}
+ (id)makeWithBizType:(id)arg1 biz:(id)arg2 isInit:(id)arg3 draftType:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)bizType;
- (void)setBizType:(id)arg1;
- (id)biz;
- (void)setBiz:(id)arg1;
- (id)isInit;
- (void)setIsInit:(id)arg1;
- (id)draftType;
- (void)setDraftType:(id)arg1;
- (void).cxx_destruct;
@end
