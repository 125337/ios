@interface MMEmotionMsgBrowseLiteAppLogic : NSObject <MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, IEmoticonDownloadExt, IMsgRevokeExt, MMUIViewControllerDelegate, EmoticonStoreItemExt, IStoreEmotionDesignerInfoMgrExt>
{
    int _emotionScene; // +0x8
    NSString * _sessionID; // +0x10
    EmoticonCustomAddLogicController * _emoticonAddLogicController; // +0x18
    long long _vcHash; // +0x20
    EmoticonHalfScreenSendView * _halfScreenSendView; // +0x28
    CMessageWrap * _messageWrap; // +0x30
    CEmoticonWrap * _emoticonWrap; // +0x38
    NSString * _feedId; // +0x40
    NSString * _finderUserName; // +0x48
    EmoticonStoreItem * _storeItem; // +0x50
    PersonalDesigner * _designer; // +0x58
    NSString * _currentDesignerId; // +0x60
    CEmoticonWrap * _currentPageEmoticonWrap; // +0x68
    MMLiteAppViewController * _viewController; // +0x70
    MMScrollActionSheet * _scrollActionSheet; // +0x78
    NSString * _operatingMd5; // +0x80
    CEmoticonWrap * _operatingEmoticonWrap; // +0x88
}
+ (id)createLogicWithMessageWrap:(id)arg1 attachedLiteAppVC:(id)arg2;
+ (id)createLogicWithEmoticonWrap:(id)arg1 attachedLiteAppVC:(id)arg2;
+ (id)createLogicForWidgetWithEmoticonWrap:(id)arg1 viewController:(id)arg2;
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
- (id)initWithEmoticonWrap:(id)arg1 attachedLiteAppVC:(id)arg2;
- (void)dealloc;
- (id)getChatName;
- (id)getDesc:(id)arg1;
- (id)emoticonAddLogicController;
- (void)reportBottomCellAction:(unsigned long long)arg1;
- (id)msgWrapForOperation;
- (id)emoticonWrapForAdd;
- (id)getReportFromUsr;
- (BOOL)shouldGetDescFromMsgWrap;
- (void)tryGetAdditionalInfoForFirstEnter;
- (id)getViewController;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (int)emotionScene;
- (void)setEmotionScene:(int)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (void)setEmoticonAddLogicController:(id)arg1;
- (long long)vcHash;
- (void)setVcHash:(long long)arg1;
- (id)halfScreenSendView;
- (void)setHalfScreenSendView:(id)arg1;
- (id)messageWrap;
- (void)setMessageWrap:(id)arg1;
- (id)emoticonWrap;
- (void)setEmoticonWrap:(id)arg1;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (id)finderUserName;
- (void)setFinderUserName:(id)arg1;
- (id)storeItem;
- (void)setStoreItem:(id)arg1;
- (id)designer;
- (void)setDesigner:(id)arg1;
- (id)currentDesignerId;
- (void)setCurrentDesignerId:(id)arg1;
- (id)currentPageEmoticonWrap;
- (void)setCurrentPageEmoticonWrap:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)scrollActionSheet;
- (void)setScrollActionSheet:(id)arg1;
- (id)operatingMd5;
- (void)setOperatingMd5:(id)arg1;
- (id)operatingEmoticonWrap;
- (void).cxx_destruct;
@end
