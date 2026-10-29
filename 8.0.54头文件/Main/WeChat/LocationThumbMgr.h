@interface LocationThumbMgr : MMUserService <QMapViewDelegate, IMsgExt, MMServiceProtocol>
{
    MMMapView * _mapView; // +0x8
    UIView * _mapPinView; // +0x10
    NSMutableDictionary * _taskDic; // +0x18
    NSMutableArray * _taskQueue; // +0x20
    MMTimer * _taskTimer; // +0x28
    BOOL _isUpdating; // +0x30
    BOOL _hasReportLocateError; // +0x31
}
+ (id)getThumbPathWithChatname:(id)arg1 MsgLocalID:(unsigned int)arg2;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceMemoryWarning;
- (void)dealloc;
- (void)enterBackground;
- (void)enterForeground;
- (void)cleanResource;
- (id)getLocationThumb:(id)arg1 MsgLocalID:(unsigned int)arg2;
- (int)updateLocationThumb:(id)arg1;
- (int)deleteLocationThumb:(id)arg1 MsgLocalID:(unsigned int)arg2;
- (int)startUpdate;
- (int)stopUpdate;
- (void)onTimeout;
- (void)notifyTimeout;
- (void)startNextTask;
- (void)addThumbTask:(id)arg1;
- (void)deleteThumbTask:(id)arg1;
- (void)asyncGenThumbImage;
- (void)onTaskFailedWithError:(int)arg1;
- (void)initMapView;
- (void)loadMapView:(id)arg1;
- (void)configMapView:(id)arg1;
- (void)saveThumbImage:(id)arg1 Chatname:(id)arg2 MsgLocalID:(unsigned int)arg3;
- (void)deleteThumbImageWithChatname:(id)arg1 MsgLocalID:(unsigned int)arg2;
- (void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 DelAll:(BOOL)arg2;
- (void).cxx_destruct;
@end

