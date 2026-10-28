@interface FavForwardLogicController : MMObject <ForwardMessageLogicDelegate, MMTipsViewControllerDelegate, SharePreConfirmSheetViewExt>
{
    ForwardMessageLogicController * m_forwardMsgLogic; // +0x8
    NSArray * m_forwardingItems; // +0x10
    NSArray * m_forwardingDataWraps; // +0x18
    NSMutableArray * m_messageWrapList; // +0x20
    BOOL m_bAddAppMsgSourceType; // +0x28
    BOOL m_isFromSession; // +0x29
    id <FavForwardLogicDelegate> m_delegate; // +0x30
    NSMutableDictionary * _forwardMessageLogics; // +0x38
    NSMutableArray * _shareSheetStack; // +0x40
}
- (id)init;
- (void)ForwardFavItemList:(id)arg1 delegate:(id)arg2;
- (void)ForwardFavItemList:(id)arg1 toUser:(id)arg2 delegate:(id)arg3;
- (void)forwardFavDataItemWraps:(id)arg1 delegate:(id)arg2;
- (void)forwardFavDataItemWraps:(id)arg1 ToUser:(id)arg2 delegate:(id)arg3;
- (id)checkBaseMsgForwardFavDataItemWraps:(id)arg1;
- (void)forwardFavDataItemWraps:(id)arg1 ToUser:(id)arg2 delegate:(id)arg3 showConfirmView:(BOOL)arg4;
- (BOOL)addFavItemList:(id)arg1;
- (void)ForwardFavItem:(id)arg1 ToUser:(id)arg2 delegate:(id)arg3;
- (void)BaseMsgForwardFavItem:(id)arg1 ToUser:(id)arg2 delegate:(id)arg3;
- (void)doForwardFavItem:(id)arg1 ToUser:(id)arg2 delegate:(id)arg3 showConfirmView:(BOOL)arg4;
- (void)forwardMessage:(id)arg1 delegate:(id)arg2;
- (void)forwardMessage:(id)arg1 toUser:(id)arg2 delegate:(id)arg3;
- (void)forMessage:(id)arg1;
- (void)forMessage:(id)arg1 showConfirmView:(BOOL)arg2;
- (void)addMsgFromItem:(id)arg1;
- (void)checkAppMsgSourceType:(id)arg1;
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
- (id)forwardMessageLogics;
- (void)setForwardMessageLogics:(id)arg1;
- (id)shareSheetStack;
- (void)setShareSheetStack:(id)arg1;
- (void).cxx_destruct;
@end
