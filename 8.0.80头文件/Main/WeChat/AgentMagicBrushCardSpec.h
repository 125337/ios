@interface AgentMagicBrushCardSpec : NSObject
{
    long long _containerId; // +0x8
    NSString * _cardContext; // +0x10
    AgentMagicBrushCardSize * _size; // +0x18
}
+ (id)makeWithContainerId:(long long)arg1 cardContext:(id)arg2 size:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)containerId;
- (void)setContainerId:(long long)arg1;
- (id)cardContext;
- (void)setCardContext:(id)arg1;
- (id)size;
- (void)setSize:(id)arg1;
- (void).cxx_destruct;
@end
