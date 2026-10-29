@interface WCFinderFeedContentTextViewConfig : NSObject
{
    BOOL _isForceExpand; // +0x8
    BOOL _hideExpandButton; // +0x9
    BOOL _forbidLinkClickAction; // +0xa
    BOOL _useGradientSuffix; // +0xb
    BOOL _extendSuffixMaskViewEdges; // +0xc
    BOOL _truncatedTrailingAlignToEnd; // +0xd
    BOOL _autoHandleURLLink; // +0xe
    NSString * _content; // +0x10
    NSString * _prefix; // +0x18
    NSArray * _prefixViewArray; // +0x20
    NSString * _linkText; // +0x28
    UIFont * _font; // +0x30
    UIColor * _linkColor; // +0x38
    double _width; // +0x40
    double _lineSpacing; // +0x48
    double _rightIconPadding; // +0x50
    unsigned long long _unExpandLineNum; // +0x58
    NSArray * _suffixViewArr; // +0x60
    NSNumber * _suffixViewMargin; // +0x68
    unsigned long long _suffixType; // +0x70
    unsigned long long _suffixUIStyleType; // +0x78
    UIColor * _suffixGradientColor; // +0x80
    double _firstLineOriginX; // +0x88
}
+ (id)defaultConfig;
+ (unsigned long long)getCurSuffixUIStyleTypeIncludeXLabSwitch:(BOOL)arg1;
- (id)init;
- (id)content;
- (void)setContent:(id)arg1;
- (id)prefix;
- (void)setPrefix:(id)arg1;
- (id)prefixViewArray;
- (void)setPrefixViewArray:(id)arg1;
- (id)linkText;
- (void)setLinkText:(id)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (id)linkColor;
- (void)setLinkColor:(id)arg1;
- (double)width;
- (void)setWidth:(double)arg1;
- (double)lineSpacing;
- (void)setLineSpacing:(double)arg1;
- (double)rightIconPadding;
- (void)setRightIconPadding:(double)arg1;
- (BOOL)isForceExpand;
- (void)setIsForceExpand:(BOOL)arg1;
- (unsigned long long)unExpandLineNum;
- (void)setUnExpandLineNum:(unsigned long long)arg1;
- (BOOL)hideExpandButton;
- (void)setHideExpandButton:(BOOL)arg1;
- (BOOL)forbidLinkClickAction;
- (void)setForbidLinkClickAction:(BOOL)arg1;
- (id)suffixViewArr;
- (void)setSuffixViewArr:(id)arg1;
- (id)suffixViewMargin;
- (void)setSuffixViewMargin:(id)arg1;
- (unsigned long long)suffixType;
- (void)setSuffixType:(unsigned long long)arg1;
- (unsigned long long)suffixUIStyleType;
- (void)setSuffixUIStyleType:(unsigned long long)arg1;
- (id)suffixGradientColor;
- (void)setSuffixGradientColor:(id)arg1;
- (BOOL)useGradientSuffix;
- (void)setUseGradientSuffix:(BOOL)arg1;
- (double)firstLineOriginX;
- (void)setFirstLineOriginX:(double)arg1;
- (BOOL)extendSuffixMaskViewEdges;
- (void)setExtendSuffixMaskViewEdges:(BOOL)arg1;
- (BOOL)truncatedTrailingAlignToEnd;
- (void)setTruncatedTrailingAlignToEnd:(BOOL)arg1;
- (BOOL)autoHandleURLLink;
- (void)setAutoHandleURLLink:(BOOL)arg1;
- (void).cxx_destruct;
@end
