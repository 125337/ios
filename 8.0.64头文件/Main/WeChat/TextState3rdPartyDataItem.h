@interface TextState3rdPartyDataItem : NSObject
{
    unsigned int _type; // +0x8
    NSString * _buffer; // +0x10
    NSString * _keyBuffer; // +0x18
}
- (id)initWithJumpInfo:(id)arg1;
- (id)jumpInfo;
- (BOOL)isEqualToDataItem:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)buffer;
- (void)setBuffer:(id)arg1;
- (id)keyBuffer;
- (void)setKeyBuffer:(id)arg1;
- (void).cxx_destruct;
@end
