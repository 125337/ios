@interface EcsKFMsgItem : MMObject
{
    BOOL _needHeader; // +0x8
    unsigned int _minUpdateUnixTimeStamp; // +0xc
    NSString * _frameSetName; // +0x10
    NSString * _mbCardData; // +0x18
    NSString * _summary; // +0x20
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)description;
- (id)frameSetName;
- (void)setFrameSetName:(id)arg1;
- (id)mbCardData;
- (void)setMbCardData:(id)arg1;
- (unsigned int)minUpdateUnixTimeStamp;
- (void)setMinUpdateUnixTimeStamp:(unsigned int)arg1;
- (BOOL)needHeader;
- (void)setNeedHeader:(BOOL)arg1;
- (id)summary;
- (void)setSummary:(id)arg1;
- (void).cxx_destruct;
@end
