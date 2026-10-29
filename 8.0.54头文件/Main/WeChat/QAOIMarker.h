@interface QAOIMarker : NSObject
{
    BOOL _visible; // +0x8
    float _fontSize; // +0xc
    int _priority; // +0x10
    NSString * _poiUID; // +0x18
    NSString * _mainPoiUID; // +0x20
    NSString * _iconName; // +0x28
    NSString * _name; // +0x30
    NSString * _color; // +0x38
    NSString * _category; // +0x40
    double _latitude; // +0x48
    double _longitude; // +0x50
    QAOIMarkerHandler * _handler; // +0x58
    NSString * _annoTextImgName; // +0x60
    double _iconWidth; // +0x68
    double _iconHeight; // +0x70
    double _annoTextImgWidth; // +0x78
    double _annoTextImgHeight; // +0x80
    double _annoTextStrokeWidth; // +0x88
    NSString * _annoTextStrokeColor; // +0x90
}
- (id)poiUID;
- (void)setPoiUID:(id)arg1;
- (id)mainPoiUID;
- (void)setMainPoiUID:(id)arg1;
- (id)iconName;
- (void)setIconName:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (id)category;
- (void)setCategory:(id)arg1;
- (float)fontSize;
- (void)setFontSize:(float)arg1;
- (double)latitude;
- (void)setLatitude:(double)arg1;
- (double)longitude;
- (void)setLongitude:(double)arg1;
- (int)priority;
- (void)setPriority:(int)arg1;
- (BOOL)visible;
- (void)setVisible:(BOOL)arg1;
- (id)handler;
- (void)setHandler:(id)arg1;
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
- (void).cxx_destruct;
@end

