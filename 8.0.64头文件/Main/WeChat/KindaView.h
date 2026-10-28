@interface KindaView : NSObject <KindaUIViewDelegate, MMKView, KindaViewBase, WCMainWindowExt>
{
    float width; // +0x8
    float height; // +0xc
    long long alignSelf; // +0x10
    float flexBasis; // +0x18
    long long positionType; // +0x20
    float left; // +0x28
    float top; // +0x2c
    float right; // +0x30
    float bottom; // +0x34
    float minWidth; // +0x38
    float maxWidth; // +0x3c
    float minHeight; // +0x40
    float maxHeight; // +0x44
    float aspectRatio; // +0x48
    float flexGrow; // +0x4c
    float flexShrink; // +0x50
    float marginLeft; // +0x54
    float marginTop; // +0x58
    float marginRight; // +0x5c
    float marginBottom; // +0x60
    float paddingLeft; // +0x64
    float paddingTop; // +0x68
    float paddingRight; // +0x6c
    float paddingBottom; // +0x70
    float leftPercent; // +0x74
    float topPercent; // +0x78
    float rightPercent; // +0x7c
    float bottomPercent; // +0x80
    float widthPercent; // +0x84
    float heightPercent; // +0x88
    float marginLeftPercent; // +0x8c
    float marginTopPercent; // +0x90
    float marginRightPercent; // +0x94
    float marginBottomPercent; // +0x98
    BOOL supportDynamicSize; // +0x9c
    NSString * viewid; // +0xa0
    KindaUIView * m_view; // +0xa8
    MMKViewOnClickCallback * m_onClickCallback; // +0xb0
    MMKViewOnLongClickCallback * m_onLongClickCallback; // +0xb8
    long long m_visible; // +0xc0
    NSString * m_viewId; // +0xc8
    CGRect firstFrame; // +0xd0
    BOOL _useStyleLightInterface; // +0xf0
    BOOL _m_isRefreshing; // +0xf1
    UIView * parent; // +0xf8
    KindaView * _wClickAsView; // +0x100
    id <KindaViewDelegate> _delegate; // +0x108
    MMDynamicColor * _backgroundColor; // +0x110
    MMDynamicColor * _borderColor; // +0x118
    MMDynamicColor * _shadowColor; // +0x120
    unsigned long long _maskedCorners; // +0x128
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (id)getView;
- (void)setViewId:(id)arg1;
- (id)getViewId;
- (void)setWidth:(float)arg1;
- (float)getWidth;
- (void)setHeight:(float)arg1;
- (float)getHeight;
- (void)setAlignSelf:(long long)arg1;
- (long long)getAlignSelf;
- (void)setFlexBasis:(float)arg1;
- (float)getFlexBasis;
- (void)setPositionType:(long long)arg1;
- (long long)getPositionType;
- (void)setLeft:(float)arg1;
- (float)getLeft;
- (void)setTop:(float)arg1;
- (float)getTop;
- (void)setRight:(float)arg1;
- (float)getRight;
- (void)setBottom:(float)arg1;
- (float)getBottom;
- (void)setMinWidth:(float)arg1;
- (float)getMinWidth;
- (void)setMaxWidth:(float)arg1;
- (float)getMaxWidth;
- (void)setMinHeight:(float)arg1;
- (float)getMinHeight;
- (void)setMaxHeight:(float)arg1;
- (float)getMaxHeight;
- (void)setAspectRatio:(float)arg1;
- (float)getAspectRatio;
- (void)setFlexGrow:(float)arg1;
- (float)getFlexGrow;
- (void)setFlexShrink:(float)arg1;
- (float)getFlexShrink;
- (void)setMarginLeft:(float)arg1;
- (float)getMarginLeft;
- (void)setMarginTop:(float)arg1;
- (float)getMarginTop;
- (void)setMarginRight:(float)arg1;
- (float)getMarginRight;
- (void)setMarginBottom:(float)arg1;
- (float)getMarginBottom;
- (void)setPaddingLeft:(float)arg1;
- (float)getPaddingLeft;
- (void)setPaddingTop:(float)arg1;
- (float)getPaddingTop;
- (void)setPaddingRight:(float)arg1;
- (float)getPaddingRight;
- (void)setPaddingBottom:(float)arg1;
- (float)getPaddingBottom;
- (void)setBackgroundColor:(id)arg1;
- (id)getBackgroundColor;
- (void)setAccessible:(BOOL)arg1;
- (BOOL)getAccessible;
- (void)setClickable:(BOOL)arg1;
- (BOOL)getClickable;
- (void)setVisible:(long long)arg1;
- (long long)getVisible;
- (void)setBorderWidth:(float)arg1;
- (float)getBorderWidth;
- (void)setBorderColor:(id)arg1;
- (id)getBorderColor;
- (void)setCornerRadius:(float)arg1;
- (float)getCornerRadius;
- (void)setShadowColor:(id)arg1;
- (id)getShadowColor;
- (void)setShadowOffset:(float)arg1;
- (float)getShadowOffset;
- (void)setShadowRadius:(float)arg1;
- (float)getShadowRadius;
- (void)setId:(id)arg1;
- (id)getId;
- (void)accessibilityClickFrom:(id)arg1;
- (void)setOnTouchCallback:(id)arg1;
- (void)setOnClickCallback:(id)arg1;
- (id)getOnClickCallback;
- (void)setOnLongClickCallback:(id)arg1;
- (float)getBottomLeftCornerRadius;
- (float)getBottomRightCornerRadius;
- (float)getTopLeftCornerRadius;
- (float)getTopRightCornerRadius;
- (void)initWithPlatformDelegate:(id)arg1;
- (void)setBottomLeftCornerRadius:(float)arg1;
- (void)setBottomRightCornerRadius:(float)arg1;
- (void)setTopLeftCornerRadius:(float)arg1;
- (void)setTopRightCornerRadius:(float)arg1;
- (void)setLeftPercent:(float)arg1;
- (float)getLeftPercent;
- (void)setTopPercent:(float)arg1;
- (float)getTopPercent;
- (void)setRightPercent:(float)arg1;
- (float)getRightPercent;
- (void)setBottomPercent:(float)arg1;
- (float)getBottomPercent;
- (void)setWidthPercent:(float)arg1;
- (float)getWidthPercent;
- (void)setHeightPercent:(float)arg1;
- (float)getHeightPercent;
- (void)setMarginLeftPercent:(float)arg1;
- (float)getMarginLeftPercent;
- (void)setMarginTopPercent:(float)arg1;
- (float)getMarginTopPercent;
- (void)setMarginRightPercent:(float)arg1;
- (float)getMarginRightPercent;
- (void)setMarginBottomPercent:(float)arg1;
- (float)getMarginBottomPercent;
- (void)setEnableHighLight:(BOOL)arg1;
- (BOOL)getEnableHighLight;
- (void)setSupportDynamicSize:(BOOL)arg1;
- (BOOL)getSupportDynamicSize;
- (void)setRotation:(float)arg1;
- (float)getRotation;
- (void)setScaleX:(float)arg1;
- (float)getScaleX;
- (void)setScaleY:(float)arg1;
- (float)getScaleY;
- (void)setAlpha:(float)arg1;
- (float)getAlpha;
- (void)setAccessibilityString:(id)arg1;
- (id)getAccessibilityString;
- (float)getFrameOriginX;
- (float)getFrameOriginY;
- (float)getAbsoluteOriginXInScreen;
- (float)getAbsoluteOriginYInScreen;
- (float)getAbsoluteOriginXInScreenDP;
- (float)getAbsoluteOriginYInScreenDP;
- (BOOL)getIsRefreshing;
- (void)setIsRefreshing:(BOOL)arg1;
- (void)requestLayout;
- (void)expandHitSize:(float)arg1 height:(float)arg2;
- (void)accessibilityTraitsType:(long long)arg1;
- (void)accessibilityStatesType:(long long)arg1;
- (void)autoWidth;
- (void)autoHeight;
- (void)notifyTap;
- (void)onTapGesture:(id)arg1;
- (void)onLongGesture:(id)arg1;
- (void)notifyLayout;
- (void)addBlurEffect:(int)arg1;
- (void)removeBlurEffect;
- (id)convertPointToView:(id)arg1 view:(id)arg2;
- (id)convertPointToScreen:(id)arg1;
- (id)getBorderPressedColor;
- (float)getPaddingBottomPercent;
- (float)getPaddingLeftPercent;
- (float)getPaddingRightPercent;
- (float)getPaddingTopPercent;
- (float)getTranslateX;
- (float)getTranslateY;
- (BOOL)getSecure;
- (void)setSecure:(BOOL)arg1;
- (void)setBorderPressedColor:(id)arg1;
- (void)setPaddingBottomPercent:(float)arg1;
- (void)setPaddingLeftPercent:(float)arg1;
- (void)setPaddingRightPercent:(float)arg1;
- (void)setPaddingTopPercent:(float)arg1;
- (void)setTranslateX:(float)arg1;
- (void)setTranslateY:(float)arg1;
- (void)setFrameImpl:(id)arg1 callback:(id)arg2;
- (void)requestFrameImpl:(id)arg1;
- (void)didTap:(id)arg1;
- (void)sizeDidChange:(id)arg1;
- (void)mm_onColorAppearanceDidChange;
- (void)onClickToKinda;
- (void)setReportId:(id)arg1;
- (id)getReportId;
- (BOOL)getDisableHighlightDarkMode;
- (void)setDisableHighlightDarkMode:(BOOL)arg1;
- (id)parent;
- (void)setParent:(id)arg1;
- (id)wClickAsView;
- (void)setWClickAsView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)backgroundColor;
- (id)borderColor;
- (id)shadowColor;
- (BOOL)useStyleLightInterface;
- (void)setUseStyleLightInterface:(BOOL)arg1;
- (BOOL)m_isRefreshing;
- (void)setM_isRefreshing:(BOOL)arg1;
- (unsigned long long)maskedCorners;
- (void)setMaskedCorners:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
