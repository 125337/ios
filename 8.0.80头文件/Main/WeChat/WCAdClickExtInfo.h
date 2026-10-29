@interface WCAdClickExtInfo : NSObject
{
    BOOL _canvasPageUseNormalAnimation; // +0x8
    BOOL _processDynamicCanvas; // +0x9
    BOOL _needReportClick; // +0xa
    int _customCanvasScene; // +0xc
    UIView * _originView; // +0x10
    double _outPlaybackTime; // +0x18
    NSString * _adDynamicCanvasVCExtCheckPattern; // +0x20
    NSString * _canvasDynamicExtInfo; // +0x28
    id <MMLiteAppHalfScreenStatusChangeListener> _halfScreenStatusChangeListener; // +0x30
    CGRect _originRectInScreenForCanvas; // +0x38
}
+ (id)extInfoWithOriginView:(id)arg1;
+ (id)extInfoWithOriginView:(id)arg1 customCanvasScene:(int)arg2;
+ (id)extInfoWithCanvasPageUseNormalAnimation;
- (id)init;
- (BOOL)canvasPageUseNormalAnimation;
- (void)setCanvasPageUseNormalAnimation:(BOOL)arg1;
- (id)originView;
- (void)setOriginView:(id)arg1;
- (int)customCanvasScene;
- (void)setCustomCanvasScene:(int)arg1;
- (double)outPlaybackTime;
- (void)setOutPlaybackTime:(double)arg1;
- (CGRect)originRectInScreenForCanvas;
- (void)setOriginRectInScreenForCanvas:(CGRect)arg1;
- (BOOL)processDynamicCanvas;
- (void)setProcessDynamicCanvas:(BOOL)arg1;
- (id)adDynamicCanvasVCExtCheckPattern;
- (void)setAdDynamicCanvasVCExtCheckPattern:(id)arg1;
- (id)canvasDynamicExtInfo;
- (void)setCanvasDynamicExtInfo:(id)arg1;
- (id)halfScreenStatusChangeListener;
- (void)setHalfScreenStatusChangeListener:(id)arg1;
- (BOOL)needReportClick;
- (void)setNeedReportClick:(BOOL)arg1;
- (void).cxx_destruct;
@end
