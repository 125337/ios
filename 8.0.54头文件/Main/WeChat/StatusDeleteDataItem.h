@interface StatusDeleteDataItem : NSObject
{
    unsigned int _sequence; // +0x8
    NSString * _username; // +0x10
    NSString * _textStateId; // +0x18
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)description;
- (BOOL)isValid;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)textStateId;
- (void)setTextStateId:(id)arg1;
- (unsigned int)sequence;
- (void)setSequence:(unsigned int)arg1;
- (void).cxx_destruct;
@end

