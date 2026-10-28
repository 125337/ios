@interface TemplateWebSearchOPWrap : NSObject
{
    BOOL _isHomePage; // +0x8
    BOOL _hideSearchBar; // +0x9
    unsigned long long _scene; // +0x10
    NSString * _query; // +0x18
    NSString * _extParams; // +0x20
    NSString * _thirdExtParam; // +0x28
    unsigned long long _bizType; // +0x30
    NSString * _navBarTitle; // +0x38
}
+ (id)opWrapWithJSON:(id)arg1;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)extParams;
- (void)setExtParams:(id)arg1;
- (id)thirdExtParam;
- (void)setThirdExtParam:(id)arg1;
- (unsigned long long)bizType;
- (void)setBizType:(unsigned long long)arg1;
- (BOOL)isHomePage;
- (void)setIsHomePage:(BOOL)arg1;
- (BOOL)hideSearchBar;
- (void)setHideSearchBar:(BOOL)arg1;
- (id)navBarTitle;
- (void)setNavBarTitle:(id)arg1;
- (void).cxx_destruct;
@end
