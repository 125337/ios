@interface BatchQuitChatRoomLogic : NSObject <PBMessageObserverDelegate>
{
    BOOL _clearHistory; // +0x8
    BOOL _running; // +0x9
    BOOL _hasNetworkError; // +0xa
    unsigned int _eventID; // +0xc
    id <BatchQuitChatRoomLogicDelegate> _delegate; // +0x10
    NSMutableArray * _pendingRoomNames; // +0x18
    NSMutableArray * _approvedRoomNames; // +0x20
    NSMutableArray * _successRoomNames; // +0x28
    NSMutableDictionary * _failures; // +0x30
    NSMutableDictionary * _retryCountByRoomName; // +0x38
    NSMutableDictionary * _oldUITypeByRoomName; // +0x40
    NSArray * _activeRequestRoomNames; // +0x48
    NSString * _currentRoomName; // +0x50
    unsigned long long _stage; // +0x58
    unsigned long long _retryGeneration; // +0x60
    NSString * _errorMessage; // +0x68
}
- (id)init;
- (void)dealloc;
- (void)startWithRoomNames:(id)arg1 clearHistory:(BOOL)arg2;
- (void)cancel;
- (void)processNextRoom;
- (void)approveCurrentRoomAndContinue:(id)arg1;
- (void)prepareApprovedRoomsAndSend;
- (void)sendBatchWithRoomNames:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleBatchResponse:(id)arg1;
- (void)handleResultList:(id)arg1 requestedRoomNames:(id)arg2;
- (BOOL)enqueueRetryForRoom:(id)arg1 intoRoomNames:(id)arg2;
- (void)scheduleRetryForRoomNames:(id)arg1 delayed:(BOOL)arg2;
- (void)reconcileSuccessfulRoom:(id)arg1;
- (void)recordSuccessForRoom:(id)arg1;
- (void)recordFailureForRoom:(id)arg1 errorMessage:(id)arg2;
- (void)complete;
- (void)removeActiveEventObserver;
- (id)genericQuitFailureMessage;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)pendingRoomNames;
- (void)setPendingRoomNames:(id)arg1;
- (id)approvedRoomNames;
- (void)setApprovedRoomNames:(id)arg1;
- (id)successRoomNames;
- (void)setSuccessRoomNames:(id)arg1;
- (id)failures;
- (void)setFailures:(id)arg1;
- (id)retryCountByRoomName;
- (void)setRetryCountByRoomName:(id)arg1;
- (id)oldUITypeByRoomName;
- (void)setOldUITypeByRoomName:(id)arg1;
- (id)activeRequestRoomNames;
- (void)setActiveRequestRoomNames:(id)arg1;
- (id)currentRoomName;
- (void)setCurrentRoomName:(id)arg1;
- (BOOL)clearHistory;
- (void)setClearHistory:(BOOL)arg1;
- (BOOL)running;
- (void)setRunning:(BOOL)arg1;
- (unsigned long long)stage;
- (void)setStage:(unsigned long long)arg1;
- (unsigned int)eventID;
- (void)setEventID:(unsigned int)arg1;
- (unsigned long long)retryGeneration;
- (void)setRetryGeneration:(unsigned long long)arg1;
- (id)errorMessage;
- (void)setErrorMessage:(id)arg1;
- (BOOL)hasNetworkError;
- (void)setHasNetworkError:(BOOL)arg1;
- (void).cxx_destruct;
@end
