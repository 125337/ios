@interface WCAdBrandTopicInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    double _containerWidth; // +0x8
    double _containerHeight; // +0x10
    double _containerCornerRadius; // +0x18
    NSString * _brandPreludeUrl; // +0x20
    NSString * _brandPreludeUrlDark; // +0x28
    double _brandPreludeWidth; // +0x30
    double _brandPreludeHeight; // +0x38
    unsigned long long _brandPreludeAnimDelayTime; // +0x40
    NSArray * _topicInfoList; // +0x48
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (double)containerWidth;
- (void)setContainerWidth:(double)arg1;
- (double)containerHeight;
- (void)setContainerHeight:(double)arg1;
- (double)containerCornerRadius;
- (void)setContainerCornerRadius:(double)arg1;
- (id)brandPreludeUrl;
- (void)setBrandPreludeUrl:(id)arg1;
- (id)brandPreludeUrlDark;
- (void)setBrandPreludeUrlDark:(id)arg1;
- (double)brandPreludeWidth;
- (void)setBrandPreludeWidth:(double)arg1;
- (double)brandPreludeHeight;
- (void)setBrandPreludeHeight:(double)arg1;
- (unsigned long long)brandPreludeAnimDelayTime;
- (void)setBrandPreludeAnimDelayTime:(unsigned long long)arg1;
- (id)topicInfoList;
- (void)setTopicInfoList:(id)arg1;
- (void).cxx_destruct;
@end
