@interface VoIPMultiTalkMessageItem : NSObject <NSCopying>
{
    BOOL _isCaller; // +0x8
    int _roomType; // +0xc
    int _recordSource; // +0x10
    NSNumber * _talkingTime; // +0x18
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)talkingTime;
- (void)setTalkingTime:(id)arg1;
- (int)roomType;
- (void)setRoomType:(int)arg1;
- (BOOL)isCaller;
- (void)setIsCaller:(BOOL)arg1;
- (int)recordSource;
- (void)setRecordSource:(int)arg1;
- (void).cxx_destruct;
@end
