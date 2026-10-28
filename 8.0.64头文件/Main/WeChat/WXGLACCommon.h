@interface WXGLACCommon : NSObject
{
    unsigned long long m_heartBeatInterval; // +0x8
    unsigned long long m_slowCutInterval; // +0x10
    unsigned long long m_slowGapSpeed; // +0x18
    NSArray * m_resendIntervalArray; // +0x20
    double m_testSpeedDiff; // +0x28
    BOOL m_detectReach; // +0x30
    BOOL m_testSpeedOpen; // +0x31
}
+ (id)sharedInstance;
+ (unsigned int)getTestCount;
+ (id)getTestSpeedPacket;
+ (unsigned int)getTestPacketLength;
+ (BOOL)isTestSpeedPacket:(id)arg1;
+ (id)getSafeDeviceName;
- (id)init;
- (unsigned long long)getHeartBeatInterval;
- (unsigned long long)getSlowCutInterval;
- (unsigned long long)getSlowGapSpeed;
- (BOOL)getClientDetectReach;
- (double)getTestSpeedDiff;
- (id)getResendTimeIntervalArray;
- (BOOL)testSpeedOpen;
- (void).cxx_destruct;
@end
