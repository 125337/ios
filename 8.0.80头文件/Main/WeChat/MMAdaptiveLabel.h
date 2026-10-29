@interface MMAdaptiveLabel : MMCPLabel
{
    int m_adaptiveType; // +0x8
}
+ (CGSize)getIdealSize:(id)arg1 initSize:(CGSize)arg2 forAdaptiveType:(int)arg3;
- (void)internalAdjustFrame:(CGRect *)arg1;
- (void)adjustSize;
- (void)setAdaptiveType:(int)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setSize:(CGSize)arg1;
- (void)setText:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setLineBreakMode:(long long)arg1;
@end
