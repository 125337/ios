@interface WCAdShowroomInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    double _containerWidth; // +0x8
    double _containerHeight; // +0x10
    double _containerMaxWidth; // +0x18
    double _containerMarginBottom; // +0x20
    NSArray * _layerList; // +0x28
    NSString * _slideTitle; // +0x30
    NSString * _slideJumpTitle; // +0x38
    WCAdCardBtnInfo * _slideActionInfo; // +0x40
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (double)resolvedContainerMarginBottom;
- (double)resolvedContainerMaxWidth;
- (unsigned long long)baselineLayerIndex;
- (double)containerWidth;
- (void)setContainerWidth:(double)arg1;
- (double)containerHeight;
- (void)setContainerHeight:(double)arg1;
- (double)containerMaxWidth;
- (void)setContainerMaxWidth:(double)arg1;
- (double)containerMarginBottom;
- (void)setContainerMarginBottom:(double)arg1;
- (id)layerList;
- (void)setLayerList:(id)arg1;
- (id)slideTitle;
- (void)setSlideTitle:(id)arg1;
- (id)slideJumpTitle;
- (void)setSlideJumpTitle:(id)arg1;
- (id)slideActionInfo;
- (void)setSlideActionInfo:(id)arg1;
- (void).cxx_destruct;
@end
