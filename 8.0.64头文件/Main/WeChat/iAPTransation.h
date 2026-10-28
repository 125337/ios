@interface iAPTransation : NSObject
{
    unsigned int iRequestType; // +0x8
    unsigned int iBizType; // +0xc
    NSString * nsProductID; // +0x10
    NSString * nsTransationID; // +0x18
    NSString * nsSerialID; // +0x20
}
- (id)description;
- (id)nsProductID;
- (void)setNsProductID:(id)arg1;
- (id)nsTransationID;
- (void)setNsTransationID:(id)arg1;
- (id)nsSerialID;
- (void)setNsSerialID:(id)arg1;
- (unsigned int)iRequestType;
- (void)setIRequestType:(unsigned int)arg1;
- (unsigned int)iBizType;
- (void)setIBizType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
