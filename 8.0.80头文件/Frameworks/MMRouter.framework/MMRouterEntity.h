@interface MMRouterEntity : NSObject <NSCopying>
{
    id /* block */ _handlerBlock; // +0x8
    unsigned long long _type; // +0x10
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id /* block */)handlerBlock;
- (void)setHandlerBlock:(id /* block */)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
