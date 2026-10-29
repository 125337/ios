@interface PatDisplayConfiguration : NSObject
{
    BOOL _showLink; // +0x8
    BOOL _showTextStateIcon; // +0x9
    BOOL _showHighlightPat; // +0xa
    BOOL _enableChangeSuffixRemind; // +0xb
}
+ (id)chatConfiguration;
+ (id)pureTextConfiguration;
+ (id)attributedHighlightConfiguration;
- (BOOL)showLink;
- (void)setShowLink:(BOOL)arg1;
- (BOOL)showTextStateIcon;
- (void)setShowTextStateIcon:(BOOL)arg1;
- (BOOL)showHighlightPat;
- (void)setShowHighlightPat:(BOOL)arg1;
- (BOOL)enableChangeSuffixRemind;
- (void)setEnableChangeSuffixRemind:(BOOL)arg1;
@end

