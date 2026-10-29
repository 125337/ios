@interface TextStateJumpElement : NSObject
{
    BOOL _hasParsedHandler; // +0x8
    unsigned int _type; // +0xc
    NSString * _key; // +0x10
    NSMutableArray * _dataItems; // +0x18
    id <TextState3rdPartyHandler> _handler; // +0x20
    TextState3rdPartyContext * _context; // +0x28
}
- (id)initWithJumpElement:(id)arg1;
- (id)jumpElement;
- (id)handler;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (id)dataItems;
- (void)setDataItems:(id)arg1;
- (void)setHandler:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (BOOL)hasParsedHandler;
- (void)setHasParsedHandler:(BOOL)arg1;
- (void).cxx_destruct;
@end
