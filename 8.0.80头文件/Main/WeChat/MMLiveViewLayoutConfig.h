@interface MMLiveViewLayoutConfig : NSObject
{
    BOOL _visiableInPortait; // +0x8
    BOOL _visiableInLandscape; // +0x9
    BOOL _supportClearContents; // +0xa
    unsigned int _visibleBit; // +0xc
    NSString * _viewId; // +0x10
    NSString * _parentViewId; // +0x18
    NSNumber * _top; // +0x20
    NSNumber * _left; // +0x28
    NSNumber * _right; // +0x30
    NSNumber * _bottom; // +0x38
    NSNumber * _width; // +0x40
    NSNumber * _height; // +0x48
    NSNumber * _centerX; // +0x50
    NSNumber * _centerY; // +0x58
    NSString * _relativeViewId; // +0x60
    NSArray * _relativeConstraints; // +0x68
}
+ (id)configListFromXLabConfigString:(id)arg1;
- (id)initWithXLabConfig:(id)arg1;
- (id)init;
- (void)updateWithXLabConfig:(id)arg1;
- (void)updateWithConfigDictionary:(id)arg1;
- (id)viewId;
- (void)setViewId:(id)arg1;
- (id)parentViewId;
- (void)setParentViewId:(id)arg1;
- (BOOL)visiableInPortait;
- (void)setVisiableInPortait:(BOOL)arg1;
- (BOOL)visiableInLandscape;
- (void)setVisiableInLandscape:(BOOL)arg1;
- (BOOL)supportClearContents;
- (void)setSupportClearContents:(BOOL)arg1;
- (unsigned int)visibleBit;
- (void)setVisibleBit:(unsigned int)arg1;
- (id)top;
- (void)setTop:(id)arg1;
- (id)left;
- (void)setLeft:(id)arg1;
- (id)right;
- (void)setRight:(id)arg1;
- (id)bottom;
- (void)setBottom:(id)arg1;
- (id)width;
- (void)setWidth:(id)arg1;
- (id)height;
- (void)setHeight:(id)arg1;
- (id)centerX;
- (void)setCenterX:(id)arg1;
- (id)centerY;
- (void)setCenterY:(id)arg1;
- (id)relativeViewId;
- (void)setRelativeViewId:(id)arg1;
- (id)relativeConstraints;
- (void)setRelativeConstraints:(id)arg1;
- (void).cxx_destruct;
@end
