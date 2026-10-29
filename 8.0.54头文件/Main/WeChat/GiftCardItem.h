@interface GiftCardItem : MMObject <PBCoding, NSCopying>
{
    unsigned int _bizUin; // +0x8
    unsigned int _ver; // +0xc
    NSString * _orderId; // +0x10
    NSString * _appName; // +0x18
    NSString * _recvDigest; // +0x20
    NSString * _sendDigest; // +0x28
    NSString * _backgroundPicUrl; // +0x30
    NSString * _titleColorStr; // +0x38
    NSString * _descColorStr; // +0x40
}
+ (void)PBArrayAdd_bizUin;
+ (void)PBArrayAdd_orderId;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned int)bizUin;
- (void)setBizUin:(unsigned int)arg1;
- (id)orderId;
- (void)setOrderId:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)recvDigest;
- (void)setRecvDigest:(id)arg1;
- (id)sendDigest;
- (void)setSendDigest:(id)arg1;
- (id)backgroundPicUrl;
- (void)setBackgroundPicUrl:(id)arg1;
- (id)titleColorStr;
- (void)setTitleColorStr:(id)arg1;
- (id)descColorStr;
- (void)setDescColorStr:(id)arg1;
- (unsigned int)ver;
- (void)setVer:(unsigned int)arg1;
- (void).cxx_destruct;
@end

