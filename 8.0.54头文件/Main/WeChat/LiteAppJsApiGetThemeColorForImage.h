@interface LiteAppJsApiGetThemeColorForImage : LiteAppJsApi <MMImageLoaderObserver>
{
    BOOL _hasCallback; // +0x20
    NSString * _scene; // +0x28
}
- (id)init;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (void)onLoadImage:(id)arg1;
- (void)dealloc;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void).cxx_destruct;
@end

