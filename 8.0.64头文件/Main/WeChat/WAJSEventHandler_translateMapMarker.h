@interface WAJSEventHandler_translateMapMarker : WAJSEventHandler_BaseEvent
{
    int _workingAnim; // +0x8
    NSMutableArray * _keyFrames; // +0x10
    NSDictionary * _dic; // +0x18
    WAMapAnnotationView * _markerView; // +0x20
}
- (void)handleJSEvent:(id)arg1;
- (void)startKeyFrameAnimation;
- (void)checkNextFrameAnimation;
- (id)keyFrames;
- (void)setKeyFrames:(id)arg1;
- (id)dic;
- (void)setDic:(id)arg1;
- (id)markerView;
- (void)setMarkerView:(id)arg1;
- (int)workingAnim;
- (void)setWorkingAnim:(int)arg1;
- (void).cxx_destruct;
@end
