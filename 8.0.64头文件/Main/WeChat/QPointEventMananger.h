@interface QPointEventMananger : NSObject <QMapContextDelegate>
{
    BOOL _pointEventEnable; // +0x8
    int _pointEventCloudControl; // +0xc
    int _requestFailureCounter; // +0x10
    QMapContext * _context; // +0x18
    QMediator * _mediator; // +0x20
    QUniversalMapCounter * _showCounter; // +0x28
    QMapRepeatTimer * _timer; // +0x30
    QPointEventEngine * _pointEventEngine; // +0x38
    NSMutableDictionary * _eventIDDict; // +0x40
    NSCache * _imgURLCache; // +0x48
    NSMutableArray * _currentEventIDs; // +0x50
    NSMutableArray * _requestEventIDs; // +0x58
    double _mapScaleHolder; // +0x60
    NSCache * _eventCache; // +0x68
    struct _mapRectHolder; // +0x70
}
- (void)setPointEventEnable:(BOOL)arg1;
- (void)disablePointEvent;
- (void)updatePointEventState:(int)arg1;
- (BOOL)pointEventEnable;
- (int)pointEventCloudControl;
- (void)startPointEvent;
- (void)invalidateTimer;
- (id)init;
- (void)dealloc;
- (void)refreshCurrentEventInfo:(id)arg1 withEventID:(id)arg2;
- (void)removeMarkers;
- (void)requestPointEventData;
- (void)notifyConnectionFail;
- (void)notifyConnectionSuccess:(id)arg1;
- (void)setContext:(id)arg1;
- (void)mapContextDidMapStatusChangedBeforeDraw:(id)arg1;
- (void)loadMarkerImage:(id)arg1 completion:(id /* block */)arg2;
- (id)constructMarkerWithDict:(id)arg1 withImagPath:(id)arg2;
- (void)assembleMarkerInfoDict:(id)arg1;
- (void)setUpMarkerWithImagePath:(id)arg1 withInfo:(id)arg2;
- (id)createPointEventRequestData;
- (id)getRectBoundString;
- (id)getIconImagePath;
- (id)getImageURLMd5String:(id)arg1;
- (id)constructInfoDictionary:(id)arg1;
- (id)getMarkerInfo:(int)arg1;
- (void)updateLocalPointEventConfig:(int)arg1 withConfigPath:(id)arg2;
- (id)generatePointEventMarkerPayload:(id)arg1;
- (id)handlerForPointEventMarker:(id)arg1;
- (void)setPointEventCloudControl:(int)arg1;
- (id)context;
- (id)mediator;
- (void)setMediator:(id)arg1;
- (id)showCounter;
- (void)setShowCounter:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (id)pointEventEngine;
- (void)setPointEventEngine:(id)arg1;
- (id)eventIDDict;
- (void)setEventIDDict:(id)arg1;
- (int)requestFailureCounter;
- (void)setRequestFailureCounter:(int)arg1;
- (id)imgURLCache;
- (void)setImgURLCache:(id)arg1;
- (id)currentEventIDs;
- (void)setCurrentEventIDs:(id)arg1;
- (id)requestEventIDs;
- (void)setRequestEventIDs:(id)arg1;
- (struct)mapRectHolder;
- (void)setMapRectHolder:(struct)arg1;
- (double)mapScaleHolder;
- (void)setMapScaleHolder:(double)arg1;
- (id)eventCache;
- (void)setEventCache:(id)arg1;
- (void).cxx_destruct;
@end
