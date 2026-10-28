@interface FBSDKAppEventsUtility : NSObject
+ (id)activityParametersDictionaryForEvent:(id)arg1 implicitEventsOnly:(BOOL)arg2 shouldAccessAdvertisingID:(BOOL)arg3;
+ (id)advertiserID;
+ (unsigned long long)advertisingTrackingStatus;
+ (id)anonymousID;
+ (id)attributionID;
+ (void)clearLibraryFiles;
+ (void)ensureOnMainThread:(id)arg1 className:(id)arg2;
+ (id)flushReasonToString:(unsigned long long)arg1;
+ (void)logAndNotify:(id)arg1;
+ (void)logAndNotify:(id)arg1 allowLogAsDeveloperError:(BOOL)arg2;
+ (BOOL)matchString:(id)arg1 firstCharacterSet:(id)arg2 restOfStringCharacterSet:(id)arg3;
+ (BOOL)regexValidateIdentifier:(id)arg1;
+ (BOOL)validateIdentifier:(id)arg1;
+ (void)persistAnonymousID:(id)arg1;
+ (id)persistenceFilePath:(id)arg1;
+ (id)retrievePersistedAnonymousID;
+ (id)tokenStringToUseFor:(id)arg1;
+ (long long)unixTimeNow;
+ (id)getVariable:(id)arg1 fromInstance:(id)arg2;
+ (id)getNumberValue:(id)arg1;
+ (BOOL)isDebugBuild;
+ (BOOL)isSensitiveUserData:(id)arg1;
+ (BOOL)isCreditCardNumber:(id)arg1;
+ (BOOL)isEmailAddress:(id)arg1;
@end
