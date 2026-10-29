@interface LiteAppConfigHandlerModel : NSObject
{
    BOOL _withEventExtra; // +0x8
    NSString * _type; // +0x10
    LiteAppConfigActionModel * _action; // +0x18
}
- (id)init;
- (id)type;
- (void)setType:(id)arg1;
- (BOOL)withEventExtra;
- (void)setWithEventExtra:(BOOL)arg1;
- (id)action;
- (void)setAction:(id)arg1;
- (void).cxx_destruct;
@end
