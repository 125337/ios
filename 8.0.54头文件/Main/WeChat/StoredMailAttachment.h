@interface StoredMailAttachment : NSObject <NSCoding>
{
    unsigned int type; // +0x8
    unsigned int dataSize; // +0xc
    NSString * objectId; // +0x10
    NSString * objectName; // +0x18
    NSData * data; // +0x20
    NSString * attachID; // +0x28
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)objectId;
- (void)setObjectId:(id)arg1;
- (id)objectName;
- (void)setObjectName:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (unsigned int)dataSize;
- (void)setDataSize:(unsigned int)arg1;
- (id)attachID;
- (void)setAttachID:(id)arg1;
- (void).cxx_destruct;
@end

