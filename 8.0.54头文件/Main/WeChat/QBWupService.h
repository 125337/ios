@interface QBWupService : NSObject
{
    QBWupTransfer * _transfer; // +0x8
    NSString * _servantName; // +0x10
}
+ (id)service;
- (id)init;
- (id)initWithServant:(id)arg1;
- (id)encodePackageWithFuncName:(id)arg1 parameter:(id)arg2;
- (id)invocation:(id)arg1 parameter:(id)arg2 completeHandle:(id /* block */)arg3;
- (void).cxx_destruct;
@end

