@interface LiteAppUtil : NSObject
+ (id)splitEntry:(id)arg1 urlDecode:(BOOL)arg2;
+ (BOOL)versionGreater:(id)arg1 second:(id)arg2;
+ (unsigned long long)genCurrentTimeInMs;
+ (id)getNetStr:(long long)arg1;
+ (id)getiOSVersion;
+ (id)getDeviceIdentifier;
+ (double)getStatusBarHeight;
+ (id)getSystemFontSize;
+ (BOOL)getIsSystemBoldText;
+ (BOOL)fileExist:(id)arg1;
+ (BOOL)deleteFile:(id)arg1;
@end
