@interface WCFinderRedDotGameCenterHelper : NSObject
+ (void)addGameCenterRedDotAsTipsId:(id)arg1 showStyle:(long long)arg2 text:(id)arg3 iconUrl:(id)arg4 bigCardImageSize:(CGSize)arg5 ignoreLimit:(BOOL)arg6 expireTime:(long long)arg7 beginShowTime:(long long)arg8 extInfo:(id)arg9;
+ (id)genRedDotCtrlInfoAsTipsId:(id)arg1 showStyle:(long long)arg2 text:(id)arg3 iconUrl:(id)arg4 bigCardImageSize:(CGSize)arg5 ignoreLimit:(BOOL)arg6 expireTime:(long long)arg7 beginShowTime:(long long)arg8 extInfo:(id)arg9;
+ (BOOL)isGameCenterEntryPath:(id)arg1;
+ (id)genCapsuleBubbleForText:(id)arg1;
+ (id)getCurrentGameCenterRedDotExtInfo;
+ (void)disposeGameCenterRedDotForReasonType:(unsigned long long)arg1;
+ (id)getCurrentGameCenterRedDotTipsId;
+ (BOOL)currentGameCenterHasRedDot;
+ (BOOL)globalRedDotFrequencySwitchIsOn;
+ (BOOL)checkGameCenterIsOnRedDotBanStage;
+ (BOOL)currentGameCenterHasSLevelRedDot;
@end

