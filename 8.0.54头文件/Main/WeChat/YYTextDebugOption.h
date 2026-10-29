@interface YYTextDebugOption : NSObject <NSCopying>
{
    UIColor * _baselineColor; // +0x8
    UIColor * _CTFrameBorderColor; // +0x10
    UIColor * _CTFrameFillColor; // +0x18
    UIColor * _CTLineBorderColor; // +0x20
    UIColor * _CTLineFillColor; // +0x28
    UIColor * _CTLineNumberColor; // +0x30
    UIColor * _CTRunBorderColor; // +0x38
    UIColor * _CTRunFillColor; // +0x40
    UIColor * _CTRunNumberColor; // +0x48
    UIColor * _CGGlyphBorderColor; // +0x50
    UIColor * _CGGlyphFillColor; // +0x58
}
+ (void)addDebugTarget:(id)arg1;
+ (void)removeDebugTarget:(id)arg1;
+ (id)sharedDebugOption;
+ (void)setSharedDebugOption:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)needDrawDebug;
- (void)clear;
- (id)baselineColor;
- (void)setBaselineColor:(id)arg1;
- (id)CTFrameBorderColor;
- (void)setCTFrameBorderColor:(id)arg1;
- (id)CTFrameFillColor;
- (void)setCTFrameFillColor:(id)arg1;
- (id)CTLineBorderColor;
- (void)setCTLineBorderColor:(id)arg1;
- (id)CTLineFillColor;
- (void)setCTLineFillColor:(id)arg1;
- (id)CTLineNumberColor;
- (void)setCTLineNumberColor:(id)arg1;
- (id)CTRunBorderColor;
- (void)setCTRunBorderColor:(id)arg1;
- (id)CTRunFillColor;
- (void)setCTRunFillColor:(id)arg1;
- (id)CTRunNumberColor;
- (void)setCTRunNumberColor:(id)arg1;
- (id)CGGlyphBorderColor;
- (void)setCGGlyphBorderColor:(id)arg1;
- (id)CGGlyphFillColor;
- (void)setCGGlyphFillColor:(id)arg1;
- (void).cxx_destruct;
@end

