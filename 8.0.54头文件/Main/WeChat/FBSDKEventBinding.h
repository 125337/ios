@interface FBSDKEventBinding : NSObject
{
    NSString * _eventName; // +0x8
    NSString * _eventType; // +0x10
    NSString * _appVersion; // +0x18
    NSArray * _path; // +0x20
    NSString * _pathType; // +0x28
    NSArray * _parameters; // +0x30
}
+ (BOOL)matchAnyView:(id)arg1 pathComponent:(id)arg2;
+ (BOOL)match:(id)arg1 pathComponent:(id)arg2;
+ (BOOL)isViewMatchPath:(id)arg1 path:(id)arg2;
+ (BOOL)isPath:(id)arg1 matchViewPath:(id)arg2;
+ (id)findViewByPath:(id)arg1 parent:(id)arg2 level:(int)arg3;
+ (id)findParameterOfPath:(id)arg1 pathType:(id)arg2 sourceView:(id)arg3;
- (id)initWithJSON:(id)arg1;
- (void)trackEvent:(id)arg1;
- (id)eventName;
- (id)eventType;
- (id)appVersion;
- (id)path;
- (id)pathType;
- (id)parameters;
- (void).cxx_destruct;
@end

