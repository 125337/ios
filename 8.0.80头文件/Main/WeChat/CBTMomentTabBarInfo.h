@interface CBTMomentTabBarInfo : NSObject
{
    NSString * _name; // +0x8
    NSNumber * _redDotCount; // +0x10
    id /* block */ _handler; // +0x18
}
- (id)name;
- (void)setName:(id)arg1;
- (id)redDotCount;
- (void)setRedDotCount:(id)arg1;
- (id /* block */)handler;
- (void)setHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
