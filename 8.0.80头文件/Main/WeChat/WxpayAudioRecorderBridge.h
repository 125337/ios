@interface WxpayAudioRecorderBridge : NSObject
+ (void)setPermissionStatusOverrideForTesting:(long long)arg1;
+ (void)resetForTesting;
+ (void)onPreReleaseWithAppUuid:(unsigned int)arg1;
+ (long long)currentMicrophonePermissionStatus;
+ (basic_string<char, std::char_traits<char>, std::allocator<char>>)callNativeRecorderWithAppUuid:(unsigned int)arg1 appId:(const void *)arg2 pageId:(unsigned long long)arg3 method:(const void *)arg4 paramJson:(const void *)arg5;
+ (basic_string<char, std::char_traits<char>, std::allocator<char>>)getFilePathByLocalIdWithAppId:(const void *)arg1 appUuid:(unsigned int)arg2 localId:(const void *)arg3;
@end
