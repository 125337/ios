@interface EcsShareMenuItem : NSObject
{
    BOOL _disable; // +0x8
    unsigned long long _menuItem; // +0x10
    NSDictionary * _customParam; // +0x18
}
+ (id)createLocalItemArray:(id)arg1;
+ (id)createFromCustom:(id)arg1 afterToCustom:(id)arg2;
+ (id)createLocalItem:(id)arg1;
- (id)initWithMenuItem:(unsigned long long)arg1;
- (id)getId;
- (unsigned long long)menuItem;
- (void)setMenuItem:(unsigned long long)arg1;
- (id)customParam;
- (void)setCustomParam:(id)arg1;
- (BOOL)disable;
- (void)setDisable:(BOOL)arg1;
- (void).cxx_destruct;
@end
