@interface WCFinderRichTextStyleGroup : NSObject <NSCopying>
{
    BOOL _showExpandClosure; // +0x8
    unsigned long long _styleHash; // +0x10
    double _width; // +0x18
    WCFinderRichTextRenderedStyle * _textStyle; // +0x20
    WCFinderRichTextRenderedStyle * _suffixStyle; // +0x28
}
+ (id)empty;
+ (id)make:(id)arg1 styleHash:(unsigned long long)arg2 suffixConfig:(id)arg3 content:(id)arg4 closureContent:(id)arg5 expandWording:(id)arg6 width:(double)arg7 isExpanded:(BOOL)arg8 showExpand:(BOOL)arg9 alwaysDisplayExpand:(BOOL)arg10 expandColor:(id)arg11 lineNumber:(long long)arg12 expandedLineNumber:(long long)arg13;
- (id)copyWithZone:(_NSZone *)arg1;
- (double)styleWidth;
- (double)styleHeight:(double)arg1;
- (unsigned long long)styleHash;
- (void)setStyleHash:(unsigned long long)arg1;
- (double)width;
- (void)setWidth:(double)arg1;
- (id)textStyle;
- (void)setTextStyle:(id)arg1;
- (id)suffixStyle;
- (void)setSuffixStyle:(id)arg1;
- (BOOL)showExpandClosure;
- (void)setShowExpandClosure:(BOOL)arg1;
- (void).cxx_destruct;
@end
