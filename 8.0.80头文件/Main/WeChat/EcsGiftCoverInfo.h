@interface EcsGiftCoverInfo : MMObject <NSCopying>
{
    NSString * _msgCover; // +0x8
    NSString * _boxOuterCover; // +0x10
    NSString * _boxInnerCover; // +0x18
    NSString * _normalCover; // +0x20
    NSString * _videoRecvCover; // +0x28
    NSString * _videoNomalCover; // +0x30
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)msgCover;
- (void)setMsgCover:(id)arg1;
- (id)boxOuterCover;
- (void)setBoxOuterCover:(id)arg1;
- (id)boxInnerCover;
- (void)setBoxInnerCover:(id)arg1;
- (id)normalCover;
- (void)setNormalCover:(id)arg1;
- (id)videoRecvCover;
- (void)setVideoRecvCover:(id)arg1;
- (id)videoNomalCover;
- (void)setVideoNomalCover:(id)arg1;
- (void).cxx_destruct;
@end
