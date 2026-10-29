@interface WCFPSMonitorPlugin : MatrixPlugin <WCFPSWriterDelegate>
{
    int m_nextRecordID; // +0x8
    WCFPSRecorder * m_currRecorder; // +0x10
    double m_beginTime; // +0x18
    double m_lastTime; // +0x20
    double m_dropTime; // +0x28
    CADisplayLink * m_displayLink; // +0x30
    NSString * m_scene; // +0x38
    NSDictionary * m_customInfo; // +0x40
    double m_hitchTime; // +0x48
    double m_scrollTime; // +0x50
    double m_targetTimestamp; // +0x58
    NSMutableDictionary * m_sceneMaxTimeDict; // +0x60
    NSObject<OS_dispatch_queue> * m_pluginReportQueue; // +0x68
    id <WCFPSMonitorPluginDelegate> _delegate; // +0x70
    id <WCReportStrategyDelegate> _reportDelegate; // +0x78
}
+ (id)getTag;
- (id)init;
- (BOOL)start;
- (void)stop;
- (void)startDisplayLink:(id)arg1 customInfo:(id)arg2;
- (void)stopDisplayLink;
- (void)onFrameCallback:(id)arg1;
- (void)calcHitchTime;
- (void)createNewRecorder;
- (void)onFPSReportSaved:(id)arg1;
- (void)uploadReportOnStrategy:(id)arg1;
- (void)uploadReport:(id)arg1;
- (void)reportIssueCompleteWithIssue:(id)arg1 success:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reportDelegate;
- (void)setReportDelegate:(id)arg1;
- (void).cxx_destruct;
@end

