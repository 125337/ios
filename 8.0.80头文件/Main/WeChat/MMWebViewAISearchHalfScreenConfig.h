@interface MMWebViewAISearchHalfScreenConfig : NSObject <PBCoding>
{
    BOOL _hiddenSearchHeader; // +0x8
    unsigned int _scene; // +0xc
    float _halfPageHeightRatio; // +0x10
    NSString * _query; // +0x18
    NSString * _thirdExtParam; // +0x20
}
+ (void)PBArrayAdd_query;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_halfPageHeightRatio;
+ (void)PBArrayAdd_hiddenSearchHeader;
+ (void)PBArrayAdd_thirdExtParam;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)query;
- (void)setQuery:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (float)halfPageHeightRatio;
- (void)setHalfPageHeightRatio:(float)arg1;
- (BOOL)hiddenSearchHeader;
- (void)setHiddenSearchHeader:(BOOL)arg1;
- (id)thirdExtParam;
- (void)setThirdExtParam:(id)arg1;
- (void).cxx_destruct;
@end
