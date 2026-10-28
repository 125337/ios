@interface QAOIMarkerPayload : NSObject
{
    BOOL _visible; // +0x8
    float _fontSize; // +0xc
    int _markerID; // +0x10
    int _subMarkerID; // +0x14
    int _priority; // +0x18
    NSString * _iconName; // +0x20
    NSString * _name; // +0x28
    NSString * _color; // +0x30
    double _latitude; // +0x38
    double _longitude; // +0x40
    NSString * _annoTextImgName; // +0x48
    double _iconWidth; // +0x50
    double _iconHeight; // +0x58
    double _annoTextImgWidth; // +0x60
    double _annoTextImgHeight; // +0x68
    double _annoTextStrokeWidth; // +0x70
    NSString * _annoTextStrokeColor; // +0x78
    NSString * _annoTextImgKey; // +0x80
}
- (float)fontSize;
- (void)setFontSize:(float)arg1;
- (int)markerID;
- (void)setMarkerID:(int)arg1;
- (int)subMarkerID;
- (void)setSubMarkerID:(int)arg1;
- (id)iconName;
- (void)setIconName:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (double)latitude;
- (void)setLatitude:(double)arg1;
- (double)longitude;
- (void)setLongitude:(double)arg1;
- (id)annoTextImgName;
- (void)setAnnoTextImgName:(id)arg1;
- (double)iconWidth;
- (void)setIconWidth:(double)arg1;
- (double)iconHeight;
- (void)setIconHeight:(double)arg1;
- (double)annoTextImgWidth;
- (void)setAnnoTextImgWidth:(double)arg1;
- (double)annoTextImgHeight;
- (void)setAnnoTextImgHeight:(double)arg1;
- (double)annoTextStrokeWidth;
- (void)setAnnoTextStrokeWidth:(double)arg1;
- (id)annoTextStrokeColor;
- (void)setAnnoTextStrokeColor:(id)arg1;
- (int)priority;
- (void)setPriority:(int)arg1;
- (id)annoTextImgKey;
- (void)setAnnoTextImgKey:(id)arg1;
- (BOOL)visible;
- (void)setVisible:(BOOL)arg1;
- (void).cxx_destruct;
@end
