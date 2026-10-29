@interface GameCenterMsgActionInfo : NSObject
{
    int _type; // +0x8
    NSString * _jumpUrl; // +0x10
}
+ (id)parseFromXml:(XmlReaderNode_t *)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (id)jumpUrl;
- (void)setJumpUrl:(id)arg1;
- (void).cxx_destruct;
@end
