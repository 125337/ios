@interface QVisualLayer : NSObject <QGLOverlayDelegate, QModelOverlayDelegate>
{
    BOOL _visible; // +0x8
    BOOL _isAdded; // +0x9
    BOOL _toUpdateModelData; // +0xa
    int _zIndex; // +0xc
    int _modelPedestalRectCount; // +0x10
    NSString * _layerID; // +0x18
    double _opacity; // +0x20
    id <QVisualLayerDelegate> _delegate; // +0x28
    double _interval; // +0x30
    QMapRepeatTimer * _repeater; // +0x38
    QBaseVisualLayerManager * _manager; // +0x40
    NSString * _modelCachePath; // +0x48
    QLayerCommonData * _commonData; // +0x50
    QVisLayerPayload * _payload; // +0x58
    NSString * _modelFolder; // +0x60
}
- (id)executeCommand:(id)arg1 commandJson:(id)arg2;
- (void)sendEvent:(id)arg1;
- (void)glOverlay:(id)arg1 translateAnimationDidComplete:(BOOL)arg2;
- (void)glOverlay:(id)arg1 didTap:(id)arg2;
- (void)notifyGPLayerLoadEventError:(long long)arg1 msg:(id)arg2;
- (void)glOverlay:(id)arg1 loadStatus:(long long)arg2 withProgress:(double)arg3;
- (void)onLayerLoadEventError:(id)arg1;
- (void)setOpacity:(double)arg1;
- (void)setVisible:(BOOL)arg1;
- (void)setZIndex:(int)arg1;
- (void)setInterval:(double)arg1;
- (void)startTimer:(double)arg1;
- (void)invalidateTimer;
- (void)onLoadCompleteWithError:(id)arg1;
- (void)onLog:(id)arg1 andLevel:(int)arg2;
- (void)clearCache;
- (id)duplicateLayerID;
- (id)getOriginalLayerId;
- (id)initWithUID:(id)arg1;
- (id)clone;
- (void)dealloc;
- (BOOL)visible;
- (id)layerID;
- (void)setLayerID:(id)arg1;
- (double)opacity;
- (int)zIndex;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)interval;
- (id)repeater;
- (void)setRepeater:(id)arg1;
- (id)manager;
- (void)setManager:(id)arg1;
- (id)modelCachePath;
- (void)setModelCachePath:(id)arg1;
- (id)commonData;
- (void)setCommonData:(id)arg1;
- (BOOL)isAdded;
- (void)setIsAdded:(BOOL)arg1;
- (BOOL)toUpdateModelData;
- (void)setToUpdateModelData:(BOOL)arg1;
- (int)modelPedestalRectCount;
- (void)setModelPedestalRectCount:(int)arg1;
- (id)payload;
- (void)setPayload:(id)arg1;
- (id)modelFolder;
- (void)setModelFolder:(id)arg1;
- (void).cxx_destruct;
@end

