@interface WCFinderPushFeedViewParams : NSObject
{
    BOOL _notGetReleatedList; // +0x8
    BOOL _notShowFooterView; // +0x9
    BOOL _notifyOnBack; // +0xa
    BOOL _fromKeepHolder; // +0xb
    BOOL _fromFinderBoxApi; // +0xc
    BOOL _pauseDefault; // +0xd
    BOOL _fromPhotoWall; // +0xe
    BOOL _enableDragDownClose; // +0xf
    BOOL _enableDragUpClose; // +0x10
    BOOL _allowInfiniteTopPull; // +0x11
    BOOL _playInPushAnimating; // +0x12
    BOOL _needOpenJumpInfo; // +0x13
    BOOL _ignoreUpdateContextId; // +0x14
    BOOL _showScrollUpTips; // +0x15
    BOOL _disableSearch; // +0x16
    BOOL _disablePhotoFeedAutoPlay; // +0x17
    unsigned int _bypassType; // +0x18
    NSString * _fromSessionId; // +0x20
    NSDictionary * _reportDict; // +0x28
    id /* block */ _callBackBlock; // +0x30
    id /* block */ _feedStopPlayCallback; // +0x38
    id /* block */ _willBePodedCallBackBlock; // +0x40
    NSString * _finderUserName; // +0x48
    WCFinderAdReportInfo * _adReportInfo; // +0x50
    id /* block */ _adRelatedSuccessBlock; // +0x58
    long long _adJSAPIType; // +0x60
    NSString * _rewardAdMarketingWord; // +0x68
    long long _rewardAdCountdownTime; // +0x70
    unsigned long long _ringSheetComponentFlag; // +0x78
    NSString * _ringFriendName; // +0x80
    unsigned long long _ringtoneFeedEnterType; // +0x88
    NSString * _customTitle; // +0x90
    id /* block */ _customCloseAction; // +0x98
    WCFinderPushFeedPlayParams * _feedPlayParams; // +0xa0
    WCFinderFullShareListTemplatePlugin * _jsapiPlugin; // +0xa8
    NSString * _shareMsgSource; // +0xb0
    NSString * _shareMsgSvrID; // +0xb8
    NSString * _ecSource; // +0xc0
    WCFinderShareEntranceMessageInfo * _entranceMessageInfo; // +0xc8
    JsApiSourceInfo * _sourceInfo; // +0xd0
    NSData * _shareBypData; // +0xd8
    NSData * _bypassData; // +0xe0
    WCFinderFeedInteractionActionParams * _feedEnterActionParams; // +0xe8
    StreamTabTipsInfo * _tabTipsInfo; // +0xf0
    WCFinderPushFeedViewProductParams * _productInfo; // +0xf8
    NSString * _tipsUuid; // +0x100
    NSString * _statsPlayUuid; // +0x108
    id /* block */ _pushCompletionBlock; // +0x110
    id <WCFinderFullShareListViewControllerDelegate> _shareVCDelagate; // +0x118
    WCFinderPushFeedViewLiveParams * _liveParams; // +0x120
    unsigned long long _refCommentId; // +0x128
    WCFinderDataItem * _sourceFeedDataItem; // +0x130
    unsigned long long _minimizeFlag; // +0x138
    OftenReadAuthorInfo * _oftenReadAuthorInfo; // +0x140
    unsigned long long _startDisplayImageIndex; // +0x148
}
- (id)feedPlayParams;
- (void)setStartPlayVideoTime:(double)arg1;
- (double)startPlayVideoTime;
- (id)adReportInfo;
- (BOOL)notGetReleatedList;
- (void)setNotGetReleatedList:(BOOL)arg1;
- (id)fromSessionId;
- (void)setFromSessionId:(id)arg1;
- (id)reportDict;
- (void)setReportDict:(id)arg1;
- (BOOL)notShowFooterView;
- (void)setNotShowFooterView:(BOOL)arg1;
- (BOOL)notifyOnBack;
- (void)setNotifyOnBack:(BOOL)arg1;
- (id /* block */)callBackBlock;
- (void)setCallBackBlock:(id /* block */)arg1;
- (id /* block */)feedStopPlayCallback;
- (void)setFeedStopPlayCallback:(id /* block */)arg1;
- (id /* block */)willBePodedCallBackBlock;
- (void)setWillBePodedCallBackBlock:(id /* block */)arg1;
- (id)finderUserName;
- (void)setFinderUserName:(id)arg1;
- (void)setAdReportInfo:(id)arg1;
- (id /* block */)adRelatedSuccessBlock;
- (void)setAdRelatedSuccessBlock:(id /* block */)arg1;
- (long long)adJSAPIType;
- (void)setAdJSAPIType:(long long)arg1;
- (id)rewardAdMarketingWord;
- (void)setRewardAdMarketingWord:(id)arg1;
- (long long)rewardAdCountdownTime;
- (void)setRewardAdCountdownTime:(long long)arg1;
- (unsigned long long)ringSheetComponentFlag;
- (void)setRingSheetComponentFlag:(unsigned long long)arg1;
- (id)ringFriendName;
- (void)setRingFriendName:(id)arg1;
- (unsigned long long)ringtoneFeedEnterType;
- (void)setRingtoneFeedEnterType:(unsigned long long)arg1;
- (id)customTitle;
- (void)setCustomTitle:(id)arg1;
- (BOOL)fromKeepHolder;
- (void)setFromKeepHolder:(BOOL)arg1;
- (BOOL)fromFinderBoxApi;
- (void)setFromFinderBoxApi:(BOOL)arg1;
- (BOOL)pauseDefault;
- (void)setPauseDefault:(BOOL)arg1;
- (id /* block */)customCloseAction;
- (void)setCustomCloseAction:(id /* block */)arg1;
- (BOOL)fromPhotoWall;
- (void)setFromPhotoWall:(BOOL)arg1;
- (BOOL)enableDragDownClose;
- (void)setEnableDragDownClose:(BOOL)arg1;
- (BOOL)enableDragUpClose;
- (void)setEnableDragUpClose:(BOOL)arg1;
- (void)setFeedPlayParams:(id)arg1;
- (id)jsapiPlugin;
- (void)setJsapiPlugin:(id)arg1;
- (BOOL)allowInfiniteTopPull;
- (void)setAllowInfiniteTopPull:(BOOL)arg1;
- (id)shareMsgSource;
- (void)setShareMsgSource:(id)arg1;
- (id)shareMsgSvrID;
- (void)setShareMsgSvrID:(id)arg1;
- (id)ecSource;
- (void)setEcSource:(id)arg1;
- (id)entranceMessageInfo;
- (void)setEntranceMessageInfo:(id)arg1;
- (id)sourceInfo;
- (void)setSourceInfo:(id)arg1;
- (id)shareBypData;
- (void)setShareBypData:(id)arg1;
- (unsigned int)bypassType;
- (void)setBypassType:(unsigned int)arg1;
- (id)bypassData;
- (void)setBypassData:(id)arg1;
- (BOOL)playInPushAnimating;
- (void)setPlayInPushAnimating:(BOOL)arg1;
- (id)feedEnterActionParams;
- (void)setFeedEnterActionParams:(id)arg1;
- (id)tabTipsInfo;
- (void)setTabTipsInfo:(id)arg1;
- (BOOL)needOpenJumpInfo;
- (void)setNeedOpenJumpInfo:(BOOL)arg1;
- (id)productInfo;
- (void)setProductInfo:(id)arg1;
- (id)tipsUuid;
- (void)setTipsUuid:(id)arg1;
- (id)statsPlayUuid;
- (void)setStatsPlayUuid:(id)arg1;
- (id /* block */)pushCompletionBlock;
- (void)setPushCompletionBlock:(id /* block */)arg1;
- (id)shareVCDelagate;
- (void)setShareVCDelagate:(id)arg1;
- (BOOL)ignoreUpdateContextId;
- (void)setIgnoreUpdateContextId:(BOOL)arg1;
- (BOOL)showScrollUpTips;
- (void)setShowScrollUpTips:(BOOL)arg1;
- (id)liveParams;
- (void)setLiveParams:(id)arg1;
- (unsigned long long)refCommentId;
- (void)setRefCommentId:(unsigned long long)arg1;
- (id)sourceFeedDataItem;
- (void)setSourceFeedDataItem:(id)arg1;
- (unsigned long long)minimizeFlag;
- (void)setMinimizeFlag:(unsigned long long)arg1;
- (id)oftenReadAuthorInfo;
- (void)setOftenReadAuthorInfo:(id)arg1;
- (BOOL)disableSearch;
- (void)setDisableSearch:(BOOL)arg1;
- (unsigned long long)startDisplayImageIndex;
- (void)setStartDisplayImageIndex:(unsigned long long)arg1;
- (BOOL)disablePhotoFeedAutoPlay;
- (void)setDisablePhotoFeedAutoPlay:(BOOL)arg1;
- (void).cxx_destruct;
@end
