@interface WCAdBrandSingleTopicInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    NSString * _topicUrl; // +0x8
    NSString * _topicUrlDark; // +0x10
    double _topicWidth; // +0x18
    double _topicHeight; // +0x20
    NSString * _bottomImageUrl; // +0x28
    NSString * _bottomImageUrlDark; // +0x30
    double _bottomImageWidth; // +0x38
    double _bottomImageHeight; // +0x40
    WCAdCardBtnInfo * _clickActionInfo; // +0x48
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)topicUrl;
- (void)setTopicUrl:(id)arg1;
- (id)topicUrlDark;
- (void)setTopicUrlDark:(id)arg1;
- (double)topicWidth;
- (void)setTopicWidth:(double)arg1;
- (double)topicHeight;
- (void)setTopicHeight:(double)arg1;
- (id)bottomImageUrl;
- (void)setBottomImageUrl:(id)arg1;
- (id)bottomImageUrlDark;
- (void)setBottomImageUrlDark:(id)arg1;
- (double)bottomImageWidth;
- (void)setBottomImageWidth:(double)arg1;
- (double)bottomImageHeight;
- (void)setBottomImageHeight:(double)arg1;
- (id)clickActionInfo;
- (void)setClickActionInfo:(id)arg1;
- (void).cxx_destruct;
@end
