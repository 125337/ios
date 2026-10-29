@interface FlutterEngineGroupOptions : NSObject
{
    NSString * _entrypoint; // +0x8
    NSString * _libraryURI; // +0x10
    NSString * _initialRoute; // +0x18
    NSArray * _entrypointArgs; // +0x20
    NSNumber * _sharedIsolateMode; // +0x28
}
- (void)dealloc;
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
@end

