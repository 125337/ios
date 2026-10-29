@interface MMWebViewAISearchConfig : NSObject <PBCoding>
{
    BOOL _canPlaceholderSearch; // +0x8
    NSString * _logo; // +0x10
    NSString * _title; // +0x18
    NSString * _placeholder; // +0x20
}
+ (void)PBArrayAdd_logo;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_placeholder;
+ (void)PBArrayAdd_canPlaceholderSearch;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)logo;
- (void)setLogo:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)placeholder;
- (void)setPlaceholder:(id)arg1;
- (BOOL)canPlaceholderSearch;
- (void)setCanPlaceholderSearch:(BOOL)arg1;
- (void).cxx_destruct;
@end
