@interface FlutterCallbackInformation : NSObject
{
    NSString * _callbackName; // +0x8
    NSString * _callbackClassName; // +0x10
    NSString * _callbackLibraryPath; // +0x18
}
- (void)dealloc;
- (id)callbackName;
- (void)setCallbackName:(id)arg1;
- (id)callbackClassName;
- (void)setCallbackClassName:(id)arg1;
- (id)callbackLibraryPath;
- (void)setCallbackLibraryPath:(id)arg1;
@end
