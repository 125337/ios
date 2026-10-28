@interface FlutterEmbedderKeyResponder : NSObject <FlutterKeyPrimaryResponder>
{
    id /* block */ _sendEvent; // +0x8
    NSMutableDictionary * _pressingRecords; // +0x10
    unsigned long long _modifierFlagOfInterestMask; // +0x18
    unsigned long long _lastModifierFlagsOfInterest; // +0x20
    unsigned long long _responseId; // +0x28
    NSMutableDictionary * _pendingResponses; // +0x30
}
- (id)initWithSendEvent:(id /* block */)arg1;
- (void)dealloc;
- (void)handlePress:(id)arg1 callback:(id /* block */)arg2;
- (void)synchronizeModifiers:(id)arg1;
- (void)synthesizeCapsLockTapWithTimestamp:(double)arg1;
- (void)updateKey:(unsigned long long)arg1 asPressed:(unsigned long long)arg2;
- (void)sendPrimaryFlutterEvent:(const struct *)arg1 callback:(id)arg2;
- (void)sendEmptyEvent;
- (void)synthesizeModifierEventOfType:(BOOL)arg1 timestamp:(double)arg2 keyCode:(unsigned int)arg3;
- (void)handlePressBegin:(id)arg1 callback:(id)arg2;
- (void)handlePressEnd:(id)arg1 callback:(id)arg2;
- (void)handleResponse:(BOOL)arg1 forId:(unsigned long long)arg2;
- (unsigned int)fixSidedFlags:(int)arg1 withLeftFlag:(int)arg2 withRightFlag:(int)arg3 withLeftKey:(unsigned short)arg4 withRightKey:(unsigned short)arg5 withKeyCode:(unsigned short)arg6 keyDown:(BOOL)arg7 forFlags:(unsigned int)arg8;
- (unsigned int)adjustModifiers:(id)arg1;
- (id /* block */)sendEvent;
- (id)pressingRecords;
- (unsigned long long)modifierFlagOfInterestMask;
- (void)setModifierFlagOfInterestMask:(unsigned long long)arg1;
- (unsigned long long)lastModifierFlagsOfInterest;
- (void)setLastModifierFlagsOfInterest:(unsigned long long)arg1;
- (unsigned long long)responseId;
- (void)setResponseId:(unsigned long long)arg1;
- (id)pendingResponses;
@end
