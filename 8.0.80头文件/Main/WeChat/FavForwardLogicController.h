@interface FavForwardLogicController : MMObject <ForwardMessageLogicDelegate, MMTipsViewControllerDelegate, SharePreConfirmSheetViewExt>
{
    ForwardMessageLogicController * m_forwardMsgLogic; // +0x8
    NSArray * m_forwardingItems; // +0x10
    NSArray * m_forwardingDataWraps; // +0x18
    NSMutableArray * m_messageWrapList; // +0x20
    BOOL m_bAddAppMsgSourceType; // +0x28
    BOOL m_isFromSession; // +0x29
    int _fileSource; // +0x2c
    id <FavForwardLogicDelegate> m_delegate; // +0x30
    NSMutableDictionary * _forwardMessageLogics; // +0x38
    NSMutableArray * _shareSheetStack; // +0x40
    NSMutableDictionary * _reportParamMap; // +0x48
    NSObject<OS_dispatch_queue> * _chatForwardPreparationQueue; // +0x50
    NSMutableDictionary * _chatForwardPreparedItems; // +0x58
    NSMutableDictionary * _chatForwardPreparationVersions; // +0x60
}
+ (BOOL)validateForwardSelectionCount:(unsigned long long)arg1;
- (id)init;
- (void)ForwardFavItemList:(id)arg1 delegate:(id)arg2;
- (void)ForwardFavItemList:(id)arg1 toUser:(id)arg2 delegate:(id)arg3;
- (void)ForwardFavItemList:(id)arg1 toUser:(id)arg2 delegate:(id)arg3 reportParamMap:(id)arg4;
- (void)doForwardFavItemList:(id)arg1 toUser:(id)arg2 delegate:(id)arg3 reportParamMap:(id)arg4;
- (void)forwardFavDataItemWraps:(id)arg1 delegate:(id)arg2;
- (void)forwardFavDataItemWraps:(id)arg1 ToUser:(id)arg2 delegate:(id)arg3;
- (void)forwardFavDataItemWraps:(id)arg1 ToUser:(id)arg2 delegate:(id)arg3 allowDownload:(BOOL)arg4 fileSource:(int)arg5;
- (void)forwardFavDataItemWraps:(id)arg1 ToUser:(id)arg2 delegate:(id)arg3 showConfirmView:(BOOL)arg4;
- (void)forwardFavDataItemWraps:(id)arg1 ToUser:(id)arg2 delegate:(id)arg3 reportParamMap:(id)arg4;
- (id)checkBaseMsgForwardFavDataItemWraps:(id)arg1;
- (void)forwardFavDataItemWraps:(id)arg1 ToUser:(id)arg2 delegate:(id)arg3 showConfirmView:(BOOL)arg4 reportParamMap:(id)arg5 allowDownload:(BOOL)arg6 fileSource:(int)arg7;
- (void)prepareChatForwardDataItemWrap:(id)arg1 selectionKey:(id)arg2;
- (void)invalidateChatForwardPreparedItemForSelectionKey:(id)arg1;
- (void)clearChatForwardPreparedItems;
- (void)forwardPreparedChatForwardDataItemWraps:(id)arg1 selectionKeys:(id)arg2 ToUser:(id)arg3 delegate:(id)arg4 reportParamMap:(id)arg5 fileSource:(int)arg6;
- (BOOL)addFavItemList:(id)arg1 allowDownload:(BOOL)arg2 fileSource:(int)arg3;
- (void)ForwardFavItem:(id)arg1 ToUser:(id)arg2 delegate:(id)arg3;
- (void)ForwardFavItem:(id)arg1 ToUser:(id)arg2 delegate:(id)arg3 fileSource:(int)arg4;
- (void)BaseMsgForwardFavItem:(id)arg1 ToUser:(id)arg2 delegate:(id)arg3;
- (void)doForwardFavItem:(id)arg1 ToUser:(id)arg2 delegate:(id)arg3 showConfirmView:(BOOL)arg4 fileSource:(int)arg5;
- (void)realForwardFavItem:(id)arg1 ToUser:(id)arg2 delegate:(id)arg3 showConfirmView:(BOOL)arg4 fileSource:(int)arg5;
- (void)forwardMessage:(id)arg1 delegate:(id)arg2;
- (void)forwardMessage:(id)arg1 toUser:(id)arg2 delegate:(id)arg3;
- (void)forwardChatMessage:(id)arg1 toUser:(id)arg2 delegate:(id)arg3;
- (void)forMessage:(id)arg1;
- (void)forMessage:(id)arg1 showConfirmView:(BOOL)arg2;
- (void)forMessage:(id)arg1 showConfirmView:(BOOL)arg2 forwardType:(long long)arg3;
- (id)preparedChatForwardItemFromDataWrap:(id)arg1 selectionKey:(id)arg2 fileSource:(int)arg3;
- (id)preparedMessageWrapsFromFavItem:(id)arg1 fileSource:(int)arg2;
- (void)consumePreparedChatForwardMessageWraps:(id)arg1 forwardingItems:(id)arg2 forwardingDataWraps:(id)arg3 recentItems:(id)arg4 warningTip:(id)arg5 toContact:(id)arg6 delegate:(id)arg7 reportParamMap:(id)arg8 batchTag:(id)arg9;
- (void)addMsgFromItem:(id)arg1 fileSource:(int)arg2;
- (void)checkAppMsgSourceType:(id)arg1 fileSource:(int)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (void)OnSharePreConfirmSheetViewShow:(id)arg1;
- (void)OnSharePreConfirmSheetViewClose:(id)arg1;
- (id)currentLogicController;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (int)fileSource;
- (void)setFileSource:(int)arg1;
- (id)forwardMessageLogics;
- (void)setForwardMessageLogics:(id)arg1;
- (id)shareSheetStack;
- (void)setShareSheetStack:(id)arg1;
- (id)reportParamMap;
- (void)setReportParamMap:(id)arg1;
- (id)chatForwardPreparationQueue;
- (void)setChatForwardPreparationQueue:(id)arg1;
- (id)chatForwardPreparedItems;
- (void)setChatForwardPreparedItems:(id)arg1;
- (id)chatForwardPreparationVersions;
- (void)setChatForwardPreparationVersions:(id)arg1;
- (void).cxx_destruct;
@end
