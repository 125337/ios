@interface MSECommonUtility : NSObject
+ (unsigned long long)genCurrentTimeInMsFrom1970;
+ (unsigned int)genCurrentTime;
+ (id)getRootDirOfUserLibrary;
+ (double)calculateRequestTimeoutWithBufferLength:(unsigned long long)arg1;
+ (BOOL)isNetworkAvailable;
+ (id)genVisiableSizeWithBytesSize:(long long)arg1;
+ (id)getFileIconWithFileName:(id)arg1;
+ (BOOL)canUseShareExtSend:(long long)arg1;
+ (BOOL)isOverLimit:(long long)arg1;
@end

