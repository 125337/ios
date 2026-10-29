@interface VoIPEnhanceVoiceCoordinator : NSObject
{
    BOOL _enabled; // +0x8
    BOOL _dismissed; // +0x9
    BOOL _shouldShow; // +0xa
    BOOL _isCaller; // +0xb
    BOOL _temporarilyHidden; // +0xc
    BOOL _running; // +0xd
    NSString * _conversation; // +0x10
    unsigned long long _roomID; // +0x18
    long long _roomType; // +0x20
    VoIPEnhanceVoicePoller * _poller; // +0x28
    VoIPEnhanceVoiceBubbleView * _bubbleView; // +0x30
    UIView * _container; // +0x38
    double _availableWidth; // +0x40
    double _bubbleBottom; // +0x48
    double _arrowCenterX; // +0x50
}
- (id)initWithConversation:(id)arg1 roomID:(unsigned long long)arg2 isCaller:(BOOL)arg3;
- (void)dealloc;
- (void)startWithInitialRoomType:(long long)arg1;
- (void)stop;
- (void)presentInContainer:(id)arg1 availableWidth:(double)arg2 bubbleBottom:(double)arg3 arrowCenterX:(double)arg4 roomType:(long long)arg5;
- (void)setTemporarilyHidden:(BOOL)arg1;
- (void)refreshBubble;
- (id)bubbleViewIfNeeded;
- (void)onClickEnhanceVoice;
- (void)onCloseEnhanceVoiceBubble;
- (long long)currentExposureIndex;
- (void)reportEvent:(id)arg1 viewId:(id)arg2 exposureIndex:(long long)arg3;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isDismissed;
- (void)setDismissed:(BOOL)arg1;
- (BOOL)shouldShow;
- (void)setShouldShow:(BOOL)arg1;
- (id)conversation;
- (void)setConversation:(id)arg1;
- (unsigned long long)roomID;
- (void)setRoomID:(unsigned long long)arg1;
- (BOOL)isCaller;
- (void)setIsCaller:(BOOL)arg1;
- (BOOL)temporarilyHidden;
- (BOOL)running;
- (void)setRunning:(BOOL)arg1;
- (long long)roomType;
- (void)setRoomType:(long long)arg1;
- (id)poller;
- (void)setPoller:(id)arg1;
- (id)bubbleView;
- (void)setBubbleView:(id)arg1;
- (id)container;
- (void)setContainer:(id)arg1;
- (double)availableWidth;
- (void)setAvailableWidth:(double)arg1;
- (double)bubbleBottom;
- (void)setBubbleBottom:(double)arg1;
- (double)arrowCenterX;
- (void)setArrowCenterX:(double)arg1;
- (void).cxx_destruct;
@end
