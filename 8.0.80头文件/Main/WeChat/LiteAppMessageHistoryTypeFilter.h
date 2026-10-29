@interface LiteAppMessageHistoryTypeFilter : NSObject
{
    NSString * _type; // +0x8
    NSArray * _extensions; // +0x10
}
- (id)initWithType:(id)arg1 extensions:(id)arg2;
- (BOOL)shouldDisableMessage:(id)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (id)extensions;
- (void)setExtensions:(id)arg1;
- (void).cxx_destruct;
@end
