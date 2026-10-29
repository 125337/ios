@interface WAShareAppMessageForwardLogicControllerComponent : NSObject <ForwardMessageLogicDelegate>
{
    BOOL _hasStartedConfirmShareMtCGI; // +0x8
    unsigned int _currentEventID; // +0xc
    unsigned int _confirmShareMtEventID; // +0x10
    id <WAShareAppMessageForwardLogicControllerComponentDelegate> _delegate; // +0x18
    WAShareAppMessageContextModel * _shareContextModel; // +0x20
    WAShareAppMessageCommonParamsModel * _paramsModel; // +0x28
    WAShareAppMessageForwardLogicControllerComponentModel * _componentModel; // +0x30
    ForwardMessageLogicController * _forwardLogic; // +0x38
    NSMutableArray * _reportArray; // +0x40
    NSMutableDictionary * _shareKeys; // +0x48
}
- (id)forwardLogic;
- (id)initWithShareContextModel:(id)arg1 paramsModel:(id)arg2 componentModel:(id)arg3;
- (void)getShareInfoWithContactList:(id)arg1;
- (void)sendGetShareInfoWithRequest:(id)arg1;
- (void)confirmShareMtWithContactList:(id)arg1;
- (void)sendConfirmShareMtWithRequest:(id)arg1;
- (void)onConfirmShareMtCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)handleConfirmShareMtFailure;
- (void)addKey:(id)arg1 val:(id)arg2 toNodes:(id)arg3;
- (void)addReportShareParamWithContacts:(id)arg1;
- (id)transChatRoomInfosToAuthRooms:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)getChatBotAttachIfNeeded:(id)arg1 toContacts:(id)arg2;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageSelectSession:(id)arg1;
- (void)OnForwardMessageDidTapSend:(id)arg1;
- (void)OnForwardWeAppMessageSend:(id)arg1 appMsgItem:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)shareContextModel;
- (void)setShareContextModel:(id)arg1;
- (id)paramsModel;
- (void)setParamsModel:(id)arg1;
- (id)componentModel;
- (void)setComponentModel:(id)arg1;
- (void)setForwardLogic:(id)arg1;
- (id)reportArray;
- (void)setReportArray:(id)arg1;
- (id)shareKeys;
- (void)setShareKeys:(id)arg1;
- (unsigned int)currentEventID;
- (void)setCurrentEventID:(unsigned int)arg1;
- (unsigned int)confirmShareMtEventID;
- (void)setConfirmShareMtEventID:(unsigned int)arg1;
- (BOOL)hasStartedConfirmShareMtCGI;
- (void)setHasStartedConfirmShareMtCGI:(BOOL)arg1;
- (void).cxx_destruct;
@end
