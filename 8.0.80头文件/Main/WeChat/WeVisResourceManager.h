@interface WeVisResourceManager : NSObject <IWeVisResourceProvider>
{
    BOOL _registeredUDRCallback; // +0x8
    NSRecursiveLock * _lock; // +0x10
    NSMutableSet * _observers; // +0x18
    NSDictionary * _resourceRequiredVersions; // +0x20
}
+ (id)sharedManager;
+ (id)pathOfResourceWithKey:(id)arg1;
+ (BOOL)checkResourcesWithKeys:(id)arg1;
+ (void)requestResourcesWithKeys:(id)arg1;
+ (void)addResourceObserver:(id)arg1;
+ (void)removeResourceObserver:(id)arg1;
+ (void)onUdrCallBackSuccess:(id)arg1 name:(id)arg2 version:(int)arg3 scene:(int)arg4;
+ (id)debugDescription;
- (id)init;
- (void)dealloc;
- (long long)requiredVersionOfResource:(id)arg1;
- (void)addResourceObserver:(id)arg1;
- (void)removeResourceObserver:(id)arg1;
- (void)onUdrCallBackSuccess:(id)arg1 name:(id)arg2 version:(int)arg3 scene:(int)arg4;
- (id)modelFilePathForKey:(id)arg1;
- (void)initResourceRequiredVersions;
- (id)lock;
- (void)setLock:(id)arg1;
- (BOOL)registeredUDRCallback;
- (void)setRegisteredUDRCallback:(BOOL)arg1;
- (id)observers;
- (void)setObservers:(id)arg1;
- (id)resourceRequiredVersions;
- (void)setResourceRequiredVersions:(id)arg1;
- (void).cxx_destruct;
@end
