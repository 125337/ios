@interface MMEmotionMsgBrowseLiteAppLogic : NSObject <MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, SharePreConfirmViewDelegate, IEmoticonDownloadExt, IMsgRevokeExt, MMUIViewControllerDelegate, EmoticonStoreItemExt, IStoreEmotionDesignerInfoMgrExt>
{
    long long _emotionScene; // +0x8
    NSString * _sessionID; // +0x10
    EmoticonCustomAddLogicController * _emoticonAddLogicController; // +0x18
    NSString * _feedId; // +0x20
    NSString * _finderUserName; // +0x28
    EmoticonStoreItem * _storeItem; // +0x30
    PersonalDesigner * _designer; // +0x38
    NSString * _currentDesignerId; // +0x40
    NSMutableDictionary * _downloadLogicDict; // +0x48
    CMessageWrap * _messageWrap; // +0x50
    CEmoticonWrap * _emoticonWrap; // +0x58
    CEmoticonWrap * _currentPageEmoticonWrap; // +0x60
    NSString * _appid; // +0x68
    MMLiteAppViewController * _viewController; // +0x70
    MMScrollActionSheet * _scrollActionSheet; // +0x78
    NSString * _operatingMd5; // +0x80
    CEmoticonWrap * _operatingEmoticonWrap; // +0x88
}
+ (id)createLogicWithMessageWrap:(id)arg1 appId:(id)arg2 attachedLiteAppVC:(id)arg3;
+ (id)createLogicWithEmoticonWrap:(id)arg1 appId:(id)arg2 attachedLiteAppVC:(id)arg3;
- (BOOL)onOpenScrollActionSheet:(id)arg1;
- (id)operatingEmoticonWrap;
- (void)configRowItems;
- (void)addActionSheetItem:(unsigned long long)arg1 iconImage:(id)arg2 title:(id)arg3 toArray:(id)arg4;
- (void)handleClickActionSheetItemShareFriend:(id)arg1;
- (void)onSaveEmoticon;
- (void)onFollowEmoticonCamera;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheetWillDismiss:(id)arg1;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (id)extraDataForExpose;
- (id)initWithEmoticonWrap:(id)arg1 appId:(id)arg2 attachedLiteAppVC:(id)arg3;
- (void)dealloc;
- (id)getChatName;
- (id)emoticonAddLogicController;
- (void)reportBottomCellAction:(unsigned long long)arg1;
- (id)msgWrapForOperation;
- (id)emoticonWrapForAdd;
- (id)getReportFromUsr;
- (id)getDesc:(id)arg1;
- (BOOL)shouldGetDescFromMsgWrap;
- (void)createStore;
- (BOOL)onUpdateReportInfo:(id)arg1;
- (BOOL)onUpdateEmojiInfo:(id)arg1;
- (BOOL)getEmoticonImagePathInfo:(id)arg1 instanceId:(unsigned long long)arg2 callbackId:(int)arg3;
- (BOOL)getEmoticonDetail:(id)arg1 instanceId:(unsigned long long)arg2 callbackId:(int)arg3;
- (void)tryGetAdditionalInfoForFirstEnter;
- (void)OnEmoticonStoreItemChanged:(id)arg1;
- (void)setStoreItem:(id)arg1;
- (void)onGetDesignerForDesignerId:(id)arg1 AndDesigner:(id)arg2;
- (void)setDesigner:(id)arg1;
- (BOOL)getEmoticonDesigner:(id)arg1 instanceId:(unsigned long long)arg2 callbackId:(int)arg3;
- (id)getViewController;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (long long)emotionScene;
- (void)setEmotionScene:(long long)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (void)setEmoticonAddLogicController:(id)arg1;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (id)finderUserName;
- (void)setFinderUserName:(id)arg1;
- (id)storeItem;
- (id)designer;
- (id)currentDesignerId;
- (void)setCurrentDesignerId:(id)arg1;
- (id)downloadLogicDict;
- (void)setDownloadLogicDict:(id)arg1;
- (id)messageWrap;
- (void)setMessageWrap:(id)arg1;
- (id)emoticonWrap;
- (void)setEmoticonWrap:(id)arg1;
- (id)currentPageEmoticonWrap;
- (void)setCurrentPageEmoticonWrap:(id)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)scrollActionSheet;
- (void)setScrollActionSheet:(id)arg1;
- (id)operatingMd5;
- (void)setOperatingMd5:(id)arg1;
- (id)operatingEmoticonWrap;
- (void).cxx_destruct;
@end

