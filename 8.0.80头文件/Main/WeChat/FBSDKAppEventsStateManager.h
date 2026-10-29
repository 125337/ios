@interface FBSDKAppEventsStateManager : NSObject
+ (void)clearPersistedAppEventsStates;
+ (void)persistAppEventsData:(id)arg1;
+ (id)retrievePersistedAppEventsStates;
+ (id)filePath;
@end
