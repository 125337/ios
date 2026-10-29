@interface BrsResidentTemplateMsgScopeItem : NSObject
{
    NSString * _scopeId; // +0x8
    NSNumber * _businessType; // +0x10
    NSNumber * _isScopeRecv; // +0x18
    NSNumber * _isNotifyTemplate; // +0x20
    NSNumber * _isAcceptWithNotify; // +0x28
}
+ (id)makeWithScopeId:(id)arg1 businessType:(id)arg2 isScopeRecv:(id)arg3 isNotifyTemplate:(id)arg4 isAcceptWithNotify:(id)arg5;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)scopeId;
- (void)setScopeId:(id)arg1;
- (id)businessType;
- (void)setBusinessType:(id)arg1;
- (id)isScopeRecv;
- (void)setIsScopeRecv:(id)arg1;
- (id)isNotifyTemplate;
- (void)setIsNotifyTemplate:(id)arg1;
- (id)isAcceptWithNotify;
- (void)setIsAcceptWithNotify:(id)arg1;
- (void).cxx_destruct;
@end
