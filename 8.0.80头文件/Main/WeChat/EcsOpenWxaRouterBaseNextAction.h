@interface EcsOpenWxaRouterBaseNextAction : NSObject
{
    NSString * _name; // +0x8
}
+ (id)createWithName:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)handleWithActionData:(id)arg1 jumpInfo:(id)arg2 context:(id)arg3;
- (id)name;
- (void).cxx_destruct;
@end
