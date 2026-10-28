@interface GameChatRoomUtil : NSObject
+ (id)fiveDarkColor;
+ (id)uiColorFromBackEndColor:(id)arg1;
+ (id)uiColorFromBackEndColor:(id)arg1 defaultColor:(id)arg2;
+ (void)didJoinNewRoom:(id)arg1;
+ (void)didExitChatRoom:(id)arg1;
+ (id)getRecentlyTickleKeyWithChatRoomName:(id)arg1 andUserName:(id)arg2;
+ (id)lbsInfoFromCLLocation:(id)arg1;
+ (id)getLbsInfo;
+ (BOOL)isFirstTimeAccessForKey:(id)arg1 autoSetIfNotFirst:(BOOL)arg2;
+ (void)setFirstTimeAccessForKey:(id)arg1;
+ (BOOL)isFirstTimeAccessForKeyLifeCycel:(id)arg1;
+ (id)longestIncreasingSequence:(id)arg1;
+ (id)topMostViewControllerConsiderGameTabVc;
+ (id)descAttributeFromContentList:(id)arg1 defaultColor:(id)arg2;
+ (id)currentDateTimeStr;
+ (BOOL)isExpired:(double)arg1 expireDuration:(double)arg2;
@end
