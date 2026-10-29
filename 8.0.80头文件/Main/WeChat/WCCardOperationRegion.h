@interface WCCardOperationRegion : MMObject
{
    unsigned int _type; // +0x8
    unsigned int _endTime; // +0xc
    NSString * _text; // +0x10
    NSString * _url; // +0x18
    NSString * _thumbUrl; // +0x20
}
- (BOOL)operationAvalid;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (unsigned int)endTime;
- (void)setEndTime:(unsigned int)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (void).cxx_destruct;
@end
