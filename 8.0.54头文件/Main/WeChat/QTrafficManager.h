@interface QTrafficManager : NSObject <QMapContextDelegate>
{
    BOOL _enabled; // +0x8
    int _protocolVersion; // +0xc
    QMediator * _mediator; // +0x10
    QMapContext * _mapContext; // +0x18
    double _startZoomLevel; // +0x20
    QTrafficServerEngine * _server; // +0x28
    QMapRepeatTimer * _timer; // +0x30
    NSMutableArray * _downloadingList; // +0x38
}
- (id)init;
- (void)dealloc;
- (void)setMapContext:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)refresh;
- (void)setTrafficMode:(int)arg1 fromZoomLevel:(double)arg2;
- (id)addBlocks:(id)arg1;
- (void)removeBlocks:(id)arg1;
- (void)checkUpdate:(id)arg1;
- (void)writeData:(id)arg1;
- (void)invalidateTimer;
- (void)startAutoRefresh;
- (void)setTrafficStyle:(id)arg1;
- (void)mapContextDidMapStatusChangedBeforeDraw:(id)arg1;
- (BOOL)enabled;
- (id)mediator;
- (void)setMediator:(id)arg1;
- (id)mapContext;
- (double)startZoomLevel;
- (void)setStartZoomLevel:(double)arg1;
- (int)protocolVersion;
- (void)setProtocolVersion:(int)arg1;
- (id)server;
- (void)setServer:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (id)downloadingList;
- (void)setDownloadingList:(id)arg1;
- (void).cxx_destruct;
@end

