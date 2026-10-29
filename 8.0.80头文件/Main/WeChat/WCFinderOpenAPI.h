@interface WCFinderOpenAPI : NSObject
+ (BOOL)pushFinderViewControllerFromJSAPIWithCurrentNavController:(id)arg1 customParam:(id)arg2 extraParams:(id)arg3;
+ (void)pushFinderProfileWithExportUserName:(id)arg1 currentNavController:(id)arg2 cardType:(int)arg3 enterScene:(int)arg4 functionalParams:(id)arg5 reportExtraInfo:(id)arg6;
+ (void)pushFinderProfileWithUserName:(id)arg1 currentNavController:(id)arg2 cardType:(int)arg3 enterScene:(int)arg4 functionalParams:(id)arg5 reportExtraInfo:(id)arg6;
+ (void)pushFinderFeedWithFeedId:(id)arg1 nonceID:(id)arg2 currentNavController:(id)arg3 shareScene:(unsigned long long)arg4 cardType:(int)arg5 functionalParams:(id)arg6 reportExtraInfo:(id)arg7;
+ (void)pushFinderFeedWithEncrytedId:(id)arg1 nonceID:(id)arg2 currentNavController:(id)arg3 shareScene:(unsigned long long)arg4 cardType:(int)arg5 functionalParams:(id)arg6 reportExtraInfo:(id)arg7;
+ (void)pushFinderFeedWithEncrytedId:(id)arg1 nonceID:(id)arg2 currentNavController:(id)arg3 shareScene:(unsigned long long)arg4 cardType:(int)arg5 requestScene:(int)arg6 functionalParams:(id)arg7 reportExtraInfo:(id)arg8;
+ (void)getFinderContactWithUsername:(id)arg1 commentScene:(int)arg2 successfulBlock:(id /* block */)arg3 failedBlock:(id /* block */)arg4;
@end
