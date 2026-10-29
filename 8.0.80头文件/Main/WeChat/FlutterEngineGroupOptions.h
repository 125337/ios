@interface FlutterEngineGroupOptions : NSObject
{
    BOOL _isolatedFontCollection; // +0x8
    NSString * _entrypoint; // +0x10
    NSString * _libraryURI; // +0x18
    NSString * _initialRoute; // +0x20
    NSArray * _entrypointArgs; // +0x28
    NSNumber * _sharedIsolateMode; // +0x30
}
- (id)entrypoint;
- (void)setEntrypoint:(id)arg1;
- (id)libraryURI;
- (void)setLibraryURI:(id)arg1;
- (id)initialRoute;
- (void)setInitialRoute:(id)arg1;
- (id)entrypointArgs;
- (void)setEntrypointArgs:(id)arg1;
- (id)sharedIsolateMode;
- (void)setSharedIsolateMode:(id)arg1;
- (BOOL)isolatedFontCollection;
- (void)setIsolatedFontCollection:(BOOL)arg1;
- (void).cxx_destruct;
@end
