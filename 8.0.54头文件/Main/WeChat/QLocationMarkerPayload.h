@interface QLocationMarkerPayload : NSObject
{
    UIImage * _icon; // +0x8
    UIColor * _circleFillColor; // +0x10
    QLocationCompassPayload * _compass; // +0x18
    QLocationRedlinePayload * _redline; // +0x20
}
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)circleFillColor;
- (void)setCircleFillColor:(id)arg1;
- (id)compass;
- (void)setCompass:(id)arg1;
- (id)redline;
- (void)setRedline:(id)arg1;
- (void).cxx_destruct;
@end

