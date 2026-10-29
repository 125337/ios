@interface WCLiveRouterHelper : NSObject
+ (BOOL)tryIntercept:(id)arg1;
+ (void)checkDataItemLiveInfo:(id)arg1 liveID:(unsigned long long)arg2;
+ (void)startFinderLiveWithParams:(id)arg1;
+ (void)showLiveRoomWithParams:(id)arg1;
+ (void)showProfileOrLiveWithSelectiveGoUri:(id)arg1 fromViewController:(id)arg2 entryScene:(int)arg3 completeBlock:(id /* block */)arg4;
+ (void)showLiveRoomFromVC:(id)arg1 redPacketMessage:(id)arg2;
+ (void)showLiveRoomFromVC:(id)arg1 feedID:(id)arg2 nonceID:(id)arg3 liveID:(unsigned long long)arg4 commentScene:(int)arg5 useVerticalFullscreenMinimization:(BOOL)arg6;
+ (void)showLiveRoomFromVC:(id)arg1 feedID:(id)arg2 nonceID:(id)arg3 liveID:(unsigned long long)arg4 commentScene:(int)arg5 entryScene:(int)arg6 entryCardType:(int)arg7 replayEntryType:(id)arg8 useVerticalFullscreenMinimization:(BOOL)arg9;
+ (void)showLiveRoomFromVC:(id)arg1 feedID:(id)arg2 nonceID:(id)arg3 liveID:(unsigned long long)arg4 commentScene:(int)arg5 demotionFlag:(unsigned long long)arg6 byPush:(BOOL)arg7 commByPass:(id)arg8 useVerticalFullscreenMinimization:(BOOL)arg9 failureCompletion:(id /* block */)arg10;
+ (void)showLiveRoomFromVC:(id)arg1 feedID:(id)arg2 nonceID:(id)arg3 liveID:(unsigned long long)arg4 commentScene:(int)arg5 entryScene:(int)arg6 entryCardType:(int)arg7 replayEntryType:(id)arg8 demotionFlag:(unsigned long long)arg9 byPush:(BOOL)arg10 commByPass:(id)arg11 cacheLiveInfoOverride:(id)arg12 rewardInfo:(id)arg13 refSessionBufferKey:(id)arg14 refObjectID:(unsigned long long)arg15 finderForwardSource:(id)arg16 fromNotFinder:(BOOL)arg17 alternativeDataItem:(id)arg18 useVerticalFullscreenMinimization:(BOOL)arg19 failureCompletion:(id /* block */)arg20;
+ (void)showLiveRoomFromVC:(id)arg1 feedID:(id)arg2 nonceID:(id)arg3 liveID:(unsigned long long)arg4 commentScene:(int)arg5 entryScene:(int)arg6 entryCardType:(int)arg7 replayEntryType:(id)arg8 demotionFlag:(unsigned long long)arg9 byPush:(BOOL)arg10 commByPass:(id)arg11 cacheLiveInfoOverride:(id)arg12 rewardInfo:(id)arg13 refSessionBufferKey:(id)arg14 refObjectID:(unsigned long long)arg15 finderForwardSource:(id)arg16 fromNotFinder:(BOOL)arg17 alternativeDataItem:(id)arg18 extParams:(id)arg19 processor:(id /* block */)arg20 failureCompletion:(id /* block */)arg21;
+ (BOOL)pushToMultiMoreLiveFromJSAPIWithCurrentNavController:(id)arg1 customParam:(id)arg2;
+ (BOOL)pushMultiMoreLiveWithFeedExportId:(id)arg1 feedNonceId:(id)arg2 title:(id)arg3 requestScene:(long long)arg4 useDarkStyle:(BOOL)arg5 selectTabId:(unsigned long long)arg6 selectSubTabId:(unsigned long long)arg7 byPassInfo:(id)arg8 entryScene:(int)arg9 navVC:(id)arg10;
+ (BOOL)_pushMultiMoreLiveWithEnterParams:(id)arg1 navVC:(id)arg2;
+ (void)openPurchasedContentWithParams:(id)arg1 nav:(id)arg2;
+ (void)pushFinderThemeLiveVCWithThemeId:(id)arg1 appearance:(id)arg2 entryBuffer:(id)arg3 enterScene:(unsigned long long)arg4;
+ (BOOL)openFinderLiveFromH5JSAPI:(id)arg1 openParams:(id)arg2 extraParams:(id)arg3;
@end
