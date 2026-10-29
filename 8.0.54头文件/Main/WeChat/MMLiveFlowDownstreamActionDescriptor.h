@interface MMLiveFlowDownstreamActionDescriptor : NSObject
{
    id /* block */ _actionFactory; // +0x8
}
+ (id)createWithActionClass:(Class)arg1;
+ (id)createWithActionInstance:(id)arg1;
+ (id)createWithActionFactory:(id /* block */)arg1;
- (id)action;
- (id /* block */)actionFactory;
- (void)setActionFactory:(id /* block */)arg1;
- (void).cxx_destruct;
@end

