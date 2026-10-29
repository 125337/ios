@interface MMRTCSnsMenuResponder : MMRTCMenuResponder
{
    BOOL _bFromComment; // +0x8
    BOOL _bFromTranlateText; // +0x9
    BOOL _preferUseSystemLoupe; // +0xa
    WCDataItem * _dataItem; // +0x10
    WCUserComment * _comment; // +0x18
    long long _menuTriggerScene; // +0x20
    long long _bubblePullType; // +0x28
    long long _textSelectType; // +0x30
}
+ (id)askXiaoWeiMenuItem;
+ (id)askXiaoWeiMenuTitleForOriginalKey:(id)arg1;
+ (void)showAskXiaoWeiWithDataItem:(id)arg1 commentList:(id)arg2 selectedComment:(id)arg3 selectedText:(id)arg4 fromViewController:(id)arg5;
+ (void)showAskXiaoWeiWithDataItem:(id)arg1 commentList:(id)arg2 selectedComment:(id)arg3 selectedText:(id)arg4 triggerScene:(unsigned long long)arg5 fromViewController:(id)arg6;
+ (void)showAskXiaoWeiWithDataItem:(id)arg1 commentList:(id)arg2 selectedComment:(id)arg3 selectedText:(id)arg4 isFullTextSelected:(BOOL)arg5 fromViewController:(id)arg6;
+ (void)showAskXiaoWeiWithDataItem:(id)arg1 commentList:(id)arg2 selectedComment:(id)arg3 selectedText:(id)arg4 isFullTextSelected:(BOOL)arg5 triggerScene:(unsigned long long)arg6 fromViewController:(id)arg7;
+ (void)showTimelineArticleAskXiaoWeiWithDataItem:(id)arg1 mediaItem:(id)arg2 triggerScene:(unsigned long long)arg3 fromViewController:(id)arg4;
+ (void)showTimelineFinderAskXiaoWeiWithDataItem:(id)arg1 triggerScene:(unsigned long long)arg2 fromViewController:(id)arg3;
+ (id)timelineArticleCoverMediaItemWithDataItem:(id)arg1 mediaItem:(id)arg2;
+ (BOOL)isTimelineArticleStickerWithDataItem:(id)arg1 mediaItem:(id)arg2;
+ (id)timelineFinderShareItemWithDataItem:(id)arg1;
+ (id)timelineFinderDataItemWithDataItem:(id)arg1;
+ (BOOL)canShowTimelineArticleAskXiaoWeiWithDataItem:(id)arg1;
+ (BOOL)canShowTimelineFinderAskXiaoWeiWithDataItem:(id)arg1;
+ (id)timelineArticleAskXiaoWeiSrcInfoWithDataItem:(id)arg1 mediaItem:(id)arg2;
+ (id)timelineFinderAskXiaoWeiSrcInfoWithDataItem:(id)arg1;
+ (id)timelineArticleMessageWithDataItem:(id)arg1 mediaItem:(id)arg2;
+ (id)timelineFinderMessageWithDataItem:(id)arg1;
+ (void)reportFeedAskXiaoWeiEvent:(unsigned long long)arg1 dataItem:(id)arg2 triggerType:(unsigned long long)arg3 triggerScene:(unsigned long long)arg4 localSelection:(BOOL)arg5;
+ (void)reportFeedAskXiaoWeiEvent:(unsigned long long)arg1 dataItem:(id)arg2 triggerType:(unsigned long long)arg3 triggerScene:(unsigned long long)arg4 localSelection:(BOOL)arg5 chosenText:(id)arg6;
+ (id)feedAskXiaoWeiSrcInfoWithDataItem:(id)arg1 triggerType:(unsigned long long)arg2 triggerScene:(unsigned long long)arg3;
+ (void)reportCommentAskXiaoWeiEvent:(unsigned long long)arg1 dataItem:(id)arg2 comment:(id)arg3 triggerScene:(unsigned long long)arg4 localSelection:(BOOL)arg5;
+ (id)commentAskXiaoWeiSrcInfoWithDataItem:(id)arg1 comment:(id)arg2 triggerScene:(unsigned long long)arg3;
+ (void)reportImageAskXiaoWeiEvent:(unsigned long long)arg1 dataItem:(id)arg2 mediaItem:(id)arg3 triggerScene:(unsigned long long)arg4;
+ (id)imageAskXiaoWeiSrcInfoWithDataItem:(id)arg1 mediaItem:(id)arg2;
+ (void)reportTimelineArticleAskXiaoWeiEvent:(unsigned long long)arg1 dataItem:(id)arg2 mediaItem:(id)arg3 triggerScene:(unsigned long long)arg4;
+ (void)reportTimelineFinderAskXiaoWeiEvent:(unsigned long long)arg1 dataItem:(id)arg2 triggerScene:(unsigned long long)arg3;
+ (void)reportChatBotAskXiaoWeiEvent:(unsigned long long)arg1 viewId:(id)arg2 enterScene:(int)arg3 srcInfo:(id)arg4;
+ (void)reportAskXiaoWeiEvent:(unsigned long long)arg1 viewId:(id)arg2 enterScene:(int)arg3 srcInfo:(id)arg4 snsParams:(id)arg5;
+ (id)snsAskXiaoWeiParamsWithDataItem:(id)arg1 triggerType:(unsigned long long)arg2 triggerScene:(unsigned long long)arg3 comment:(id)arg4 localSelection:(BOOL)arg5;
+ (unsigned long long)askXiaoWeiTriggerSceneWithMenuTriggerScene:(long long)arg1;
- (id)initWithDataItem:(id)arg1;
- (id)getDataItem;
- (void)onTextFavorite:(id)arg1;
- (void)onWebSearch;
- (void)onAskXiaoWei;
- (void)onTranslateText;
- (void)onSelectAllText:(id)arg1;
- (void)onSelectTextCopy:(id)arg1;
- (BOOL)isAlwaysShowTranslateMenu;
- (void)reportSelectEventWithMenuActionType:(long long)arg1;
- (id)buildExtInfoForSelectEvent;
- (void)onMenuItemShow;
- (id)getSelectMenuItem;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)comment;
- (void)setComment:(id)arg1;
- (BOOL)bFromComment;
- (void)setBFromComment:(BOOL)arg1;
- (BOOL)bFromTranlateText;
- (void)setBFromTranlateText:(BOOL)arg1;
- (long long)menuTriggerScene;
- (void)setMenuTriggerScene:(long long)arg1;
- (long long)bubblePullType;
- (void)setBubblePullType:(long long)arg1;
- (long long)textSelectType;
- (void)setTextSelectType:(long long)arg1;
- (BOOL)preferUseSystemLoupe;
- (void)setPreferUseSystemLoupe:(BOOL)arg1;
- (void).cxx_destruct;
@end
