@interface WCFPSMonitorPlugin : MatrixPlugin
{
    int m_nextRecordID; // +0x8
    WCFPSRecorder * m_currRecorder; // +0x10
    double m_beginTime; // +0x18
    double m_lastTime; // +0x20
    double m_dropTime; // +0x28
    int m_frameCount; // +0x30
    CADisplayLink * m_displayLink; // +0x38
    NSString * m_scene; // +0x40
    NSMutableDictionary * m_customInfo; // +0x48
    double m_hitchTime; // +0x50
    double m_scrollTime; // +0x58
    double m_targetTimestamp; // +0x60
    NSMutableDictionary * m_sceneMaxTimeDict; // +0x68
    NSObject<OS_dispatch_queue> * m_pluginReportQueue; // +0x70
    id <WCFPSMonitorPluginDelegate> _delegate; // +0x78
    id <WCReportStrategyDelegate> _reportDelegate; // +0x80
}
+ (id)getTag;
- (id)init;
- (BOOL)start;
- (void)stop;
- (void)clearRecordData;
- (void)startFPSLogger:(id)arg1 scene:(id)arg2 customInfo:(id)arg3;
- (void)stopFPSLogger;
- (void)cancelFPSLogger;
- (void)onFrameCallback:(id)arg1;
- (void)calcHitchTime;
- (void)startPreScrollLogger:(id)arg1 scene:(id)arg2 customInfo:(id)arg3;
- (void)cancelPreScrollLogger;
- (void)stopPreScrollLogger;
- (void)createNewRecorder;
- (void)uploadReportOnStrategy:(id)arg1;
- (void)reportIssueCompleteWithIssue:(id)arg1 success:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reportDelegate;
- (void)setReportDelegate:(id)arg1;
- (void).cxx_destruct;
@end
