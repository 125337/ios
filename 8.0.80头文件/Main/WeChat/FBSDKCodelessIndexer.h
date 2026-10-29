@interface FBSDKCodelessIndexer : NSObject
+ (void)enable;
+ (void)loadCodelessSettingWithCompletionBlock:(id /* block */)arg1;
+ (id)requestToLoadCodelessSetup:(id)arg1;
+ (BOOL)_codelessSetupTimestampIsValid:(id)arg1;
+ (void)setupGesture;
+ (void)checkCodelessIndexingSession;
+ (id)currentSessionDeviceID;
+ (id)extInfo;
+ (void)startIndexing;
+ (void)uploadIndexing;
+ (void)uploadIndexing:(id)arg1;
+ (id)currentViewTree;
+ (id)recursiveCaptureTree:(id)arg1;
+ (id)screenshot;
+ (id)dimensionOf:(id)arg1;
@end
