@interface TingRouteInfo : NSObject
{
    BOOL _enableMiniprogram; // +0x8
    NSString * _name; // +0x10
    NSDictionary * _arguments; // +0x18
}
- (id)name;
- (void)setName:(id)arg1;
- (id)arguments;
- (void)setArguments:(id)arg1;
- (BOOL)enableMiniprogram;
- (void)setEnableMiniprogram:(BOOL)arg1;
- (void).cxx_destruct;
@end

