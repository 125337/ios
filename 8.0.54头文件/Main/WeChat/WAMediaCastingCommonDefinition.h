@interface WAMediaCastingCommonDefinition : NSObject
+ (id)formatUpnpSearchError:(unsigned long long)arg1;
+ (id)formatUpnpSearchError:(unsigned long long)arg1 errnum:(int)arg2;
+ (id)formatUpnpSearchError:(unsigned long long)arg1 localizedDescription:(id)arg2;
+ (id)formatUpnpCommandError:(unsigned long long)arg1;
+ (id)formatUpnpCommandError:(unsigned long long)arg1 localizedDescription:(id)arg2;
+ (unsigned long long)formatUpnpVideoPlayerState:(id)arg1;
+ (id)versionString;
+ (id)weakProxyWithTarget:(id)arg1;
@end

