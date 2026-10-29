@interface FlutterEngineGroup : NSObject
{
    int _enginesCreatedCount; // +0x8
    FlutterEngine * _rootEngine; // +0x10
    BOOL _sharedIsolateMode; // +0x18
    NSString * _name; // +0x20
    NSMutableArray * _engines; // +0x28
    FlutterDartProject * _project; // +0x30
}
- (id)initWithName:(id)arg1 project:(id)arg2;
- (id)initWithName:(id)arg1 project:(id)arg2 sharedIsolateMode:(BOOL)arg3;
- (void)dealloc;
- (id)makeEngineWithEntrypoint:(id)arg1 libraryURI:(id)arg2;
- (id)makeEngineWithEntrypoint:(id)arg1 libraryURI:(id)arg2 initialRoute:(id)arg3;
- (id)makeEngineWithOptions:(id)arg1;
- (id)makeEngine;
- (void)onEngineWillBeDealloced:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)engines;
- (void)setEngines:(id)arg1;
- (id)project;
- (void)setProject:(id)arg1;
- (BOOL)sharedIsolateMode;
- (void)setSharedIsolateMode:(BOOL)arg1;
@end

