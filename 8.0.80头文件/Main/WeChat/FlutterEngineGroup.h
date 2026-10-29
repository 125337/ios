@interface FlutterEngineGroup : NSObject
{
    FlutterEngine * _rootEngine; // +0x8
    BOOL _sharedIsolateMode; // +0x10
    NSString * _name; // +0x18
    NSPointerArray * _engines; // +0x20
    FlutterDartProject * _project; // +0x28
    unsigned long long _enginesCreatedCount; // +0x30
}
- (id)initWithName:(id)arg1 project:(id)arg2;
- (id)initWithName:(id)arg1 project:(id)arg2 sharedIsolateMode:(BOOL)arg3;
- (id)makeEngineWithEntrypoint:(id)arg1 libraryURI:(id)arg2;
- (id)makeEngineWithEntrypoint:(id)arg1 libraryURI:(id)arg2 initialRoute:(id)arg3;
- (id)makeEngineWithEntrypoint:(id)arg1 libraryURI:(id)arg2 initialRoute:(id)arg3 isolatedFontCollection:(BOOL)arg4;
- (id)makeEngineWithOptions:(id)arg1;
- (id)makeEngine;
- (id)name;
- (void)setName:(id)arg1;
- (id)engines;
- (void)setEngines:(id)arg1;
- (id)project;
- (void)setProject:(id)arg1;
- (unsigned long long)enginesCreatedCount;
- (void)setEnginesCreatedCount:(unsigned long long)arg1;
- (BOOL)sharedIsolateMode;
- (void)setSharedIsolateMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
