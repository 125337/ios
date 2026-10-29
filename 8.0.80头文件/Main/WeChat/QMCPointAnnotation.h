@interface QMCPointAnnotation : QPointAnnotation
{
    BOOL _clickable; // +0x8
    BOOL _avoidMarker; // +0x9
    BOOL _avoidAnnotation; // +0xa
    BOOL _aboveLocator; // +0xb
    BOOL _avoidLocator; // +0xc
    BOOL _isSmallDotMarker; // +0xd
    int _zIndex; // +0x10
    int _minLevel; // +0x14
    int _maxLevel; // +0x18
    NSString * _markerId; // +0x20
    NSString * _templateName; // +0x28
    NSString * _templateUrl; // +0x30
    NSString * _style; // +0x38
    NSString * _jsonData; // +0x40
    double _altitude; // +0x48
    NSString * _markerType; // +0x50
    NSString * _extraType; // +0x58
    NSString * _displayTitle; // +0x60
    NSArray * _richInfoContent; // +0x68
    UIColor * _titleColor; // +0x70
    UIColor * _titleStrokeColor; // +0x78
    NSString * _activityControl; // +0x80
    NSDictionary * _activityBubble; // +0x88
}
- (id)markerId;
- (void)setMarkerId:(id)arg1;
- (id)templateName;
- (void)setTemplateName:(id)arg1;
- (id)templateUrl;
- (void)setTemplateUrl:(id)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (id)jsonData;
- (void)setJsonData:(id)arg1;
- (double)altitude;
- (void)setAltitude:(double)arg1;
- (int)zIndex;
- (void)setZIndex:(int)arg1;
- (int)minLevel;
- (void)setMinLevel:(int)arg1;
- (int)maxLevel;
- (void)setMaxLevel:(int)arg1;
- (BOOL)clickable;
- (void)setClickable:(BOOL)arg1;
- (BOOL)avoidMarker;
- (void)setAvoidMarker:(BOOL)arg1;
- (BOOL)avoidAnnotation;
- (void)setAvoidAnnotation:(BOOL)arg1;
- (BOOL)aboveLocator;
- (void)setAboveLocator:(BOOL)arg1;
- (BOOL)avoidLocator;
- (void)setAvoidLocator:(BOOL)arg1;
- (id)markerType;
- (void)setMarkerType:(id)arg1;
- (id)extraType;
- (void)setExtraType:(id)arg1;
- (id)displayTitle;
- (void)setDisplayTitle:(id)arg1;
- (id)richInfoContent;
- (void)setRichInfoContent:(id)arg1;
- (id)titleColor;
- (void)setTitleColor:(id)arg1;
- (id)titleStrokeColor;
- (void)setTitleStrokeColor:(id)arg1;
- (id)activityControl;
- (void)setActivityControl:(id)arg1;
- (id)activityBubble;
- (void)setActivityBubble:(id)arg1;
- (BOOL)isSmallDotMarker;
- (void)setIsSmallDotMarker:(BOOL)arg1;
- (void).cxx_destruct;
@end
