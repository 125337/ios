@interface WCAdDynamicFeedElementInfo : NSObject <NSCoding>
{
    BOOL _isNormalStyle; // +0x8
    BOOL _hideForElderMode; // +0x9
    BOOL _isValid; // +0xa
    NSString * _elementId; // +0x10
    NSString * _type; // +0x18
    WCAdDynamicFeedElementValue * _width; // +0x20
    WCAdDynamicFeedElementValue * _height; // +0x28
    WCAdDynamicFeedElementValue * _left; // +0x30
    WCAdDynamicFeedElementValue * _top; // +0x38
    WCAdDynamicFeedElementValue * _right; // +0x40
    WCAdDynamicFeedElementValue * _bottom; // +0x48
    WCAdDynamicFeedElementValue * _minWidth; // +0x50
    WCAdDynamicFeedElementValue * _maxWidth; // +0x58
    WCAdDynamicFeedElementValue * _minHeight; // +0x60
    WCAdDynamicFeedElementValue * _maxHeight; // +0x68
    UIColor * _backgroundColorExt; // +0x70
    WCAdDynamicFeedElementValue * _padding; // +0x78
    WCAdDynamicFeedElementValue * _paddingLeft; // +0x80
    WCAdDynamicFeedElementValue * _paddingTop; // +0x88
    WCAdDynamicFeedElementValue * _paddingRight; // +0x90
    WCAdDynamicFeedElementValue * _paddingBottom; // +0x98
    WCAdDynamicFeedElementValue * _margin; // +0xa0
    WCAdDynamicFeedElementValue * _marginLeft; // +0xa8
    WCAdDynamicFeedElementValue * _marginTop; // +0xb0
    WCAdDynamicFeedElementValue * _marginRight; // +0xb8
    WCAdDynamicFeedElementValue * _marginBottom; // +0xc0
    UIColor * _borderColorExt; // +0xc8
    WCAdDynamicFeedElementValue * _borderWidth; // +0xd0
    WCAdDynamicFeedElementValue * _borderRadius; // +0xd8
    NSString * _alpha; // +0xe0
    NSString * _overflow; // +0xe8
    WCAdDynamicFeedElementAutoSizeInfo * _autoSize; // +0xf0
    NSString * _clickType; // +0xf8
    NSString * _clickTransitionType; // +0x100
    NSString * _text; // +0x108
    WCAdDynamicFeedElementValue * _fontSize; // +0x110
    UIColor * _colorExt; // +0x118
    NSString * _fontWeight; // +0x120
    NSString * _fontName; // +0x128
    WCAdDynamicFeedElementValue * _lineHeight; // +0x130
    WCAdDynamicFeedElementValue * _lineSpacing; // +0x138
    NSString * _textAlign; // +0x140
    NSString * _whiteSpace; // +0x148
    NSString * _wordBreak; // +0x150
    NSString * _textOverflow; // +0x158
    NSString * _lineClamp; // +0x160
    NSString * _url; // +0x168
    NSString * _urlDark; // +0x170
    NSString * _urliOS; // +0x178
    NSString * _urlDarkiOS; // +0x180
    NSString * _objectFit; // +0x188
    NSString * _localImageResource; // +0x190
    WCAdDynamicFeedElementInfo * _hoverStyle; // +0x198
    WCAdDynamicFeedElementInfo * _disabledStyle; // +0x1a0
    NSString * _display; // +0x1a8
    NSString * _position; // +0x1b0
    NSString * _flexWrap; // +0x1b8
    NSString * _flexDirection; // +0x1c0
    NSString * _justifyContent; // +0x1c8
    NSString * _alignItems; // +0x1d0
    NSString * _flex; // +0x1d8
    NSString * _flexGrow; // +0x1e0
    NSString * _flexShrink; // +0x1e8
    NSArray * _attachAnimations; // +0x1f0
    NSString * _separatorDirection; // +0x1f8
    WCAdDynamicFeedElementAbsoluteContainerInfo * _absoluteContainer; // +0x200
    NSArray * _children; // +0x208
    NSString * _clickIndex; // +0x210
    WCAdDynamicFeedElementValue * _backgroundColor; // +0x218
    WCAdDynamicFeedElementValue * _backgroundColorDark; // +0x220
    WCAdDynamicFeedElementValue * _borderColor; // +0x228
    WCAdDynamicFeedElementValue * _borderColorDark; // +0x230
    WCAdDynamicFeedElementValue * _color; // +0x238
    WCAdDynamicFeedElementValue * _colorDark; // +0x240
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)modelCustomTransformFromDictionary:(id)arg1 forConfigTag:(id)arg2;
- (BOOL)parseElementValuesWithBasicWidth:(int)arg1 basicRootFontSize:(int)arg2;
- (BOOL)parseElementValuesWithBasicWidth:(int)arg1 basicRootFontSize:(int)arg2 verityType:(BOOL)arg3;
- (id)findTheMainElementInfo;
- (BOOL)isImageValueValidForPredownload:(id)arg1;
- (id)fetchPredownloadImageResources;
- (BOOL)isElementTypeValid;
- (BOOL)isClickTypeValid;
- (void)parseAutoSizeAdapteInfo;
- (id)backgroundColorExt;
- (id)colorExt;
- (id)borderColorExt;
- (void)processWithInfluentElementInfos:(id)arg1;
- (void)mergeInfoWithInfluentElementInfo:(id)arg1;
- (void)resetPropertiesWithInfluentElementInfo:(id)arg1;
- (void)resetPropertyWithPropertyName:(id)arg1;
- (id)elementId;
- (void)setElementId:(id)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (id)width;
- (void)setWidth:(id)arg1;
- (id)height;
- (void)setHeight:(id)arg1;
- (id)left;
- (void)setLeft:(id)arg1;
- (id)top;
- (void)setTop:(id)arg1;
- (id)right;
- (void)setRight:(id)arg1;
- (id)bottom;
- (void)setBottom:(id)arg1;
- (id)minWidth;
- (void)setMinWidth:(id)arg1;
- (id)maxWidth;
- (void)setMaxWidth:(id)arg1;
- (id)minHeight;
- (void)setMinHeight:(id)arg1;
- (id)maxHeight;
- (void)setMaxHeight:(id)arg1;
- (void)setBackgroundColorExt:(id)arg1;
- (id)padding;
- (void)setPadding:(id)arg1;
- (id)paddingLeft;
- (void)setPaddingLeft:(id)arg1;
- (id)paddingTop;
- (void)setPaddingTop:(id)arg1;
- (id)paddingRight;
- (void)setPaddingRight:(id)arg1;
- (id)paddingBottom;
- (void)setPaddingBottom:(id)arg1;
- (id)margin;
- (void)setMargin:(id)arg1;
- (id)marginLeft;
- (void)setMarginLeft:(id)arg1;
- (id)marginTop;
- (void)setMarginTop:(id)arg1;
- (id)marginRight;
- (void)setMarginRight:(id)arg1;
- (id)marginBottom;
- (void)setMarginBottom:(id)arg1;
- (void)setBorderColorExt:(id)arg1;
- (id)borderWidth;
- (void)setBorderWidth:(id)arg1;
- (id)borderRadius;
- (void)setBorderRadius:(id)arg1;
- (id)alpha;
- (void)setAlpha:(id)arg1;
- (id)overflow;
- (void)setOverflow:(id)arg1;
- (id)autoSize;
- (void)setAutoSize:(id)arg1;
- (id)clickType;
- (void)setClickType:(id)arg1;
- (id)clickTransitionType;
- (void)setClickTransitionType:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (id)fontSize;
- (void)setFontSize:(id)arg1;
- (void)setColorExt:(id)arg1;
- (id)fontWeight;
- (void)setFontWeight:(id)arg1;
- (id)fontName;
- (void)setFontName:(id)arg1;
- (id)lineHeight;
- (void)setLineHeight:(id)arg1;
- (id)lineSpacing;
- (void)setLineSpacing:(id)arg1;
- (id)textAlign;
- (void)setTextAlign:(id)arg1;
- (id)whiteSpace;
- (void)setWhiteSpace:(id)arg1;
- (id)wordBreak;
- (void)setWordBreak:(id)arg1;
- (id)textOverflow;
- (void)setTextOverflow:(id)arg1;
- (id)lineClamp;
- (void)setLineClamp:(id)arg1;
- (BOOL)isNormalStyle;
- (void)setIsNormalStyle:(BOOL)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)urlDark;
- (void)setUrlDark:(id)arg1;
- (id)urliOS;
- (void)setUrliOS:(id)arg1;
- (id)urlDarkiOS;
- (void)setUrlDarkiOS:(id)arg1;
- (id)objectFit;
- (void)setObjectFit:(id)arg1;
- (id)localImageResource;
- (void)setLocalImageResource:(id)arg1;
- (id)hoverStyle;
- (void)setHoverStyle:(id)arg1;
- (id)disabledStyle;
- (void)setDisabledStyle:(id)arg1;
- (id)display;
- (void)setDisplay:(id)arg1;
- (id)position;
- (void)setPosition:(id)arg1;
- (id)flexWrap;
- (void)setFlexWrap:(id)arg1;
- (id)flexDirection;
- (void)setFlexDirection:(id)arg1;
- (id)justifyContent;
- (void)setJustifyContent:(id)arg1;
- (id)alignItems;
- (void)setAlignItems:(id)arg1;
- (id)flex;
- (void)setFlex:(id)arg1;
- (id)flexGrow;
- (void)setFlexGrow:(id)arg1;
- (id)flexShrink;
- (void)setFlexShrink:(id)arg1;
- (BOOL)hideForElderMode;
- (void)setHideForElderMode:(BOOL)arg1;
- (id)attachAnimations;
- (void)setAttachAnimations:(id)arg1;
- (id)separatorDirection;
- (void)setSeparatorDirection:(id)arg1;
- (id)absoluteContainer;
- (void)setAbsoluteContainer:(id)arg1;
- (id)children;
- (void)setChildren:(id)arg1;
- (id)clickIndex;
- (void)setClickIndex:(id)arg1;
- (BOOL)isValid;
- (void)setIsValid:(BOOL)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColorDark;
- (void)setBackgroundColorDark:(id)arg1;
- (id)borderColor;
- (void)setBorderColor:(id)arg1;
- (id)borderColorDark;
- (void)setBorderColorDark:(id)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (id)colorDark;
- (void)setColorDark:(id)arg1;
- (void).cxx_destruct;
@end
