@interface WCCanvasRandomLayoutInfo : MMObject <NSCoding>
{
    unsigned int _cornerRadius; // +0x8
    NSArray * _layoutItems; // +0x10
    NSString * _hugeDiskTransitionImg; // +0x18
    NSString * _hugeDiskTransitionColor; // +0x20
    double _hugeDiskTransitionColorAlpha; // +0x28
    NSArray * _transitionImgs; // +0x30
    WCCanvasRandomLayoutTransitionAnimationInfo * _transitionAnimationInfo; // +0x38
    WCCanvasRandomLayoutEncoreInfo * _encoreInfo; // +0x40
    WCCanvasRandomLayoutEncorePickInfo * _randomEncorePickInfo; // +0x48
    NSString * _theChosenRandomCardId; // +0x50
}
+ (id)fromXML:(XmlReaderNode_t *)arg1 withSizeType:(long long)arg2 basicWidth:(int)arg3 basicRootFontSize:(int)arg4 widthRoundingType:(long long)arg5 heightRoundingType:(long long)arg6;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)layoutItems;
- (void)setLayoutItems:(id)arg1;
- (unsigned int)cornerRadius;
- (void)setCornerRadius:(unsigned int)arg1;
- (id)hugeDiskTransitionImg;
- (void)setHugeDiskTransitionImg:(id)arg1;
- (id)hugeDiskTransitionColor;
- (void)setHugeDiskTransitionColor:(id)arg1;
- (double)hugeDiskTransitionColorAlpha;
- (void)setHugeDiskTransitionColorAlpha:(double)arg1;
- (id)transitionImgs;
- (void)setTransitionImgs:(id)arg1;
- (id)transitionAnimationInfo;
- (void)setTransitionAnimationInfo:(id)arg1;
- (id)encoreInfo;
- (void)setEncoreInfo:(id)arg1;
- (id)randomEncorePickInfo;
- (void)setRandomEncorePickInfo:(id)arg1;
- (id)theChosenRandomCardId;
- (void)setTheChosenRandomCardId:(id)arg1;
- (void).cxx_destruct;
@end

