@interface WeishiReportItem : NSObject
{
    int _scene; // +0x8
    unsigned int _weishiEntranceShowedCount; // +0xc
    int _shootEntranceEndType; // +0x10
    int _alertType; // +0x14
    int _alertSelectType; // +0x18
    NSString * _sessionId; // +0x20
    unsigned long long _shootEntranceStartTime; // +0x28
    unsigned long long _shootEntranceEndTime; // +0x30
    unsigned long long _weishiEntranceClickTime; // +0x38
    unsigned long long _alertClickTime; // +0x40
    unsigned long long _jumpOutTime; // +0x48
}
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (unsigned long long)shootEntranceStartTime;
- (void)setShootEntranceStartTime:(unsigned long long)arg1;
- (unsigned int)weishiEntranceShowedCount;
- (void)setWeishiEntranceShowedCount:(unsigned int)arg1;
- (int)shootEntranceEndType;
- (void)setShootEntranceEndType:(int)arg1;
- (unsigned long long)shootEntranceEndTime;
- (void)setShootEntranceEndTime:(unsigned long long)arg1;
- (unsigned long long)weishiEntranceClickTime;
- (void)setWeishiEntranceClickTime:(unsigned long long)arg1;
- (int)alertType;
- (void)setAlertType:(int)arg1;
- (unsigned long long)alertClickTime;
- (void)setAlertClickTime:(unsigned long long)arg1;
- (int)alertSelectType;
- (void)setAlertSelectType:(int)arg1;
- (unsigned long long)jumpOutTime;
- (void)setJumpOutTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

