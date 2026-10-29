@interface WPUtility : NSObject
+ (unsigned int)genCurrentTime;
+ (unsigned long long)genCurrentTimeInMs;
+ (unsigned long long)genCurrentTimeInMsFrom1970;
+ (BOOL)isiOS13plus;
+ (id)getWritingLogDirPath;
+ (id)getLogDirPath;
+ (id)getLibraryCachePath;
+ (id)stringWithPlayerDecoderType:(long long)arg1;
+ (long long)getDecodeeTypeWith:(long long)arg1;
@end
